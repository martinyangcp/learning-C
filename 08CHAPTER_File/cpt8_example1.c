/*

#include<stdio.h>

int main() {
	FILE* fp;
	int num = 0, i, temp;


	printf("ȸ���� ���̸� �Է��ϸ� age.txt ���Ͽ� �߰��մϴ�.\n");
	fp = fopen("age.txt", "a");
	printf("�߰��� ȸ���� ����?");
	scanf("%d", &num);
	for (i = 0; i < num; i++) {
		printf("ȸ���� ���̴�?\n");
		scanf("%d", &temp);
		fprintf(fp, "%d\n", temp);
	}


	printf("\nȸ�� %d ���� ���̸� age.txt ���Ͽ� �߰��߽��ϴ�.", num);
	fclose(fp);

}
*/