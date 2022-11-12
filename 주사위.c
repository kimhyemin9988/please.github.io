#include <stdio.h>
#include <stdlib.h>

	/*�ֻ��� dice1, dice2, dice3
	���� ���� 3���� ������ 10000+a*1000���� ����� �޴´�.
	(ab)
	�μ��� ���Ѵ� -> �μ��� ����. a-b=0 -> ab�� ���� �� 1000+a*100 (if) 
	->�μ��� �ٸ���.(a,b) a-b !=0
	
		-> c-a =0 �� a�� c���� ���� -> 1000+a*100 (if) 
		
			c-a !=0 c�� a�� ���� ���� �ƴ� -> c-b =0 c�� b�� ���� ���� 1000+b*100			
										c-b !=0 c�� b�� ���� ���� �ƴ� -> ���� ���� ū����������
	123�� ���� ū �� ���ϱ�....
	a-b>0�̸� a�� ũ�� -> (c-a >0) c�� a���� ũ�� -> c�� ���� ū�� 
						(c-a	<0) a�� ũ�� -> a�� ���� ū�� 	
	a-b<0�̴ϱ� b�� ũ�� -> (c-b>0)�̴ϱ� c�� ũ��. c�� ���� ū�� 					
							(c-b<0)�̴ϱ� b�� ũ��. b�� ���� ū��  
/* run this program using the console pauser or add your own getch, system("pause") or input loop */



int main() {
	int a=0;
	int b=0;
	int c=0;
	scanf("%d %d %d", &a,&b,&c);
	if(a-b==0 && c-a==0 && a-c==0)
	{
		printf("%d", 10000+a*1000);
	}
	else if(a-b==0 || c-a==0)
	{
		printf("%d", 1000+a*100);
	}
	else if(c-b==0)
	{
		printf("%d", 1000+b*100);
	}
	else
	{
		if(a-b>0)//(a�� ũ�ٸ�...) 
		{
			if(c-a>0)
			{
				printf("%d", c*100);
			}
			else
			{
				printf ("%d", a*100);
			}
		}
		else //b�� ũ�ٸ�
		{
			if(c-b>0)
			{
				printf("%d", c*100);
			}
			else
			{
				printf("%d", b*100) ;
			}
		}
	}	
	return 0;
}
