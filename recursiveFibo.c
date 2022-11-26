#include<stdio.h>
#include<stdlib.h>

int Recursive(int a)
{
    if(a == 0)
        return 0; // 0번째 수는 0
    else if(a == 1)
        return 1; // 1번째 수는 1
    else if(a >20)
        exit(0); // 20초과일때 프로그램 정상적으로 종료되도록

    return Recursive(a-2)+Recursive(a-1);
}


int main()
{
    int a;
    scanf("%d", &a);
    printf("%d", Recursive(a));
    return 0;
}
