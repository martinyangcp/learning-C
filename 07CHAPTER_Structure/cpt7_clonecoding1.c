/*
#include<stdio.h>
#include<stdlib.h>

struct book_info {
	int year;
	char title[12];
};
typedef struct book_info BOOK;

int main() {		// main 형태 - int main() 표준형 return 0; 
	BOOK *books;
	int size, i;

	do {
		printf("정보를 입력할 도서 권수 :");
		scanf("%d", &size);
		if (size <= 0)
			printf("에러 : 권수를 잘못 입력하였습니다. 다시 입력하세요.");
	} while (size <= 0);

	books = (BOOK*)malloc(sizeof(BOOK) * size);
	if (books == NULL) {
		puts("동적 기억장소 할당에 실패하였습니다.\n");
		exit(1);
	}
	for (i = 0; i < size; i++) {
		printf("%d) 도서이름 : ", i + 1);
		getchar();
		gets(books[i].title);
		printf("출판년도 :");
		scanf("%d", &(books[i].year));
	}
	printf("\n >> 도서 정보 목록 << \n");
	printf("\n순번 도서명 출판년도");
	printf("\n==============================\n");
	for (i = 0; i < size; i++) { 
		printf("%3d %-12s %4d\n", i + 1, books[i].title, books[i].year);
	}
	printf("================================\n");
	free(books);
	return 0;		// 오류없이 정상종료가 되었다.
}
/*
* 배열 : 정적할당, 고정 크기 
* 동적할당 : 사용자 원하는 크기를 지정
*/

