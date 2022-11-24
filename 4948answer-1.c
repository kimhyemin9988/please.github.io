//시간초과 ㅜ
#include<stdio.h>
#include<stdlib.h>
/*
임의의 자연수 n<Prime number<2n
1. 소수를 구하는 방법
1-1.k를을 2~k사이의 수로 나눴을때 하나라도 나머지가 0이면 소수가 아님
int n,k;
int count=0;
scanf("%d", &n); //

for(k=n+1; k<2n ; k++)
{
    for(int i=2; i<k ;i++)
    {
        if(k%i == 0)
        {
            break;
        }
        
    }
    count++:
}
2. n<k<2n

*/
int main(){
    int k;
    int n[10000]={0}; // 입력받는 배열
    int arryr[10000]={0}; // count 배열

    int onnn=0;

    int on=0;
    while(1)
    {
        scanf("%d", &n[on]); // n[0]~n[on]까지 입력받기 
        if(n[on] == 0)
        {
            break;
        } // 0입력받음 break
        on++;
    }

        onnn=on;

    for(on =0 ;on<onnn ; on++)    //0으로 초기화 0입력 전까지 반복
    { 
        int count1 =0 ;
        for(k=n[on]+1; k<n[on]*2 ; k++)
        {
            int i=2;

            while(i<k && k%i !=0)
            {
                i++;
                if(i == k) //i == k일때까지 반복한다면 그수는 소수이다.
                {
                    count1++;
                }
            }
            arryr[on] = count1;

        }
    }
    

for(on=0 ; on<onnn ; on++) // 다시 0으로 초기화
{
    printf("%d\n", arryr[on]);
}
        return 0;
}
