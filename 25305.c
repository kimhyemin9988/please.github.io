#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define _CRT_SECURE_NO_WARNINGS

int result[1001]={}; //응시자의수 <=1000

int main()
{
    int N, k; //응시자의 수 N, k = 상을 받는 사람의 수
    int x; // 점수는 <=10000
    scanf("%d %d", &N, &k); 
    for(int i=0; i<N; i++) // 응시자의 수만큼
    {
        scanf("%d", &x); // 점수를 출력받는다
        result[i] = x ; //순서대로 배열에 저장
    }

    while(1)
    {
        for(int i=0; i<N; i++)
        {
            if(result[i]<result[i+1]) // 버블정렬 사용 
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
    
    printf("%d", result[k-1]);
    return 0;
}
