/*
�迭�� : arr[i]
�����ͽ� : *(arr + i)      >>>>> *���̸� �� �Ⱥ����� �ּ�

#include<stdio.h>
#include<string.h>

int main() {
	char data[100];
	int i;
	printf("input String : ");
	scanf("%s", &data);					//hello���������� len = 5, index = 0~4
	printf("inverse String : ");
	for(i= strlen(data) - 1;i >=0; i--){
	printf("%c",*(data+i));
	}
}
*/