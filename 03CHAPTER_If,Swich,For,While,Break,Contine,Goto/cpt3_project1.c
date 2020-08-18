/*
#include <stdio.h>

int main() {
	int plancode, data, price,tax,amount;

	printf("플랜코드번호와 데이터 사용량은?");
	scanf("%d" "%d", &plancode ,& data);

	if (data <= 500)
	{
		price = data * 20;
	}
	else if (data <=1000)
	{
		price = 10000 + (data-500) * 15;
	}
	else if (data <= 2000)
	{
		price = 17500 + (data-1000) * 12;
	}
	else
	{
		price = 39500 + (data-2000) * 10;
	}

	tax = (price + 6000) * 0.15;
	amount = price + tax + 6000;

	if (plancode == 1) {
		printf("무제한 요금 ) 기본료 : 5000원, 사용료 : 50,000원, 세금 : 5500원. 요금합계 : 60,500원");

	}
	if (plancode == 2) {
		printf("종량제 요금 ) 기본료 : 6000원, 사용료 : %d원, 세금 : %d원, 요금합계 :%d원",price,tax,amount);



	}






}
*/