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

for ( i = 5; i < 1024; i++)
for ( j = 1; j < 1020; j++)
for ( k = 3; k < 1019; k++)
{
A[i][j]=A[i-5][j-1]+C[j][i]*A[k][j]+92;
A[k][i]=A[k-3][i]-C[k][j]+B[j][i]-A[j][i]+40;
A[k][j]=A[k+5][j+4]*A[j][k]-A[i][j]+65;
}

clock_t stop = clock();
double elapsed = ((double)(stop - start)) / CLOCKS_PER_SEC;
printf("%7.5lf\n",elapsed*1.0e3);
deallocate_2d_array(A, 1024, 1024);
deallocate_2d_array(B, 1024, 1024);
deallocate_2d_array(C, 1024, 1024);
return 0;
}
