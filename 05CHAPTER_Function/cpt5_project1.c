/*
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main() {
	int list[5], d, s, k, L;
	int begin = 0, end = 100, i;

	srand(time(NULL));
	for (i = 0; i < 5; i++) {
		list[i] = rand() % (end - begin + 1);

	}


	printf("랜덤한 수 :");
	for (i = 0; i < 5; i++) {
		printf("\t%d", list[i]);
	}
	for (k = 0; k < 4; k++) {


		for (s = 0; s < 4; s++) {
			L = list[s];
			list[s] = sorting(list[s], list[s + 1]);
			if (list[s] == list[s + 1]) {
				list[s + 1] = L;
			}
		}
	}
	

	printf("\n수 정렬 후:");
	for (d = 0; d < 5; d++) {
		printf("\t%d", list[d]);
	}

}
		

int sorting(int A, int B) {
	if (A > B) {
		return B;
	}
	else  {
		return A;
	}
	


}
*/