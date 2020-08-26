
#include<stdio.h>
int main() {
	double r, dul, myun, bup,pie = 3.141592;
	printf("반지름(cm)을 입력하세요.\n");
	scanf("%lf", &r);
	dul = pie * 2 * r;
	printf("둘레 =%lf\n",dul);
	myun = pie * r * r;
	printf("면적 =%lf\n",myun);
	bup = r * r * r * pie * 4 / 3;
	printf("부피 =%lf\n", bup);












}