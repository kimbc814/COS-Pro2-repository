#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int fun37_1() {
	char* s1 = "Hello";
	char s2[10] = "Hello";

	printf("%d\n", strlen(s1));
	printf("%d\n", strlen(s2));

	return 0;
}
int fun37_2_1() {
	char* s2 = "Hello";
	char s1[10] = "Hello";

	int ret = strcmp(s1, s2);

	printf("%d\n", ret);
	return 0;
}
int fun37_2_2() {
	char* s1 = "Hello";
	char s2[10] = "Hello";

	printf("%d\n", strcmp("aaa","aaa"));
	printf("%d\n", strcmp("aab", "aaa"));
	printf("%d\n", strcmp("aab", "aac"));

	return 0;
}
int fun37_2_3() {
	char s1[20];
	char s2[20];

	printf("문자열 두 개를 입력하세요 : ");
	scanf("%s %s", s1, s2);

	int ret = strcmp(s1, s2);

	switch (ret) {
	case 0:
		printf("두 문자열 같음\n");
		break;
	case 1:
		printf("%s보다 %s가 큼\n", s2, s1);
		break;
	case -1:
		printf("%s보다 %s가 큼\n", s1, s2);
		break;
	}
	return 0;
}
int fun37_2_4() {
	char s1[20];
	char s2[20];

	printf("문자열 두 개를 입력하세요 : ");
	scanf("%s %s", s1, s2);

	int ret = strcmp(s1, s2);
	printf("반환값: %d\n", ret);


	if (ret == 0) {
		printf("두 문자열 같음\n");
	}
	else if (ret > 0) {
		printf("%s보다 %s가 큼\n", s2, s1);
	}
	else if (ret < 0) {
		printf("%s보다 %s가 큼\n", s1, s2);
	}
	return 0;
}
int fun37_4() {
	
	char* s1 = "C Language";
	pritnf("%d\n", strlen(s1));
	return 0;
}
int fun37_5() {
	char* s1 = "Pachelbel Canon";
	char* s2 = "Pachelbel Canon";
	int ret= strcmp(s1,s2));

	printf("%d", ret);

	return 0;
}



