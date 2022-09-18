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
for ( j = 10; j < 62; j++)
for ( k = 1; k < 62; k++)
{
A[j][k][i]=A[j-10][k-1][i]*A[j-1][k+2][i]+31;
B[k][j][i]=B[k+1][j-1][i+1]-B[k-1][j+2][i+8]+40;
}

clock_t stop = clock();
double elapsed = ((double)(stop - start)) / CLOCKS_PER_SEC;
printf("%7.5lf\n",elapsed*1.0e3);
deallocate_3d_array(A, 64, 64, 64);
deallocate_3d_array(B, 64, 64, 64);
return 0;
}
