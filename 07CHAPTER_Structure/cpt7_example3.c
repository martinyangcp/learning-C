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
		{"C","��",20},{"A","��",29},{"D","��",25},{"R","��",22},
		{"V","��",25} };

	for (i = 0; i < 5; i++) {
		if (0 != strcmp(user[i].gender, "��")) {
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




	printf("�̸�	����	����\n");
	printf("==============================\n");
	for (i = 0; i < 5; i++) {
		printf("%s\t%s\t%d\n", user[i].name, user[i].gender, user[i].age);
		avg += user[i].age;
	}
	printf(">>���� : %d��\n", man_count);
	printf(">>���� : %d��\n", woman_count);
	printf(">>��� ���� : %d��", avg / 5);
}

*/