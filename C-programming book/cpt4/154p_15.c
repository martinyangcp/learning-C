/*

#include <stdio.h>
int main() {
	char name[100];
	int korean, english, math, attendance;
	double avg;

	printf("학생의 이름 : ");
	gets(name);
	printf("\n 국어 :");
	scanf("%d", &korean);
	printf("\n 영어 :");
	scanf("%d", &english);
	printf("\n 수학 :");
	scanf("%d", &math);
	printf("\n 출결 :");
	scanf("%d", &attendance);
	
	avg =korean/3.0 + english/3.0 +math / 3.0;

	printf("\n-------------------------------\n");
	printf("[%s]학생 >> ",name);
	(avg >= 70 && attendance >= 80) ? printf("합격!") : printf("불합격!");
	printf("\n-------------------------------\n");
	printf("네 과목의 평균 : %.1lf", avg);
	printf("출결 점수 : %d", attendance);
	printf("\n-------------------------------\n");

}
*/