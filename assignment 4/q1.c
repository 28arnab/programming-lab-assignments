#include<stdio.h>

int main()
{
    int num[] = {1, 2, 3, 4, 5};
    printf("Initial: ");
    for(int i  = 0 ; i < 5; i++)
    {
        printf("%d ",num[i]);
    }
    printf("\n");
    printf("Final: ");
    for(int i  = 4 ; i > -1; i--)
    {
        printf("%d ",num[i]);
    }
    printf("\n");
    return 0;
}
