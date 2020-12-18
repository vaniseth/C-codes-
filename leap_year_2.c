#include <stdio.h>

int main() 
{
	int n;
	printf("Enter the year: \n");
	scanf("%d", &n);
	if (n%4==0)
	{
		if (n%100==0)
		{
			if (n%400==0)
			{
				printf("The year %d is a leap year\n", n);
			}
			else
			{
				printf("The year %d is not a leap year\n", n);
			}
		}	
		else
		{
			printf("The year %d is a leap year\n", n);
		}
	}	
	else
	{
		printf("The year %d is not a leap year\n", n);
	}
		
	
	return 0;
}
