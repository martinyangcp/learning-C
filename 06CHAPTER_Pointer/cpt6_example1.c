/*

#include <stdio.h>
#define SIZE 5

void sumple(int* ptr) {
	int i;
	for (i = 0; i < SIZE; i++) {
		printf("%d\t", *(ptr + i));
	}
}

int main() {
	int num, i;
	double avg = 0;
	int score[5] = { 0 };

	for (i = 0; i < 5; i++) {
		printf("%d��° �л��� ������ ?\n", i + 1);
		scanf("%d", (score + i));   // &score[i]

	}
	for (i = 0; i < 5; i++) {
		avg += *(score+i);
	}
	avg = avg / 5.0;

	sumple(score); // ptr = &score

	printf("��� :");
	printf("%lf��", avg);



}

*/