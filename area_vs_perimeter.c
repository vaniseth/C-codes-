#include <stdio.h>

int main() 
{
	float l,b,area,peri;
	printf("Enter the length and breadth of the rectangele: \n");
	scanf("%f %f", &l, &b);
	
	area=l*b;
	peri=2*(l+b);
	
	printf("\nThe area of rectangle is:%.2f", area);
	printf("\nThe perimeter of rectangle is: %.2f", peri);
	
	if (area>peri)
	{
		printf("\nThe area of recangle is greater then it's perimeter");
	}
	else
	{
		printf("\nThe perimeter of the rectangle is greater than it's area");
	}
	return 0;
}
