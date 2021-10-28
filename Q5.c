#include <stdio.h>
void main()
{
    printf("Eshank Jain 1000014017\n");
    int n, sum = 0, i;
    printf("Enter Number : ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        sum = sum + i;
    printf("Sum of first %d numbers is %d\n", n, sum);
}
