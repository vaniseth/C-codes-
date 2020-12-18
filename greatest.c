#include <stdio.h>

int main(void) 
{
	int a,b,c,greatest;
	printf("Enter the three numbers: \n");
	scanf("%d %d %d", &a, &b, &c);
	
	greatest=(a>b&&a>c? a:b>c? b:c);
	
	printf("\nThe greatest number out of three is:%d",greatest);
	return 0;
}
