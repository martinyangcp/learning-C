/*
#include<stdio.h>
#define N 9
int main() {
	int class[N] = { 10,8,7,9,6,10,9,8,7 };
	int i,count=0,ranking=0,k;
	int rank[N] = { 0,0,0,0,0,0,0,0,0 };

	for (k = 0; k < N; k++) {
		ranking = 0;
		for (i = 0; i < N; i++) {
			count = class[k];
			
			if (class[i] > count) {
				ranking++;

			}
			rank[k] = ranking+1;
		}
	}
	for (k = 0; k < N; k++) {
		printf("%dµî        ", rank[k]);
	}




}*/