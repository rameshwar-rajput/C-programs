#include <stdio.h>
main()
{
    int nt, it, jt;
    printf("Enter size of list : ");
     scanf("%d", &nt);
    int ab[nt];
    printf("Enter values\n");
    for (it = 0; it < nt; it++)
    {
        scanf("%d", &ab[it]);
    }
    for (it = 1; it <= 3; it++)
    {
        for (jt = it; jt < nt; jt++)
        {
            ab[jt] = ab[jt + 1];
        }
    }
    printf("Values after removing elements\n");
    for (it = 0; it < nt - 3; it++)
        printf("%d\n", ab[it]);
    printf("Last value : ", ab[nt]);
}
