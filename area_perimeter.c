#include <stdio.h>

int main(void) 
{
	int l, b, r;
	float ar, pr, ac, cc;
	printf("Enter the length of rectangle:\n");
	scanf("%d", &l);
	printf("Enter the breadth of the rectanle:\n");
	scanf("%d", &b);
	printf("Enter the radius of circle:\n");
	scanf("%d", &r);
	
	// rectangle
	ar=l*b;
	pr=2*(l+b);
	
	//circle
	ac=3.14*r*r;
	cc=2*3.14*r;
	
	printf("The area of rectangle is: %.2f", ar);
	printf("\nThe perimeter of rectangle is: %.2f", pr);
	printf("\nThe area of circle is: %.2f", ac);
	printf("\nThe circumfrence of circle is: %.2f", cc);
	

	return 0;
}
