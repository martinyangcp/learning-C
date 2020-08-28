

#include <stdio.h>
int main() {
	int n=0,num,ans;

	printf("출력할 3의 배수의 개수는 : ");
	scanf("%d", &n);

	num = 1;

	while (n > 0) {
		
		printf("%d ", 3*num);
		n -= 1;
		num++;
	}






}