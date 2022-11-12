#include <stdio.h>
#include <stdlib.h>

int main() {
    int x,y;
    
    while (scanf("%d %d", &x, &y) == 2)
	{
		if(x<10 && y<10){
			printf("%d\n", x+y);
		}	
    }
    return 0;
}
