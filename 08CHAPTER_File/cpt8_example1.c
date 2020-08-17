/*

#include<stdio.h>

int main() {
	FILE* fp;
	int num = 0, i, temp;


	printf("회원의 나이를 입력하면 age.txt 파일에 추가합니다.\n");
	fp = fopen("age.txt", "a");
	printf("추가할 회원의 수는?");
	scanf("%d", &num);
	for (i = 0; i < num; i++) {
		printf("회원의 나이는?\n");
		scanf("%d", &temp);
		fprintf(fp, "%d\n", temp);
	}


	printf("\n회원 %d 명의 나이를 age.txt 파일에 추가했습니다.", num);
	fclose(fp);

}
*/