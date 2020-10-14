/*
#include<stdio.h>
int main(){
	int a, b,tempt = 0,first,second,third,sum=0;

	scanf("%d %d", &a, &b);

	first = a * (b % 10);
	printf("%d\n", first);
	tempt = (b / 10) % 10;
	second = tempt * a;
	printf("%d\n", second);
	tempt = b / 100;
	third = tempt * a;
	printf("%d\n",third);
	sum = first + (second * 10) + (third * 100);
	printf("%d\n", sum);

	return 0;
}
*/