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
	�ʱ⿡ �־��� ���� 60�� ���� �ʴ´� = min1;
	�丮�ð� ���� �ִ� 1000�� = min2; 
	1. min1���� min2�� ���Ѱ��� ����Ѵ�.(60�� ���� ���� ���)
	3. min1���� min2�� ���Ѱ��� 60�� ���� ��� = min3 ( min3-(mim3/60)*60)
	�� ���� 60���� ���� ���� ��*60)�� ���Ѱ����� �� ��ŭ�� ����Ѵ�. 
	2. min1���� min2�� ���Ѱ��� 60�� ����̸� 0�� ����Ѵ�.	
	*/
	/*
	�ʱ⿡ �־��� �ð��� 23�� ���� �ʴ´� = hr1;
	�丮�ð� ���� �ִ� 1000�� = min2;
	min1+min2=min3
	1. min3 60�� ���� ���� ��� hr1�� �״�� ����Ѵ�.
	2. min3 �� 60�� �Ѱų� ���� ���  (hr1+min3/60)=hr2�� ���� ����Ѵ�
		�׷��� (hr1+min3/60)=hr2 > 24���� Ŭ ��� = hr2-(hr2/24)*24�� ����Ѵ�. 	  
	*/
	 
	return 0;
}
