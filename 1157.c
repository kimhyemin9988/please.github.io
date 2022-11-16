#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include <ctype.h>

int main()
{
    char alpha1[1000001];
    int length;//입력받은 문자열의 길이
    gets(alpha1);

    length=Strlen(alpha1);

    int count1=0;
    int n=0;
    int i=0;
    int k=0; // 문자 1과 다른 배열을 비교했을때 같은 횟수
    char result1[1]="";
    char result2[1]="";


    for(i=0 ; i-1<length; i++)

    {
        count1=0;
        for(n=i+1 ; n<length; n++)
        {   
            if(alpha1[i]==alpha1[n])
            {
                count1++;  // 첫번째 카운트
            }
            result1[1]=alpha1[i]; // result1에 문자 저장 m이 저장된 상태

        }

        if(count1>k)
        {
            k+=count1; // k에 count1을 저장
            result2[1]=result1[1];
        }

        else if(count1==k)
           
            break;

        else
        {
            continue;
        }


    }
    
    if(count1==k)
    {
        printf("?");
    }

    else
    
    printf("%c", result2[1]);

    return 0;
