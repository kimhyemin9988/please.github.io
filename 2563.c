#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define _CRT_SECURE_NO_WARNINGS
/*

*/
int arr[101][101];
int main()
{   
    int n,x,y,i,j,k;
    int area=0;

    scanf("%d", &n); // 받을 검은 색종이 개수

    for (k = 0; k < n; k++) //3번 반복
	{
		scanf("%d %d", &x, &y); // x는 가로 y는 세로길이

		for (i = x; i <x + 10; i++)
		{
			for (j = y; j < y + 10; j++)
				arr[j][i] = 1; //그 부분을 1로 채우기 나머지는 0
		}
	}

    for (i = 1; i <= 100; i++)
	{
		for (j = 1; j <= 100; j++)
		{
			area += arr[j][i]; //1인부분을 더하기
		}
	}

    printf("%d", area);

    return 0;
}
