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
A[k][j]=A[k][j]*E[k][j]*E[k][i]-E[j][i]+B[k][i]*D[j][k]*C[i][j]-A[k][j]-D[i][k]+D[j][k]-E[k][i]*A[k][i]*D[j][k]*D[i][k]*A[k][j]-D[k][j]-B[i][j]+C[k][j]-A[k][j]+D[k][i]-D[k][i]+D[j][k]+B[j][i]-B[i][k]+42;
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
