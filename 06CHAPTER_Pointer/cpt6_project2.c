/*
#include<stdio.h>
#define SIZE 10
int main() {
	int list_stu[SIZE] = { 0 };
	int list_sco[SIZE] = { 0 };
	int list_ran[SIZE] = { 1,2,2,3,3,3,4,4,4,5 };
	int i,j, temp;

	for (i = 0; i < SIZE; i++) {
	repeat:
		printf("%d��° �л� �й�", i + 1);
		scanf("%d", &list_stu[i]);
		if (list_stu[i] > 9999 || list_stu[i] < 1000) {
			printf("4�ڸ� �й� ���Է�");
			goto repeat;			// do-while, while, goto
		}
	repeatagain:

		printf("%d��° �л� ����", i + 1);
		scanf("%d", &list_sco[i]);
		if (list_sco[i] > 100 || list_sco[i] < 0) {
			printf("0~100 ���̷� ���� ���Է�");
			goto repeatagain;
		}
	}
	for (j = 0; j < SIZE; j++) {
		for (i = 0; i < SIZE - 1; i++) {
			if (list_sco[i] < list_sco[i + 1]) {
				temp = list_sco[i];
				list_sco[i] = list_sco[i+1];
				list_sco[i + 1] = temp;
				temp = list_stu[i];
				list_stu[i] = list_stu[i+1];
				list_stu[i + 1] = temp;
			}
		}
	}
	for (j = 0; j < SIZE; j++) {
		for (i = 0; i < SIZE - 1; i++) {
			if (list_stu[i] > list_stu[i + 1]) {
				temp = list_stu[i];
				list_stu[i] = list_stu[i + 1];
				list_stu[i + 1] = temp;
				temp = list_sco[i];
				list_sco[i] = list_sco[i + 1];
				list_sco[i + 1] = temp;
				temp = list_ran[i];
				list_ran[i] = list_ran[i + 1];
				list_ran[i + 1] = temp;


			}
		}
	}
	for (i = 0; i < SIZE; i++) {
		printf("���� :%d, �й� :%d ", list_ran[i], list_stu[i]);
		printf("���� : ");
		switch (list_ran[i]) {
		case 1: printf("A"); break;
		case 2: printf("B"); break;
		case 3: printf("C"); break;
		case 4: printf("D"); break;
		case 5: printf("F"); break;
			
		}
		printf("���� ���� :%d\n", list_sco[i]);
	}
}
*/