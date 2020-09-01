/*
#include<stdio.h>
#define M 2
#define N 3

int main() {

	int A[M][N], B[M][N], C[M][N];
	int i, j;


	printf("\n행렬 A입력\n");
	for(i = 0; i < M;i++)
		for (j = 0; j < N; j++)
		{
			printf("%d행 %d열?", i + 1, j + 1);
			scanf("%d", &A[i][j]);
		}


	printf("\n행렬 B 입력 \n");
	for (i = 0; i < M; i++)
		for (j = 0; j < N; j++)
		{
			printf("%d행 %d열?", i + 1, j + 1);
			scanf("%d", &B[i][j]);
		}


	for(i = 0; i < M; i++)
		for (j = 0; j < N; j++)
			C[i][j] = A[i][j] + B[i][j];


	printf("\n 행렬 A + 행렬 B = 행렬 C\n");

		printf("[");
		for (j = 0; j < N; j++)
			printf("%2d", A[0][j]);
		printf("]");
	
		printf("[");
		for (j = 0; j < N; j++)
			printf("%2d", B[0][j]);
		printf("]");

		printf("[");
		for (j = 0; j < N; j++)
			printf("%2d", C[0][j]);
		printf("]");

		printf("\n[");
		for (j = 0; j < N; j++)
			printf("%2d", A[1][j]);
		printf("]");

		printf("[");
		for (j = 0; j < N; j++)
			printf("%2d", B[1][j]);
		printf("]");

		printf("[");
		for (j = 0; j < N; j++)
			printf("%2d", C[1][j]);
		printf("]");

	return 0;
}
*/