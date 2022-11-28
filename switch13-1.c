#include<stdio.h>

void main()
{
    int c = 1;
    switch(3)
    {
        case 1 : c+=3;
        case 2 : c++;
        case 3 : c = 0;
        case 4 : c+=3;
        case 5 : c-=10;
        default : c--;
    }
    printf("%d", c);
}
//break문이 없어서 case3부터 default까지 전부 실행되는 것을 볼 수 있습니다.
때문에 output:-8이 출력됩니다.
