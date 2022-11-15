#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	
	int a,b,count1=0;
	int X,N,result=0;
	
	scanf("%d", &X);
	scanf("%d", &N);
	
	while(1)
	{
		scanf("%d %d", &a, &b);
		result+=a*b;
		count1++;
		if(N==count1)
		{	
			break;
		}
	}
	
	if(X==result)
	{
		printf("Yes");
	}
	
	else
	{
		printf("No");
	}

	return 0;
}
