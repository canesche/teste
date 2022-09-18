#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <init_dyn_array.h>
#include <pips_runtime.h>


int main(int argc, const char* argv[])
{
srand(time(NULL));

float ***A = create_three_dim_float(64, 64, 64, "random");
float ***B = create_three_dim_float(64, 64, 64, "random");
float ***C = create_three_dim_float(64, 64, 64, "random");
int i,j,k,l;
clock_t start = clock();

#pragma @ICE loop=tile
for ( i = 8; i < 62; i++)
for ( j = 2; j < 61; j++)
for ( k = 8; k < 61; k++)
{
A[i][j][k]=A[i][j-1][k]-A[i][j+2][k-8]+A[i+1][j+1][k+1]*A[i+1][j-2][k+1]*A[i+1][j+3][k-8]-A[i+2][j+2][k+2]+72;
B[j][k][i]=B[j][k-1][i]+B[j][k+2][i-8]+B[j+1][k+1][i+1]+B[j+1][k-2][i+1]+B[j+1][k+3][i-8]+B[j+2][k+2][i+2]+95;
C[i][j][k]=C[i][j-1][k]*C[i][j+2][k-8]+C[i+1][j+1][k+1]*C[i+1][j-2][k+1]+C[i+1][j+3][k-8]*C[i+2][j+2][k+2]+10;
}

clock_t stop = clock();
double elapsed = ((double)(stop - start)) / CLOCKS_PER_SEC;
printf("%7.5lf\n",elapsed*1.0e3);
deallocate_3d_array(A, 64, 64, 64);
deallocate_3d_array(B, 64, 64, 64);
deallocate_3d_array(C, 64, 64, 64);
return 0;
}
