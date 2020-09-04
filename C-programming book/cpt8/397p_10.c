#include<stdio.h>
#define PERSONS 30
#define STARS 6
int main() {

	int survey[PERSONS] = { 1,3,2,5,3,2,1,2,3,4,5,2,3,3,2,1,4,5,2,3,5,1,3,4,2,3,1,4,2,3 };
	int rank[STARS] = { 0 };
	int vote[STARS] = { 0 };
	int i, k, ranking, count;

	for (i = 0; i < PERSONS; i++) {
		vote[survey[i]]++;
	}

	for (k = 0; k < STARS; k++) {
		ranking = 0;
		for (i = 0; i < STARS; i++) {
			count = vote[k];

			if (vote[i] > count) {
				ranking++;

			}
			rank[k] = ranking + 1;
		}
	}

	printf("연예인 득표 수   순위 \n");
	printf("======================\n");
	for (i = 1; i < STARS; i++)
		printf(" %d번     %d표      %d \n", i, vote[i], rank[i]);


	return 0;

}