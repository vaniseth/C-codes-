#include <stdio.h>

int main()
{
	int a,b,c;
	printf("Enter the value of a:\n");
	scanf("%d", &a);
	
	printf("Enter the value of b: \n");
	scanf("%d", &b);
	
	c=a;
	a=b;
	b=c;
	
	
	printf("\nThe value of a=%d",a);
	printf("\nThe value of b=%d",b);
	return 0;
}
