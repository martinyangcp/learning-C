/*
#include<stdio.h>
int main() {
	int voicemin, textsend, charge;
	int totalfee,voicefee,textfee,tax,textover;
	printf("���� ��ȭ �ð���(��)?\n");
	scanf("%d", &voicemin);
	printf("���� ���� �Ǽ���?\n");
	scanf("%d", &textsend);
	textover = textsend - 20;
	voicefee = voice_charge(voicemin);
	textfee = text_charge(textsend);
	tax = (10000 + textfee + voicefee) * 0.1;
	totalfee = tax + textfee + voicefee+10000;
	printf("\n�޴��� ��� ��� û����\n");
	printf("============================================================\n");
	printf("���� ��ȭ �ð� %d��\n", voicemin);
	printf("���� ���� �Ǽ� %d��\n", textsend);
	printf("------------------------------------------------------------\n");
	printf("�⺻ ���					  10000��\n");
	printf("���� ��ȭ�� %d��				  %d��\n",voicemin,voicefee);
	printf("���� ���۷� �ʰ� %d��(20�� ����)                 %d��\n", textover,textfee);
	printf("------------------------------------------------------------\n");
	printf("�հ�							 %d��\n", textfee + voicefee + 10000);
	printf("�ΰ���(10%)						 %d��\n", tax);
	printf("===========================================================\n");
	printf("�̹� �� ���					 %d��", totalfee);
}
int voice_charge(int min) {
	int fee;
	if (min <= 100) {
		fee = min * 100;
	}
	else
		fee = 10000 + (min - 100) * 80;
	return fee;
}
int text_charge(int num){
	int fee;
	if (num <= 20) {
		return 0;
	}
	else
		fee = (num - 20) * 20;

	return fee;

}*/