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
    printf("Sum of base and height is:- %f %f ",height+base);
}
