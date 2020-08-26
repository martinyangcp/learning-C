

#include <stdio.h>
int main() {

	int year;
	
	printf("년도를 입력하세요 . : ");
	scanf("%d", &year);
	(year % 4 == 0 && year % 100 != 0 || year % 400 == 0) ? printf("윤년") : printf("평년");




}
