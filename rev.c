#include<stdio.h>
int main()
{
    int rem=0, n;
    printf("Enter a number: ");
    scanf("%d", &n);
    while (n!=0)
    {
        rem = rem * 10;
        rem = n % 10 + rem;
        n = n/10;
    }
    printf("%d", rem );
    return 0;
}