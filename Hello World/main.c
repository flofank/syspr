/*
 * main.c
 *
 *  Created on: 17.02.2014
 *      Author: Florian
 */
#include <stdio.h>

main() {
	printf("Hello World\n");

	char c = 'x';
	char *p;

	p = &c;
	printf("%c", *p);
	printf(p);
}

