#include <stdio.h>
#define MAXIMUM1 10
#define MAXIMUM2 5

main() {
//	aufg1();
//	aufg2();
	aufg3();
}

void aufg1() {
	int i = 0, j = 0;
	for (i = 0; i < MAXIMUM1; i++) {
		j += i + 1;
	}
	printf("Die asd Summe der Zahlen von 1 bis %d ist %d\n", MAXIMUM1, j);
}

void aufg2() {
	int i;
	int j = MAXIMUM2;
	int *p;

	for (i = MAXIMUM2; i > 0; i--) {
		j = j / i;
		printf("i=%d, j = %d\n", i, j);
	}
	p = &i;
	printf("i = %d\n", p);
}

void aufg3() {
	int c;
	for (c = 0; c < 255; c++) {
		printf("%c" , c);
	}
}
