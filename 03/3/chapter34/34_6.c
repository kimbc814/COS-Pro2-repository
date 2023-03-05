#include <stdio.h>

int fun6()
{
	int numArr[3][4] = {
		{11, 22, 33, 44},
		{55, 66, 77, 88},
		{99, 110, 121, 132}
	};

	int** numPtr = numArr;
	printf("%d\n", numPtr[0][0]);
	return 0;
}


int fun6_2() {
	int numArr[3][4] = {
		{11, 22, 33, 44},
		{55, 66, 77, 88},
		{99, 110, 121, 132}
	};
	int (*numPtr)[4] = numArr;

	printf("%p\n", *numPtr);
	printf("%p\n", *numArr);
	printf("%d\n", numPtr[2][1]);

	printf("%d\n", sizeof(numArr));
	printf("%d\n", sizeof(numPtr));

	return 0;
}