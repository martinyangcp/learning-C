/*
배열식 : arr[i]
포인터식 : *(arr + i)      >>>>> *붙이면 값 안붙히면 주소

#include<stdio.h>
#include<string.h>

int main() {
	char data[100];
	int i;
	printf("input String : ");
	scanf("%s", &data);					//helloㅁㅁㅁㅁㅁ len = 5, index = 0~4
	printf("inverse String : ");
	for(i= strlen(data) - 1;i >=0; i--){
	printf("%c",*(data+i));
	}
}
*/