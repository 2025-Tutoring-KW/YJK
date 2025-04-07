#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void main()
{
	//사용자에게 일과 시간을 입력받고 분으로 전환하는 프로그램 작성
	int day1, hour1, time1;

	printf("날짜 ?");
	scanf("%d", &day1);
	printf("시간?");
	scanf("%d", &hour1);

	time1 = day1 * 24 * 60 + hour1 * 60;
	printf("분 : %d", time1);
}