
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <init_dyn_array.h>
#include <pips_runtime.h>


int main(int argc, const char* argv[])
{
srand(time(NULL));

float **A = create_two_dim_float(2048, 2048, "random");
float **B = create_two_dim_float(2048, 2048, "random");
float **C = create_two_dim_float(2048, 2048, "random");

int i,j,k,l;
clock_t start = clock();


for ( i = 5; i < 2048; i++)
for ( j = 1; j < 2048; j++)
A[i][j] = A[i-5][j-1]+A[i-1][j-1] + B[j][i] + C[i][j];


clock_t stop = clock();
double elapsed = ((double)(stop - start)) / CLOCKS_PER_SEC;

printf("%7.5lf\n",elapsed*1.0e3);

deallocate_2d_array(A, 2048, 2048);
deallocate_2d_array(B, 2048, 2048);
deallocate_2d_array(C, 2048, 2048);
return 0;
}
