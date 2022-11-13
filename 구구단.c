#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int number1=0, oneplace1=1;
	scanf("%d", &number1);
	while(oneplace1<10)
	{
		printf("%d * %d = %d\n", number1,oneplace1,number1*oneplace1);
		oneplace1++;
	}
	return 0;
}
