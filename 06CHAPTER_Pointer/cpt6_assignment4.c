/*
#include<stdio.h>
#include<string.h>
int main() {
	char first[100],second[100];
	int order =1,j,i;
	printf("ù��° ���ڿ��� �Է��ϼ��� :");
	scanf("%s", first);
	printf("�ι�° ���ڿ��� �Է��ϼ��� :");
	scanf("%s", second);
	i = strlen(first);
	for (j = 0; j < i; j++) {
		if(*(first+j)== *(second+j)) {
			order = j + 1;
			break;
		}
	}
	printf("���� ���� : %c, ��ġ : %d",*(first+order-1),order);
}
*/