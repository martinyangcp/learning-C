/*
#include<stdio.h>
#include<string.h>
int main() {
	int order[10] = { 0,1,2,3,4,5,6,7,8,9 };
	char name[10][12] = { "홍길동","이몽룡","성춘향","제갈공명","주몽","배장화","배홍련","홍길동","연흥부","연놀부" };
	char phone[10][20] = { "010-5210-1234","010-523-1628","010-1235-8765","010-345-1676","010-5210-5463","010-523-7979","010-5210-1472","010-8255-8255","010-516-3483","010-8282-8282" };
	double grade[10][2] = { 4.2,4.0,3.2,4.4,3.7,2.9,4.0,3.8,3.2,2.7 };
	int i=0, j=0,temp=0,index=0;
	
	if (strcmp(name[order[i]], name[order[i + 1]]) > 0) {
		temp = order[i];
		order[i] = order[i + 1];
		order[i + 1] = temp;
	}

	printf("이름	전화번호	평점\n");
	printf("========================\n");
	
	for (i = 0; i < 10; i++) {
		index = order[i];
		printf("%-10s %-14s %5.1lf\n", name[index], phone[index], grade[index]);

	}
}*/