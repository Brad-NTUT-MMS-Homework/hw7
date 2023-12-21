#include <stdio.h>

int main() {
	FILE *fptr;
	char ch;
	int count = 0;

	fptr = fopen("./source/welcome.txt", "r");
	if (fptr != NULL) {
		while ((ch = getc(fptr)) != EOF) {
			printf("%c", ch);
			count++;
		}
		fclose(fptr);
		printf("\n總共有%d個字元\n", count);
	}  else {
		puts("檔案開啟失敗!!");
	}

	return 0;
}