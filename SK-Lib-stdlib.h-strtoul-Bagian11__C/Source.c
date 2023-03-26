#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

/*
	Source by AlphaCodingSkills (https://www.alphacodingskills.com)
	Modified For Learn by RK
	I.D.E : VS2022
*/

int main() {
	char str1[] = "123";
	char str2[] = "10.55";
	char str3[] = "100 some words";
	char str4[] = "some words 555";

	char* end;

	unsigned long int num1 = strtoul(str1, &end, 10);
	unsigned long int num2 = strtoul(str2, &end, 10);
	unsigned long int num3 = strtoul(str3, &end, 10);
	unsigned long int num4 = strtoul(str4, NULL, 10);

	//menampilkan hasil
	printf("strtoul(\"%s\") = %lu\n", str1, num1);
	printf("strtoul(\"%s\") = %lu\n", str2, num2);
	printf("strtoul(\"%s\") = %lu\n", str3, num3);
	printf("strtoul(\"%s\") = %lu\n", str4, num4);

	_getch();
	return 0;
}