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
A[i][j]=A[i][j]*C[i][k]*B[j][k]-E[k][j]+E[j][k]+30;
A[k][i]=A[k][i]*B[k][i]-C[j][i]*D[k][j]-A[j][k]+52;
A[j][k]=A[j][k]+B[k][j]-E[k][i]*E[i][k]+16;
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
