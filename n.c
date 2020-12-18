#include <stdio.h>

int main(void) 
{
    int num, sum;
    printf("\n Enter the number: ");
    scanf("%d",&num);
    sum = num*(num+1)/2;
    printf("\n\n The sum of natural number is: %d\n ", sum);

	return 0;
}
