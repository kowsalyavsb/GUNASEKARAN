#include <stdio.h>

int main(void) {
	int num,temp, digit,a;
	scanf("%d",&num);
	temp=num;
	while(temp!=0)
	{
		digit=temp % 10;
		temp=temp/10;
		a=a*10+digit;
		
	}
	if (num== a)
	 printf("%d is a palindrome",num);
	 else
	 printf("%d is not a palindrome",num);
	return 0;
}
