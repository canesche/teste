#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <init_dyn_array.h>
#include <pips_runtime.h>


int main(int argc, const char* argv[])
{
srand(time(NULL));

float **A = create_two_dim_float(1024, 1024, "random");
float **B = create_two_dim_float(1024, 1024, "random");
int i,j,k,l;
clock_t start = clock();

for ( i = 1; i < 1020; i++)
for ( j = 2; j < 1022; j++)
for ( k = 5; k < 1022; k++)
{
A[i][j]=A[i+3][j-2]-A[j][k]-A[k][i]+4;
A[i][k]=A[i+4][k-5]+B[k][i]*A[k][i]+A[i-1][k+2]+B[k][i]-A[i][j]-A[j][i]+31;
A[j][i]=A[j+2][i-1]-B[i][k]*A[j][i]+27;
}

clock_t stop = clock();
double elapsed = ((double)(stop - start)) / CLOCKS_PER_SEC;
printf("%7.5lf\n",elapsed*1.0e3);
deallocate_2d_array(A, 1024, 1024);
deallocate_2d_array(B, 1024, 1024);
return 0;
}
