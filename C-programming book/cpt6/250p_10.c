/*
#include<stdio.h>
#define YES 1
#define MALE 1
int main() {
	int gender=0, married=0, army=0, plus=0, children=0;

	plus = 0;

	printf("���� (��:1, ��:2)? ");
	scanf("%d", &gender);

	if (gender == YES) {
		printf("�� ���� (��:1, �ƴϿ�:2)?");
		scanf("%d", &army);
		if (army == YES) {
			plus++;

			printf("��ȥ(��{:1,�ƴϿ�:2)?");
			scanf("%d", &married);
			if (married == 1) {
				plus++;
			}
		}
	}
	else {
		printf("��ȥ(��:1,�ƴϿ�:2)?");
		scanf("%d", &married);

	}

	if (married == YES) {
		plus++;

		printf("�ڳ����?");
		scanf("%d", &children);
		if (children == 1){
			plus++;
		}
		else if (children >= 2) {
			plus += 2;
		}
	}


	printf("\n>>�� �������� %d���Դϴ�.", plus);

	return 0;

}
*/