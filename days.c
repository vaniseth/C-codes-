#include <stdio.h>

int main()
{ 
	int n, month, days;
	printf("Enter the number of days:");
	scanf("%d", n);
	
	month=n/30;
	days= n-month*30;
	
	printf("\n The number of months = %d and days= %d in total %d days", month, days,n);
	return 0;
}
