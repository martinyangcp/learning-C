/*
#include<stdio.h>
#define SIZE 5
int find_min(int arr[]);
void print_arr(int arr[]);
int main() {

	int f[SIZE] = { 3,0,-30,-20,-1 };
	int min,s;

	min = find_min(f);

	printf("어는 점 목록");
	print_arr(f);
	s = index(f,min);
	printf("\n가장 낮은 어는점 : f[%d] = %d \n",s, min);
	return 0;
}
int find_min(int arr[]) {
	int i, min;

	min = arr[0];
	for (i = 1; i < SIZE; i++) {
		if (arr[i] < min)
			min = arr[i];

	}
	return min;
}
void print_arr(int arr[]) {
	int i;
	for (i = 0; i < SIZE; i++) {
		printf("%4d", arr[i]);
	}
}
int index(int arr[],int min) {
	int i;

	for (i = 0; i < SIZE; i++) {
		if (arr[i] == min) {
			return i;

		}
	}

}*/