/*
#include<stdio.h>
int last_day(int, int);
int main() {

	int days[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
	int year, month;

	printf("연도(year)?");
	scanf("%d", &year);
	printf("월(month)?");
	scanf("%d", &month);

	printf("마지막일은 %d",last_day(year, month,days));

}
int last_day(int year, int month,int arr[]) {
	int lastday;

	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
		if (month == 2) {
			return 29;
		}
		else
			return arr[month];
	}
	else
		return arr[month];
}*/