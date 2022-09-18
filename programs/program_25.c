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

for ( i = 1; i < 62; i++)
for ( j = 2; j < 62; j++)
for ( k = pips_max_4((-i-2*j-2)/3, -2*i-5*j-1, -i-j-1, 2); k < pips_min_4(-i-j+63, (-i-2*j+62)/3, -2*i-5*j+63, 62); k++)
{
A[i][j][k]=A[i][j-1][k]+B[i+j+k+1][i+j+k+1][i+j+k+1]*C[i+2*j+3*k+4][2*i+5*j+k+1][k+1]+27;
B[j][k][i]=B[j][k-1][i]*B[j][k-1][i+1]+B[j+1][k-2][i+1]+A[i+j+k+1][i+j+k+1][i+j+k+1]*A[i+2*j+3*k+4][2*i+5*j+k+1][k+1]+41;
C[j][k][i]=C[j][k-1][i]*C[j][k-1][i+1]+C[j+1][k-2][i+1]*C[j+1][k-1][i]+C[j+1][k-1][i+1]+C[j+2][k-2][i+1]-B[i+j+k+1][i+j+k+1][i+j+k+1]*A[i+2*j+3*k+4][2*i+5*j+k+1][k+1]+83;
A[j][i][k]=A[j][i-1][k]-B[i+j+k+1][i+j+k+1][i+j+k+1]+C[i+2*j+3*k+4][2*i+5*j+k+1][k+1]+79;
B[i][j][k]=B[i][j-1][k+2]+B[i][j-1][k+1]+B[i+1][j-2][k+1]+B[i+1][j-1][k]*B[i][j-1][k+1]+B[i+1][j-2][k+1]+B[i+1][j-1][k]*B[i+1][j-1][k+1]-B[i+2][j-2][k+1]*A[i+j+k+1][i+j+k+1][i+j+k+1]+A[i+2*j+3*k+4][2*i+5*j+k+1][k+1]+19;
C[i][j][k]=C[i][j-1][k]*C[i][j-1][k+1]*C[i+1][j-2][k+1]-C[i+1][j-1][k]*C[i+1][j-1][k+1]-C[i+2][j-2][k+1]-B[i+j+k+1][i+j+k+1][i+j+k+1]*A[i+2*j+3*k+4][2*i+5*j+k+1][k+1]+79;
}

clock_t stop = clock();
double elapsed = ((double)(stop - start)) / CLOCKS_PER_SEC;
printf("%7.5lf\n",elapsed*1.0e3);
deallocate_3d_array(A, 64, 64, 64);
deallocate_3d_array(B, 64, 64, 64);
deallocate_3d_array(C, 64, 64, 64);
return 0;
}
