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

for ( i = 0; i < 1024; i++)
for ( j = 0; j < 1024; j++)
for ( k = 0; k < 1024; k++)
{
A[k][i]=A[k][i]-B[j][k]+B[i][k]-A[i][j]*A[k][i]+B[i][k]-A[k][i]-B[k][i]*B[i][j]-B[k][j]*A[j][i]-B[j][k]+A[k][i]*B[j][k]*B[i][j]+A[i][j]+A[j][k]*A[k][i]+A[k][i]*A[j][i]*A[i][k]+A[k][j]*B[i][j]+1;
A[k][j]=A[k][j]+B[k][i]-A[i][k]-B[j][i]-A[k][j]+A[k][i]-B[j][k]+38;
A[i][k]=A[i][k]+A[j][i]-A[j][i]*A[k][j]-A[k][j]+A[j][k]-A[j][i]+97;
}

clock_t stop = clock();
double elapsed = ((double)(stop - start)) / CLOCKS_PER_SEC;
printf("%7.5lf\n",elapsed*1.0e3);
deallocate_2d_array(A, 1024, 1024);
deallocate_2d_array(B, 1024, 1024);
return 0;
}
