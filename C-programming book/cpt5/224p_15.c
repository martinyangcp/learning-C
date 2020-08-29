
/*
#include <stdio.h>
int main() {

	int num, i, jung, help, k,detersosu=0;

	printf("최대 몇까지의 소수를 출력?");
	scanf("%d", &num);

	for (k = 1; k <= num; k++) {
		for (i = 2; i < k; i++) {

			help = k % i;
			if (help == 0) {
				detersosu = 1;
			}
		}
		if (detersosu == 0) {
			printf("%d ", k);
		}


	}
}
*/