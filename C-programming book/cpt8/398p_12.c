
/*
#include<stdio.h>
int factorial(int n);
int main() {
	int n,k;

	printf("n Àº?");
	scanf("%d", &n);
	k = n;
	printf("%d! = ", n);
	while (k != 1) {
		printf(" %d x ", k);
		k--;
	}
	printf("1 = ");
	printf("%d", factorial(n));
}
int factorial(int n) {
	static int sum=1;

	sum *= n;
	if(n>1) {
		factorial(n-1);
	}

	return sum;
}*/