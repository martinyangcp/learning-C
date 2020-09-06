/*
#include<stdio.h>
#define N 6

void display_menu();
void product_order();
void showing_ordersheet();

char name[N][7] = { "","노트","연필","지우개","자","볼펜" };
int unit_cost[N] = { 0,1000,500,300,800,1500 };
int number[N] = { 0 };
int service;

int main() {
	printf("환영합니다\n");
	do {
		display_menu();
		
		switch (service) {
		case 1:product_order() ; break;
		case 2:showing_ordersheet(); break;
		case 3:exit(0);
		}
		printf("계속 서비스를 원하시면 아무키나 누르세요");
		_getch();
		system("cls");

	} while (service != 3);

		return 0;
}

void display_menu() {
	printf("======================\n");
	printf("== 1.상품 주문하기  ==\n");
	printf("== 2.주문서 확인하기==\n");
	printf("== 3.종료하기       ==\n");
	printf("======================\n");

	printf("원하는 서비스를 선택하세요");
	scanf("%d", &service);
}
void product_order() {
	int amount = 0,unit,num;
	printf(">> 상품 주문 서비스입니다.\n");
	printf("==========================\n");
	printf("1 노트 1000\n");
	printf("2 연필 500\n");
	printf("3 지우개 300\n");
	printf("4 자 800\n");
	printf("5 볼펜 1500\n");
	printf("==========================\n");
	printf("원하는 상품의 번호는?\n");
	scanf("%d", &unit);
	printf("%s를 주문할 개수는?\n",name[unit]);
	scanf("%d", &num);
	amount = num * unit_cost[unit];
	printf("주문하신 %s %d개는 총 %d원입니다.", name[unit], num, amount);
	number[unit] = num;
}
void showing_ordersheet(){
	int i,totalprice=0,price;
	printf("상품 주문 내역서\n");
	printf("====================\n");
	printf("상품명	개수	가격\n");
	printf("--------------------\n");
	for (i = 1; i < 6; i++) {
		if (number[i] != 0) {
			price = number[i] * unit_cost[i];
			printf("%s	%d	%d\n", name[i], number[i],price);
			totalprice += price;
		}
	}
	printf("총액		%d\n", totalprice);

}*/