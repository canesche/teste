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

for ( i = 0; i < 64; i++)
for ( j = 1; j < 64; j++)
for ( k = pips_max_2(-i-j-1, 0); k < pips_min_2(-i-j+63, 64); k++)
{
A[i][j][k]=A[i][j-1][k]*B[i+j+k+1][i+j+k+1][i+j+k+1]+80;
}

clock_t stop = clock();
double elapsed = ((double)(stop - start)) / CLOCKS_PER_SEC;
printf("%7.5lf\n",elapsed*1.0e3);
deallocate_3d_array(A, 64, 64, 64);
deallocate_3d_array(B, 64, 64, 64);
return 0;
}
