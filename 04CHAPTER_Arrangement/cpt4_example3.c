/*
#include <stdio.h>
int main() {

	int i, repeat, temp ,z;




	int score[5] = { 0 };
	for (i = 0; i < 5; i++) {
		printf("%d번째 숫자 : \n", i + 1);
		scanf("%d", &score[i]);
	}

	for (repeat = 1; repeat < 5; repeat++) {
		for (z = 0; z < 4; z++) {
			if (score[z] > score[z + 1]) {
				temp = score[z];
				score[z] = score[z + 1];
				score[z + 1] = temp;
			}

		}

	}
	for (i = 0; i < 5; i++) {
		printf("%d\t", score[i]);
	}





}
*/