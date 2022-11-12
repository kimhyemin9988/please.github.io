#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void)
{
	int min1=0, min2=0, minadd=0, hr1=0, hr2=0, hr3=0;
		
	scanf("%d %d", &hr1, &min1);
	scanf("%d", &min2);
	
	minadd = min1+min2;
	hr2=hr1+minadd/60;
	hr3=hr2-(hr2/24)*24;
	
	if(minadd<60)
	{
		printf("%d %d", hr1, minadd);
	}
	else
	{
		printf("%d %d", hr3, minadd-(minadd/60)*60);
	}

	/*
	초기에 주어진 분은 60을 넘지 않는다 = min1;
	요리시간 분은 최대 1000분 = min2; 
	1. min1에서 min2를 더한값을 출력한다.(60이 넘지 않을 경우)
	3. min1에서 min2를 더한값이 60을 넘을 경우 = min3 ( min3-(mim3/60)*60)
	그 값을 60으로 나눈 값의 목*60)을 더한값에서 뺀 만큼을 출력한다. 
	2. min1에서 min2를 더한값이 60의 배수이면 0을 출력한다.	
	*/
	/*
	초기에 주어진 시간은 23을 넘지 않는다 = hr1;
	요리시간 분은 최대 1000분 = min2;
	min1+min2=min3
	1. min3 60이 넘지 않을 경우 hr1을 그대로 출력한다.
	2. min3 이 60을 넘거나 같을 경우  (hr1+min3/60)=hr2의 몫을 출력한다
		그러나 (hr1+min3/60)=hr2 > 24보다 클 경우 = hr2-(hr2/24)*24을 출력한다. 	  
	*/
	 
	return 0;
}
