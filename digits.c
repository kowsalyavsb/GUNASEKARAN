#include <stdio.h>

int main(void) {
	int a,count=0;
	scanf("%d",&a);
	while(a>=1)
	{
		a= a/10;
		++count;
	}	
	printf("count=%d",count); 
	return 0;
}
