/*
#include<stdio.h>
int main() {
	int freeze[10] = { 15, 0, -20, -30, 50, -5, -120, -5, 10, -12 };
	int max=freeze[0];
	int n=0,i=0,maxnum=0;

	for (n=0; n<10;n++)
	{
		if (max < freeze[n]) {
			max = freeze[n];
			maxnum = n;
		}
	}
	printf("어는 점 목록 : ");
	for (n = 0; n < 10; n++) {
		printf("%d ", freeze[n]);
	}
	printf("\n가장 높은 어는 점 :freeze[%d]=%d",maxnum,max);
}
*/