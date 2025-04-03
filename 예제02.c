#define  _CRT_SECURE_NO_WARNINS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int sort_Ascending(int arr[100], int str[100]);
int sort_Dscending(int arr[100], int str[100]);

void main()
{
	int arr[100];
	srand(time(NULL));


}
int sort_Ascending(int arr[100], int str[100]) {
    for (int i = 0; i <= 100; i++) {

        for (int j = 0; j < 100; j++) {

            if (arr[j] > arr[j + 1]) {   // 오름차순

                int tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;

            }

        }

    }
    printf("%s", arr[100]);
}
int sort_Dscending(int arr[100], int str[100]) {
    for (int i = 100; i >= 0; i--) {

        for (int j = 100; j > 0; j--) {

            if (arr[j] < arr[j + 1]) {   // 내름차순

                int tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;

            }

        }

    }
    printf("%s", arr[100]);
}