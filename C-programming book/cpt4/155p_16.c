

#include <stdio.h>
int main() {

	int year;
	
	printf("�⵵�� �Է��ϼ��� . : ");
	scanf("%d", &year);
	(year % 4 == 0 && year % 100 != 0 || year % 400 == 0) ? printf("����") : printf("���");




}
