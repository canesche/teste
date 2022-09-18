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
float **C = create_two_dim_float(1024, 1024, "random");
int i,j,k,l;
clock_t start = clock();

for ( i = 0; i < 1024; i++)
for ( j = 0; j < 1024; j++)
for ( k = 0; k < 1024; k++)
{
A[j][k]=A[j][k]-A[j][k]-C[k][j]*B[j][i]-B[k][j]*C[i][j]*B[i][k]+64;
A[k][j]=A[k][j]*C[i][k]*B[j][i]-A[i][k]+B[i][k]*A[i][k]*C[i][k]+8;
A[i][k]=A[i][k]-B[i][j]+B[j][k]*B[k][i]+46;
}

clock_t stop = clock();
double elapsed = ((double)(stop - start)) / CLOCKS_PER_SEC;
printf("%7.5lf\n",elapsed*1.0e3);
deallocate_2d_array(A, 1024, 1024);
deallocate_2d_array(B, 1024, 1024);
deallocate_2d_array(C, 1024, 1024);
return 0;
}
