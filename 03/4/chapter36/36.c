#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>


int fun36_1() {
	char s1[10];
	printf("문자열을 입력하시오: ");
	scanf("%s", s1);

	printf("%s\n", s1);

	return 0;
}
int fun36_2_1() {
	char* s1 = "Hello";
	printf("문자열을 입력하시오: ");
	scanf("%s", s1);
	printf("%s\n", s1);
	
	return 0;
}
int fun36_2_2() {
	char* s1 = malloc(sizeof(char) * 10);

	printf("문자열을 입력하시오: ");
	scanf("%s", s1);
	printf("%s\n", s1);
	free(s1);

	return 0;
}
int fun36_3() {
	char s1[10];
	char s2[10];

	printf("문자열을 입력하시오: ");
	scanf("%s %s", s1, s2);

	printf("%s\n", s1);
	printf("%s\n", s2);

	return 0;
}
int fun36_5() {
	char s1[10];
	

	printf("문자열을 입력하시오: ");
	scanf("%s", s1);

	printf("%s\n", s1);
	

	return 0;
}
int fun36_6() {

	char* s1 = malloc(sizeof(char) * 10);
	printf("문자열을 입력하시오: ");
	scanf("%s", s1);
	printf("%s\n", s1);
	free(s1);

	return 0;
}