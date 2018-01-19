#include <stdio.h>

int main(void) {
	int num, temp,digit,sum=0;
	scanf("%d",&num);
	temp=num;
	while(temp!=0)
	{
		digit=temp%10;
		sum=sum+digit*digit*digit;
		temp=temp/10;
		
	}
	if(num==sum)
	 printf("%d is an armstrong",num);
	 else
	 printf("%d is an not armstorng",num);
	return 0;
}
