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
	printf("�츮 �ý����� �湮�� �ּż� �����մϴ�.");

	do {
		display_menu();
		printf("���ϴ� ���񽺸� �����ϼ���.");
		scanf("%d", &service);
		switch (service) {
		case 1: check_balance(balance); break;
		case 2: deposit(balance); break;
		case 3: withdraw(balance); break;
		case 4: exit(0);
		}
		printf("\n��� ���񽺸� ���Ͻø� �ƹ�Ű�� ��������.");
		_getch();
		system("cls");
	} while (service != 4);
		return 0;


}
void check_balance(int balance) {
	if (check_PW() == PASS)
		printf("\n���� �ܾ� : %d�� \n", balance);
}

void deposit(int balance) {
	int amount;
	printf("\n �Ա��Ͻ� �ݾ���?"); scanf("%d", &amount);

	balance += amount;
	printf("\n�Ա� �� ���� �ܾ� : %d�� \n", balance);
}
void withdraw(int balance) {

	int amount;

	if (check_PW() == PASS) {
		printf("����Ͻ� �ݾ���?"); scanf("%d", &amount);
		if (balance < amount)
			printf("\n�ܾ��� �����մϴ�. ���� �ܾ� %d�� \n", balance);
		else {
			balance -= amount;
			printf("\n��� �� ���� �ܾ� : %d��\n", balance);
		}
	}
}

int check_PW() {
	static int count = 0;
	int system_PW = 1111;
	int limit = 3;
	int input_PW;

	printf("\n�ý��� ��й�ȣ�� �Է��ϼ���");
	scanf("%d", &input_PW);

	if (input_PW == system_PW)
		return PASS;
	else {

		count++;
		if (count == limit)
		{
			printf("��й�ȣ ���� 3ȸ �߻�!\n");

			printf("�ź����� ������ ���񽺼��͸� �湮�ϼ���.\n");
			exit(0);
		}
		else {
			printf("��й�ȣ�� Ʋ�Ƚ��ϴ�. �� %dȸ ����!\n", count);
			return FAIL;
		}
	}
}

	void display_menu(){
		printf("\n\n");
		printf("==================\n");
		printf("== 1.�ܾ� ��ȸ  ==\n");
		printf("== 2.�Ա�       ==\n");
		printf("== 3.���       ==\n");
		printf("== 4.�׸��ϱ�   ==\n");
		printf("==================\n");
	}
	*/