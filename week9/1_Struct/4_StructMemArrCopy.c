#include <stdio.h>

typedef struct person {
	char name[20];
	char phoneNum[20];
	int age;
} Person;

void ShowPersonInfo(Person man) {
	printf("name: %s \n", man.name);
	printf("phone: %s \n", man.phoneNum);
	printf("age: %d \n", man.age);
}


Person ReadPersonInfo() {
	Person man;
	printf("name? "); scanf_s("%s", man.name, 20);
	printf("phone? "); scanf_s("%s", man.phoneNum, 20);
	printf("age? "); scanf_s("%d", &man.age);
	return man;
}


int main() {
	Person man = ReadPersonInfo();
	ShowPersonInfo(man);
	return 0;
}