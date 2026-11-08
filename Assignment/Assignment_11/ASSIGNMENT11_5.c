
#include<stdio.h>
#include<stdlib.h>

void rangesumrev(int istart , int iend)
{   
    
   if (istart > iend)
    {
        printf("invalid range\n");
    }
    
    int iCnt = 0;

    for ( iCnt = iend; iCnt >= istart; iCnt--)
    {
        printf("%d ",iCnt);
    }
    printf("\n");
    
}
int main()
{
    int ivalue1 = 0;
    int ivalue2 = 0;
   

    printf("enter the starting point\n");
    scanf("%d",&ivalue1);

    printf("enter the ending point\n");
    scanf("%d",&ivalue2);

    rangesumrev(ivalue1 , ivalue2);

    return EXIT_SUCCESS;
}