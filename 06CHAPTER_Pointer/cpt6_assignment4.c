/*
#include<stdio.h>
#include<string.h>
int main() {
	char first[100],second[100];
	int order =1,j,i;
	printf("첫번째 문자열을 입력하세요 :");
	scanf("%s", first);
	printf("두번째 문자열을 입력하세요 :");
	scanf("%s", second);
	i = strlen(first);
	for (j = 0; j < i; j++) {
		if(*(first+j)== *(second+j)) {
			order = j + 1;
			break;
		}
	}
	printf("같은 글자 : %c, 위치 : %d",*(first+order-1),order);
}
*/