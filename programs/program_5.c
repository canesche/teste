
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <init_dyn_array.h>
#include <pips_runtime.h>


int main(int argc, const char* argv[])
{
srand(time(NULL));

float **A = create_two_dim_float(4096, 4096, "random");
float **B = create_two_dim_float(4096, 4096, "random");

int i,j,k,l;
clock_t start = clock();


for ( i = 4; i < 4096; i++)
for ( j = 0; j < 4094; j++)
A[i][j] = A[i-4][j+2] + B[i][j];



clock_t stop = clock();
double elapsed = ((double)(stop - start)) / CLOCKS_PER_SEC;

printf("%7.5lf\n",elapsed*1.0e3);

deallocate_2d_array(A, 4096, 4096);
deallocate_2d_array(B, 4096, 4096);
return 0;
}
