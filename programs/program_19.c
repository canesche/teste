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

for ( i = 1; i < 56; i++)
for ( j = 1; j < 53; j++)
for ( k = 8; k < 62; k++)
{
A[i][j][k]=A[i-1][j-1][k-1]*A[i-1][j-1][k-1]+66;
B[j][k][i]=B[j+11][k-5][i+2]*B[j-1][k+2][i+8]+8;
C[i][j][k]=C[i][j-1][k]-C[i][j+2][k-8]*C[i+1][j+1][k+1]+92;
}

clock_t stop = clock();
double elapsed = ((double)(stop - start)) / CLOCKS_PER_SEC;
printf("%7.5lf\n",elapsed*1.0e3);
deallocate_3d_array(A, 64, 64, 64);
deallocate_3d_array(B, 64, 64, 64);
deallocate_3d_array(C, 64, 64, 64);
return 0;
}
