#include<stdio.h>
#include<stdlib.h>

void displayrange(int istart , int iend)
{
    if (istart > iend)
    {
        printf("invalid range\n");
        return;
    }

    int iCnt = 0;

    for ( iCnt = istart; iCnt <= iend; iCnt++)
    {
        printf("%d ",iCnt);
    }
    printf("\n");

}
int main()
{
    int ivalue1 = 0;
    int ivalue2 = 0;

    printf("enter the starting point \n");
    scanf("%d",&ivalue1);

    printf("enter the ending point \n");
    scanf("%d",&ivalue2);

    displayrange(ivalue1,ivalue2);

    return EXIT_SUCCESS;
}