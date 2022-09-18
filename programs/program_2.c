#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <init_dyn_array.h>
#include <pips_runtime.h>


int main(int argc, const char* argv[])
{
srand(time(NULL));

float **A = create_two_dim_float(4096, 4096, "random");
int i,j,k,l;
clock_t start = clock();

for ( i = 5; i < 4096; i++)
for ( j = 5; j < 4095; j++)
{
A[j][i]=A[j+1][i-1]+A[j-5][i-5]+45;
}

clock_t stop = clock();
double elapsed = ((double)(stop - start)) / CLOCKS_PER_SEC;
printf("%7.5lf\n",elapsed*1.0e3);
deallocate_2d_array(A, 4096, 4096);
return 0;
}
