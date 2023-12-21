#include <stdio.h>
#include <conio.h>

#define ENTER '\n'
#define MAX 80
#pragma warning(disable : 4996)


int main() {
	FILE *fptr;
	char str[MAX], ch;

	int i = 0;
	fptr = fopen("./source/output.txt", "a");
	printf("請輸入字串，按ENTER鍵結束輸入:\n");

	while ((ch = getchar()) != ENTER && i < 99) {
		str[i++] = ch;
	}

	putc('\n', fptr);
	fwrite(str, sizeof(char), i, fptr);
	fclose(fptr);
	puts("\n檔案附加完成!!");

	return 0;
}