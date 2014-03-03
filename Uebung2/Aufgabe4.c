#include<stdio.h>

struct Person {
	int age;
	char name[20];
};

void Aufgabe4() {
	float f = 3.1416;
	int numarray[5] = {1,2,3,4,5};
	struct Person paul = {13, "Paul"};
	struct Person peter = {16, "Peter"};
	struct Person personen[2] = {paul, peter};
	simple(numarray, paul, personen);
	printPerson(paul);
	ref(&numarray, &paul, &personen);
	printPerson(paul);
}

void simple(int nums[], struct Person pers, struct Person personen[]) {
	pers.age = 20;
	printPerson(pers);
}

void ref(int *nums[], struct Person *pers, struct Person *personen[]) {
	pers->age = 22;
}

void printPerson(struct Person p) {
	printf("Person: %s of age %d\n", p.name, p.age);
}
