#include<stdio.h>
#include<stdlib.h>
/*
    정수 n개로 이루어진 수열 A와 정수 X
    int i; 배열안에 들어갈 숫자
    A[10001]={};
    int X; 정수 X
    
    X보다 작은 수를 입력받은 순서대로 공백으로 구분해 출력
*/

int main()
{
    int N;
    int i;
    int A[10001]={};
    int X;
    scanf("%d", &N);
    scanf("%d", &X);

    for(i=0; i<N; i++)
    {
        scanf("%d", &A[i]);
    }

    for(i=0; i<N; i++)
    {
        if(A[i]<X)
        {
            printf("%d ", A[i]);
        }

    }

    return 0;
}
