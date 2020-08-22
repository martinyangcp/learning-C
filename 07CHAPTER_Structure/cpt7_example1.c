/*
#include <stdio.h>
#include <string.h>

int main() {
	char* gold[] = { "한빛", "성춘향", "이몽룡", "사공민국", "황해" };
	int size = sizeof(gold) / sizeof(gold[0]);
	int i, aa, k;
	char* temp;

	printf("** 원본의 리스트 :");
	for (i = 0; i < 5; i++) {
		printf("%s, ", gold[i]);
	}
	printf("**\n");
	for (k = 0; k < 5; k++) {
		for (i = 0; i < 4; i++) {
			aa = strcmp(gold[i], gold[i + 1]);
			if (aa > 0) {
				temp = gold[i];
				gold[i] = gold[i + 1];
				gold[i + 1] = temp;

			}
		}
	}
	printf("** 정렬한 리스트 :");
	for (i = 0; i < 5; i++) {
		printf("%s, ", gold[i]);
	}
	printf("**");

}
*/