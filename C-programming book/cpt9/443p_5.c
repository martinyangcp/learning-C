/*
#include<stdio.h>
#define N 6

void display_menu();
void product_order();
void showing_ordersheet();

char name[N][7] = { "","��Ʈ","����","���찳","��","����" };
int unit_cost[N] = { 0,1000,500,300,800,1500 };
int number[N] = { 0 };
int service;

int main() {
	printf("ȯ���մϴ�\n");
	do {
		display_menu();
		
		switch (service) {
		case 1:product_order() ; break;
		case 2:showing_ordersheet(); break;
		case 3:exit(0);
		}
		printf("��� ���񽺸� ���Ͻø� �ƹ�Ű�� ��������");
		_getch();
		system("cls");

	} while (service != 3);

		return 0;
}

void display_menu() {
	printf("======================\n");
	printf("== 1.��ǰ �ֹ��ϱ�  ==\n");
	printf("== 2.�ֹ��� Ȯ���ϱ�==\n");
	printf("== 3.�����ϱ�       ==\n");
	printf("======================\n");

	printf("���ϴ� ���񽺸� �����ϼ���");
	scanf("%d", &service);
}
void product_order() {
	int amount = 0,unit,num;
	printf(">> ��ǰ �ֹ� �����Դϴ�.\n");
	printf("==========================\n");
	printf("1 ��Ʈ 1000\n");
	printf("2 ���� 500\n");
	printf("3 ���찳 300\n");
	printf("4 �� 800\n");
	printf("5 ���� 1500\n");
	printf("==========================\n");
	printf("���ϴ� ��ǰ�� ��ȣ��?\n");
	scanf("%d", &unit);
	printf("%s�� �ֹ��� ������?\n",name[unit]);
	scanf("%d", &num);
	amount = num * unit_cost[unit];
	printf("�ֹ��Ͻ� %s %d���� �� %d���Դϴ�.", name[unit], num, amount);
	number[unit] = num;
}
void showing_ordersheet(){
	int i,totalprice=0,price;
	printf("��ǰ �ֹ� ������\n");
	printf("====================\n");
	printf("��ǰ��	����	����\n");
	printf("--------------------\n");
	for (i = 1; i < 6; i++) {
		if (number[i] != 0) {
			price = number[i] * unit_cost[i];
			printf("%s	%d	%d\n", name[i], number[i],price);
			totalprice += price;
		}
	}
	printf("�Ѿ�		%d\n", totalprice);

}*/