#include <math.h>
#include <stdio.h>
void main()
{
    float base, height, area;
    printf("Enter base\n");
    scanf("%f", &base);
    printf("Enter Height\n");
    scanf("%f", &height);
    area = base * height / 2;
    printf("Area : %f", area);
    printf("Enter dimensions for triangle with different sides");
    int a,b,c,s;
    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);
    s=(a+b+c)/2;
    double are;
    are=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("Area : %f", are);
}
