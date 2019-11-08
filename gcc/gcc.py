import os
import subprocess
import tempfile
import uuid

from IPython.core.magic import Magics, cell_magic, magics_class
from IPython.core.magic_arguments import argument, magic_arguments, parse_argstring
from common import helper

compiler = '/usr/bin/gcc'
ext = '.c'

@magics_class
class GCCPlugin(Magics):
    
    def __init__(self, shell):
        super(GCCPlugin, self).__init__(shell)
        self.argparser = helper.get_argparser()
    
    @staticmethod
    def compile(file_path):
        subprocess.check_output([compiler, file_path + ext, "-o", file_path + ".out"], stderr=subprocess.STDOUT)
    
    def run_gcc(self, file_path):
        
        output = subprocess.check_output([file_path + ".out"], stderr=subprocess.STDOUT)
        output = output.decode('utf8')
            
        helper.print_out(output)
        return None

    @cell_magic
    def gcc(self, line, cell):
        try:
            args = self.argparser.parse_args(line.split())
        except SystemExit as e:
            self.argparser.print_help()
            return

        with tempfile.TemporaryDirectory() as tmp_dir:
            file_path = os.path.join(tmp_dir, str(uuid.uuid4()))
            with open(file_path + ext, "w") as f:
                f.write(cell)
            try:
                self.compile(file_path)
                output = self.run_gcc(file_path)
            except subprocess.CalledProcessError as e:
                helper.print_out(e.output.decode("utf8"))
                output = None
        return output