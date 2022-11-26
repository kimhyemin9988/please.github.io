#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define _CRT_SECURE_NO_WARNINGS

//인수를 입력하기

int result[10001]={0};
int Sorting(int *result, int N);

int main()
{
    int N; //입력할 수의 개수
    int x; // 입력할 수
    scanf("%d", &N); 
    for(int i=0; i<N; i++) // 입력된 개수만큼
    {
        scanf("%d", &x); // 수를 입력받는다
        result[i] = x ; //순서대로 배열에 저장
    }

    Sorting(result, N);

    for(int i=0; i<N; i++) // 입력된 개수만큼
    {
        printf("%d \n", result[i]);
    }

    return 0;
}


int Sorting(int *result, int N) // 정렬된 숫자열을 오름차순으로 정렬하는 함수
{
    while(1)
    {
        for(int i=0; i<N-1; i++)
        {
            if(result[i]>result[i+1]) // 버블정렬 사용 87 23
            {
                int c=result[i]; // c에 a값 저장 
                result[i]=result[i+1]; //앞 배열에  
                result[i+1]=c;// 뒤 배열에 c값 저장;   
            }
        }
        N--; // 맨 뒤 배열에 가장 작은수 하나 고정

        if(N == 0) //
        {
            break;
        }
    }
    return 0;
}
