import os
import subprocess
import tempfile
import uuid

from IPython.core.magic import Magics, cell_magic, magics_class
from IPython.core.magic_arguments import argument, magic_arguments, parse_argstring
from common import helper

compiler = '/usr/local/cuda/bin/nvcc'
ext = '.cu'


@magics_class
class NVCCPlugin(Magics):

    def __init__(self, shell):
        super(NVCCPlugin, self).__init__(shell)

        self.argparser = helper.get_argparser()

    @staticmethod
    def compile(file_path):
        subprocess.check_output(
            [compiler, file_path + ext, "-o", file_path + ".out", '-Wno-deprecated-gpu-targets'], stderr=subprocess.STDOUT)

    def run(self, file_path, timeit=False):
        if timeit:
            stmt = f"subprocess.check_output(['nvprof {file_path}.out'], stderr=subprocess.STDOUT)"
            output = self.shell.run_cell_magic(
                magic_name="timeit", line="-q -o import subprocess", cell=stmt)
        else:
            output = subprocess.check_output(
                [file_path + ".out"], stderr=subprocess.STDOUT)
            output = output.decode('utf8')
            
        helper.print_out(output)
        return None
    
    def run_nvprof(self, file_path, metrics='', timeit=False):
        
        if metrics != '':
            output = subprocess.check_output(
                ["nvprof", metrics, file_path + ".out"], stderr=subprocess.STDOUT)
        else:
            output = subprocess.check_output(
                ["nvprof", file_path + ".out"], stderr=subprocess.STDOUT)
        output = output.decode('utf8')
            
        helper.print_out(output)
        return None
    
    def run_nvprofmetric(self, file_path, metrics='', timeit=False):
        
        if metrics != '':
            output = subprocess.check_output(
                ["nvprof", metrics, file_path + ".out"], stderr=subprocess.STDOUT)
        else:
            output = subprocess.check_output(
                ["nvprof", file_path + ".out"], stderr=subprocess.STDOUT)
        
        print(output)

        output = output.decode('utf8')
            
        helper.print_out(output)
        return None

    @cell_magic
    def cu(self, line, cell):
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
                output = self.run(file_path, timeit=args.timeit)
            except subprocess.CalledProcessError as e:
                helper.print_out(e.output.decode("utf8"))
                output = None
        return output
    
    @cell_magic
    def gpu(self, line, cell):
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
                output = self.run(file_path, timeit=args.timeit)
            except subprocess.CalledProcessError as e:
                helper.print_out(e.output.decode("utf8"))
                output = None
        return output
    
    @magic_arguments()
    @argument('-m', '--metrics', type=str, help='arguments metrics')
    @cell_magic
    def nvprof(self, line='', cell=None):

        print(line)

        with tempfile.TemporaryDirectory() as tmp_dir:
            file_path = os.path.join(tmp_dir, str(uuid.uuid4()))
            with open(file_path + ext, "w") as f:
                f.write(cell)
            try:
                self.compile(file_path)
                output = self.run_nvprof(file_path,metrics=line, timeit=False)
            except subprocess.CalledProcessError as e:
                helper.print_out(e.output.decode("utf8"))
                output = None
        return output
    
    @magic_arguments()
    @argument('-m', '--metrics', type=str, help='arguments metrics')
    @cell_magic
    def nvprofmetric(self, line='', cell=None):

        print(line)

        with tempfile.TemporaryDirectory() as tmp_dir:
            file_path = os.path.join(tmp_dir, str(uuid.uuid4()))
            with open(file_path + ext, "w") as f:
                f.write(cell)
            try:
                self.compile(file_path)
                output = self.run_nvprofmetric(file_path,metrics=line, timeit=False)
            except subprocess.CalledProcessError as e:
                helper.print_out(e.output.decode("utf8"))
                output = None
        return output
