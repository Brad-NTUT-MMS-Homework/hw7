#pragma warning(disable : 4996)

#include <stdio.h>

#define MAX 80

int main() {
	FILE *fptr;
	char str[MAX];
	int bytes; // store words count that fread() have read

	fptr = fopen("./source/output.txt", "r");
	
	while (!feof(fptr)) {
		bytes = fread(str, sizeof(char), MAX - 1, fptr);
		str[bytes] = '\0';
		printf("%s\n", str);
	}

	fclose(fptr);

	return 0;
}