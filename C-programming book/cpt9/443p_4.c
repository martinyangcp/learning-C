/*
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#define PASS 1
#define FAIL 0

void display_menu();
int check_PW();
void check_balance();
void deposit();
void withdraw();



int main() {
	int service;
	int balance = 0;
	printf("우리 시스템을 방문해 주셔서 감사합니다.");

	do {
		display_menu();
		printf("원하는 서비스를 선택하세요.");
		scanf("%d", &service);
		switch (service) {
		case 1: check_balance(balance); break;
		case 2: deposit(balance); break;
		case 3: withdraw(balance); break;
		case 4: exit(0);
		}
		printf("\n계속 서비스를 원하시면 아무키나 누르세요.");
		_getch();
		system("cls");
	} while (service != 4);
		return 0;


}
void check_balance(int balance) {
	if (check_PW() == PASS)
		printf("\n현재 잔액 : %d원 \n", balance);
}

void deposit(int balance) {
	int amount;
	printf("\n 입금하실 금액은?"); scanf("%d", &amount);

	balance += amount;
	printf("\n입금 후 현재 잔액 : %d원 \n", balance);
}
void withdraw(int balance) {

	int amount;

	if (check_PW() == PASS) {
		printf("출금하실 금액은?"); scanf("%d", &amount);
		if (balance < amount)
			printf("\n잔액이 부족합니다. 현재 잔액 %d원 \n", balance);
		else {
			balance -= amount;
			printf("\n출금 후 현재 잔액 : %d원\n", balance);
		}
	}
}

int check_PW() {
	static int count = 0;
	int system_PW = 1111;
	int limit = 3;
	int input_PW;

	printf("\n시스템 비밀번호를 입력하세요");
	scanf("%d", &input_PW);

	if (input_PW == system_PW)
		return PASS;
	else {

		count++;
		if (count == limit)
		{
			printf("비밀번호 오류 3회 발생!\n");

			printf("신분증을 가지고 서비스센터를 방문하세요.\n");
			exit(0);
		}
		else {
			printf("비밀번호가 틀렸습니다. 총 %d회 오류!\n", count);
			return FAIL;
		}
	}
}

	void display_menu(){
		printf("\n\n");
		printf("==================\n");
		printf("== 1.잔액 조회  ==\n");
		printf("== 2.입금       ==\n");
		printf("== 3.출금       ==\n");
		printf("== 4.그만하기   ==\n");
		printf("==================\n");
	}
	*/