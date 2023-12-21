#include <stdio.h>

int main() {
	FILE *fptr1, *fptr2;
	char ch;
	fptr1 = fopen("./source/welcome.txt", "r");
	fptr2 = fopen("./source/output.txt", "w");

	if ((fptr1 != NULL) && (fptr2 != NULL)) {
		while ((ch = getc(fptr1)) != EOF) {
			putc(ch, fptr2);
		}

		fclose(fptr1);
		fclose(fptr2);
		puts("檔案拷貝完成!!");
	} else {
		puts("檔案拷貝失敗!!");
	}

	return 0;
}