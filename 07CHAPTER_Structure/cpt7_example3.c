/*
#include<stdio.h>
#include<string.h>
struct User {
	char name[10];
	char gender[3];
	int age;
};

int main() {
	int man_count = 0, woman_count = 0, i,j, avg = 0;
	char k;
	struct User temp;
	struct User user[5] = {
		{"C","여",20},{"A","남",29},{"D","여",25},{"R","남",22},
		{"V","여",25} };

	for (i = 0; i < 5; i++) {
		if (0 != strcmp(user[i].gender, "남")) {
			woman_count += 1;
		}
		else {
			man_count += 1;
		}
	}
	for (j = 0; j < 5; j++) {
		for (i = 0; i < 4; i++) {
			if (user[i].age > user[i + 1].age) {
				temp = user[i];
				user[i] = user[i + 1];
				user[i + 1] = temp;
			}
		}
	}




	printf("이름	성별	나이\n");
	printf("==============================\n");
	for (i = 0; i < 5; i++) {
		printf("%s\t%s\t%d\n", user[i].name, user[i].gender, user[i].age);
		avg += user[i].age;
	}
	printf(">>남자 : %d명\n", man_count);
	printf(">>여자 : %d명\n", woman_count);
	printf(">>평균 연령 : %d년", avg / 5);
}

*/