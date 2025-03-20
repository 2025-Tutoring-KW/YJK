#define  _CRT_SECURE_NO_WARNINS
#include <stdio.h>
int main()
{
	int a;
	
	int a2;

	int i;

	for (a = 1; a < 10; a++) {
		for (i = 0; i < 10; i++) {
			if (i % 3 != 0) {
				if (a % 3 == 0) {
					char a1[5] = "CLAP";
					printf("%c	", a1);
				}
				else {
					a2 = a;
					printf("%d%d	", i, a2);
				}
			}
			}
	}
}