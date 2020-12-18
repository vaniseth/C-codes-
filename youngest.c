#include <stdio.h>

int main() 
{
	int ram, shyam, ajay;
	printf("Enter the ages of Ram, Shyam and Ajay: \n");
	scanf("%d %d %d", &ram, &shyam, &ajay);
	
	if (ram<=shyam)
	{ 
		if(ram<=ajay)
		{ 
			printf("Ram is youngest");
		}
		else
		{
			printf("Ajay is youngest");
		}	
	}
	else if (shyam<= ajay)
	{
		printf("Shyam is youngest");
		
	}
	else 
	{
		printf("Ajay is youngest");
	}
	
	return 0;
}
