/*
#include<stdio.h>

void static_sum(int end);

int main() {

	int i;

	for (i = 0; i < 10; i++)
		static_sum(i);


	return 0;
}

void static_sum(int end) {
	static int sum;
	static int nowsum=0;
	int k;
	for (k = 1; k <= end+1; k++) {
		sum += k;
	}

	printf("%d��° ȣ��, sum = %d+ 1 ~ %d������ �� : %d\n",k,nowsum,end,sum);
	nowsum = sum;

}*/