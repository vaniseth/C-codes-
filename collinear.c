#include <stdio.h>

int main(void) 
{
	float x1,y1,x2,y2,x3,y3,m,n;
	printf("Enter the three points: \n");
	scanf("%f %f %f %f %f %f", &x1,&y1,&x2,&y2,&x3,&y3);
	
	m = (y2-y1)/(x2-x1);
	n = (y3-y1)/(x3-x1);
	
	if (m==n)
	{
		printf("Three points lie on the same line. \n");
	}
	else
	{
		printf("Three points dosen't lie on the same line. \n");
	}
	return 0;
}
