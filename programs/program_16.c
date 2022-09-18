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
int i,j,k,l;
clock_t start = clock();


for ( i = 0; i < 56; i++)
for ( j = 1; j < 58; j++)
for ( k = 2; k < 60; k++)
{
A[k][j][i]=A[k+4][j-1][i]+A[k-1][j+2][i]+40;
B[j][k][i]=B[j+6][k-2][i+8]+B[j-1][k+2][i+8]+63;
}

clock_t stop = clock();
double elapsed = ((double)(stop - start)) / CLOCKS_PER_SEC;
printf("%7.5lf\n",elapsed*1.0e3);
deallocate_3d_array(A, 64, 64, 64);
deallocate_3d_array(B, 64, 64, 64);
return 0;
}
