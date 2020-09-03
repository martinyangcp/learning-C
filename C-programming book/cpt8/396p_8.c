/*
#include<stdio.h>
int main() {
	int voicemin, textsend, charge;
	int totalfee,voicefee,textfee,tax,textover;
	printf("음성 통화 시간은(분)?\n");
	scanf("%d", &voicemin);
	printf("문자 전송 건수는?\n");
	scanf("%d", &textsend);
	textover = textsend - 20;
	voicefee = voice_charge(voicemin);
	textfee = text_charge(textsend);
	tax = (10000 + textfee + voicefee) * 0.1;
	totalfee = tax + textfee + voicefee+10000;
	printf("\n휴대폰 사용 요금 청구서\n");
	printf("============================================================\n");
	printf("음성 통화 시간 %d분\n", voicemin);
	printf("문자 전송 건수 %d건\n", textsend);
	printf("------------------------------------------------------------\n");
	printf("기본 요금					  10000원\n");
	printf("음성 통화료 %d분				  %d원\n",voicemin,voicefee);
	printf("문자 전송료 초과 %d건(20건 무료)                 %d원\n", textover,textfee);
	printf("------------------------------------------------------------\n");
	printf("합계							 %d원\n", textfee + voicefee + 10000);
	printf("부가세(10%)						 %d원\n", tax);
	printf("===========================================================\n");
	printf("이번 달 요금					 %d원", totalfee);
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