#include <stdio.h>

int main() 
{
	char ch;
        printf("Enter the character: \n");
	scanf("%c",&ch);
	if(ch>=48 && ch<=57)
	{
		printf("%c is a digit\n", ch);
	}
	else if(ch>=65 && ch<=90)
	{
		printf("%c is a capital letter\n", ch);
	}
	else if(ch>=97 && ch<=122)
	{
		printf("%c is a small letter\n", ch);
	}
	else
	{
		printf("%c is a special character\n", ch);
	}
	
	
	return 0;
}