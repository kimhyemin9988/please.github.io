#include<stdio.h>
#include<stdlib.h>
#include <math.h>

int main()

{   int RN;
    scanf("%d", &RN); // RN // RoomNumber를 입력했을때 거리가 나오기 //11
    int CRN=1; // countRoomNumber 
    int dist=1; // 거리 1부터 시작 // 1이면 while문 없이 바로 출력됨.
    while(CRN != RN) //
    {
        while(CRN<RN) //
        {

        CRN++; // 방번호를 계속 증가시킨다. 

        /* 등비수열의 일반항이 방의 번호 


        1에는 1
        2거리 234567 = 6개  
        3거리 891011~19 = 12개 
        4거리 20~37 = 18개 
        5거리 38~61번   = 24개

        2 8 20 38 => 등차수열의 합 공식 이용 k=2+6*(n-1)*n/2
        6 12 18 => 첫째항이 6, 등차가 6인 등차수열 => 6n
        */
    

            if(CRN>2+6*(dist-1)*(dist)/2-1) //만약 방번호가 범위보다 커지면
            {
                dist++; // 거리를 하나 증가시킨다
            }

            if(CRN<2+6*(dist)*(dist-1)/2-1 && CRN>(2+6*dist*(dist-1)/2)) //방번호가 거리범위 안에 들어오게 되면
            {
                break;
            }
        }
    } 

printf("%d", dist); //방의 숫자가 1일때 거리 1이므로 바로 출력

    return 0;
}
