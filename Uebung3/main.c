/*
 * main.c
 *
 *  Created on: 03.03.2014
 *      Author: Florian Fankhauser
 */
#include <stdio.h>

int main(int argc, char **argv) {
	if (argc < 3) {
		printf("to few arguments");
		return 1;
	}

	FILE *input = fopen(argv[1], "rb");
	if(input == NULL) {
		printf("Error while opening file");
		return 1;
	}

	char oopt[] = "wba";
	if (!(argc == 4 && argv[3] == "/a")) {
		oopt[2] = NULL;
	}
	FILE *output = fopen(argv[2], oopt);
	if (output == NULL) {
		printf("Error while writing");
		return 1;
	}

	int c;
	while((c = fgetc(input)) != EOF) {
		fputc(c, output);
	}
	fclose(input);
	fclose(output);

	printf("done");
	return 0;

}
