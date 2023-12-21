#pragma warning(disable : 4996)

#include <stdio.h>

int main() {
	FILE *in, *out;

	int cnt;
	char str[100];

	in = fopen("./source/welcome.txt", "r");
	out = fopen("./source/output.txt", "w");

	while (!feof(in)) {
		cnt = fscanf(in, "%s", str); // read file
		if (cnt > 0)
			fprintf(out, "%s\n", str); // write file
	}

	fclose(in);
	fclose(out);

	return 0;
}