#define  _CRT_SECURE_NO_WARNINS
#include <stdio.h>
void swap1(A, B) {
	int tmp;
	tmp = A;
	A = B;
	B = tmp;
}

void main()
{
	int A, B;
	scanf("%d", &A);
	scanf("%d", &B);
	void swap1(A, B); 
	printf("A: %d, B: %d\n", A, B);
	int tmp1;
	tmp1 = A;
	A = B;
	B = tmp1;
	printf("A: %d, B: %d\n", A, B);
}