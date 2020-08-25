/*
#include<stdio.h>
#define SIZE 10
int  print(int*ptr) {
	int i;
	for (i = 0; i < 10; i++) {
		printf("\t%d", *(ptr + i));
	}

}
int bubble_sort(int* ptr) {
	int i,j,temp;
	for (i = 0; i < SIZE; i++) {
		for (j = 0; j < 9; j++) {
			if (*(ptr + j) > * (ptr + j + 1)) {
				temp = *(ptr + j);
				*(ptr + j) = *(ptr + j + 1);
				*(ptr + j + 1) = temp;
			}
		}
	}
}
int main() {
	int list[SIZE] = { 10, 5, 4, 2, 3, 8, 7, 9, 6, 1 };
	int i,temp;


	printf(">> 배열 원본 : ");
	print(list);
	printf("\n>> 버블정렬 :");
	bubble_sort(list);

	
	for (i = 0; i < 10; i++) {
		printf("\t%d", *(list+i));
	}

}
*/