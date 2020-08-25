/*
#include<stdio.h>

int common_year[12] = { 31, 28, 31, 30, 31,30,31,31,30,31,30,31 };
int yoon_year[12] = { 31, 29, 31, 30, 31,30,31,31,30,31,30,31 };

int main() {
	int year, day,i;
	for (i = 0; i < 6; i++) {
repeat:
	get_year();
	if (year < 2000) {
		goto repeat;
	}
	else if (year > 2999) {
		goto repeat;
	}
repeatagain:
	printf("일 입력");
	get_day();
	if ((year % 4 == 0 && year % 100 != 0)) {
		if (day > 366) {
			goto repeatagain;
		}
	}
	else { if(day>365){
		goto repeatagain;
	}
	}
	calc_month_day(year, day);
}
}
	int get_year() {
		int year;
		printf("년도 입력");
		writeagain:
		scanf("%d", &year);
		if (1 >= year / 1000 || year / 1000 >= 9) {
			printf("적절히 4자리 수로 입력");
			goto writeagain;
		}
		return year;
	}
	int get_day() {
		int day;
		dayrepeat:
		scanf("%d", &day);
		if (day - 1000 >= 1 || day < 0) {
			printf("적절히 1~3자리수로 입력");
			goto dayrepeat;
		}
		return day;
	}
	
int calc_month_day(int year,int day) {
	int month, date;


	printf("%d");
}*/