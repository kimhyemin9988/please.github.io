#include<stdio.h>
#include<stdlib.h>

int factorial(int n) // 재귀함수
{

    if(n == 1)
        return 1; 
    else if(n > 12) // 12보다 크면 프로그램을 정상적으로 종료한다
        exit(0);
    else if(n == 0) // 0이면 1를 반환한다.
        return 1;
    

    return n * factorial(n-1);
}


int main()
{
    int n;
    scanf("%d", &n);
    printf("%d", factorial(n));
    return 0;
}
