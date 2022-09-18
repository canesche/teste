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
float **D = create_two_dim_float(1024, 1024, "random");
float **E = create_two_dim_float(1024, 1024, "random");
int i,j,k,l;
clock_t start = clock();

for ( i = 0; i < 1024; i++)
for ( j = 0; j < 1024; j++)
for ( k = 0; k < 1024; k++)
{
A[j][k]=A[j][k]*A[j][k]*E[j][i]+B[j][k]-C[j][i]+A[i][j]-A[j][k]*C[j][k]*A[j][i]*B[j][i]+D[i][j]+C[j][i]+42;
A[k][i]=A[k][i]-B[j][i]-C[i][j]*E[k][i]*E[i][j]-A[k][i]-C[k][i]*D[k][i]+A[j][k]+B[k][j]+A[j][k]*C[i][k]+78;
A[i][j]=A[i][j]*E[j][k]+E[i][j]-A[k][i]-C[k][i]-B[k][j]-D[j][k]+80;
A[j][i]=A[j][i]*D[i][k]+A[j][k]-A[i][k]+C[k][i]-D[j][i]*E[i][j]+53;
}

clock_t stop = clock();
double elapsed = ((double)(stop - start)) / CLOCKS_PER_SEC;
printf("%7.5lf\n",elapsed*1.0e3);
deallocate_2d_array(A, 1024, 1024);
deallocate_2d_array(B, 1024, 1024);
deallocate_2d_array(C, 1024, 1024);
deallocate_2d_array(D, 1024, 1024);
deallocate_2d_array(E, 1024, 1024);
return 0;
}
