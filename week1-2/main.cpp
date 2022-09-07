#include <stdio.h>


int main(void) {
	int c;
	int a;
	int b;

a = 10;
b = 20;
c = a * b;

printf("voor een geheel getal in...");
scanf_s("%d", &b);

if (b > 9) {

	printf("het ingevoerde getal is groeter dan g");
}

	printf("huts %d %d\n", a,b);
	printf("(a x b) is %b", c);
	return 0;
}