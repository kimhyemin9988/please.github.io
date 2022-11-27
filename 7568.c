#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define _CRT_SECURE_NO_WARNINGS
/*
x 어떤 사람의 몸무게
y 키
N 사람의 수

*/

int rank[201] = {0};//등수 배열
int x[201]={0};//몸무게 배열
int y[201]={0};//키 배열

int Rank(int *x, int *y, int N);
int recursion(int *x, int *y, int i, int N); //재귀함수

int Result(int *rank, int N) //등수 출력 함수
{
    for(int i = 0; i<N ; i++)
    {
        printf("%d ", rank[i]);
    }
    return 0;
}

int main()
{
    int N;//참가인원
    scanf("%d", &N);

    if(N > 50 || N < 2)
    {
        exit(0); //2보다 작고 50보다 크면 프로그램을 종료한다.
    }

    for(int i = 0; i<N ; i++)
    {
        scanf("%d ", &x[i]);
        if(x[i] < 10 || x[i] > 200) //범위 벗어나면 프로그램 종료
        {
            exit(0);
        }
        scanf("%d", &y[i]);
        if(y[i] < 10 || y[i] > 200) //범위 벗어나면 프로그램 종료
        {
            exit(0);
        }
    }

    Rank(x, y, N);

    return 0;
}

int Rank(int *x, int *y, int N) 
{
    int i=0;
    return recursion(x, y, i, N); 
}

int recursion(int *x, int *y, int i, int N) 
{
    int r = 1; //등수 1부커 시작
    rank[i]=r;

    for(int k = 0; k<N; k++) 
    {
        if(x[i] < x[k] && y[i] < y[k])
        {
            r = r + 1; // 등수 값에 1을 더한다
            rank[i]=r; // 배열에 저장
        }
        
    }
    
    if(i == N-1) return Result(rank, N);

    else return recursion(x, y, i+1, N); //재귀 하나씩 증가해서 
}
