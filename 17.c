/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void main()
{
	//사용자에게 3개의 숫자를 입력받고 삼각형을 구성할 수 있는지 판별하는 프로그램
	int a, b, c, sum, long1;
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);

	if (a > b && a > c) {
		sum = b + c;
		if (a < sum) {
			printf("삼각형을 그릴 수 있습니다.");
		}
		else
			printf("삼각형을 그릴 수 없습니다.");
	}
	else if (b > a && b > c) {
		sum = a + c;
		if (b < sum) {
			printf("삼각형을 그릴 수 있습니다.");
		}
		else
			printf("삼각형을 그릴 수 없습니다.");
	}
	else if (c > a && c > b) {
		sum = b + a;
		if (c < sum) {
			printf("삼각형을 그릴 수 있습니다.");
		}
		else
			printf("삼각형을 그릴 수 없습니다.");
	}
}*/