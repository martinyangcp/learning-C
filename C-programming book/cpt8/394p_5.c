/*

#include<stdio.h>
void difference(double std, double prv);
int main() {
	double std_weight, weight, height;
	printf("키는?");
	scanf("%lf", &height);
	printf("체중은?");
	scanf("%lf", &weight);
	std_weight = (height - 100) * 0.9;
	printf("--------------------------------------");
	printf("키가 %.1lf인 사람의 표준 체중 %.1lf보다 ", height, std_weight);
	difference(std_weight,weight);
}
void difference(double std, double prv) {

	double dif;
	dif = std - prv;
	

	if (dif > 0.1)
		printf("보다 %.1lf 미달", dif);
	else if (dif < -0.1)
		printf("보다 %.1lf 초과", dif);
	else
		printf("과 동일");

	return;
}
*/