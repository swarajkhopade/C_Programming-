
#include<stdio.h>
#include<stdlib.h>

int rangesum(int istart , int iend)
{   
    int iCnt = 0;
    int isum = 0;

    if (istart > iend || istart <= 0 || istart > 100 )
    {
        printf("invalid range\n");
        return 0;
    }
    

    for ( iCnt = istart; iCnt <= iend; iCnt++)
    {
        isum = isum  + iCnt;  
    }
    return isum;
    
}
int main()
{
    int ivalue1 = 0;
    int ivalue2 = 0;
    int iret = 0;

    printf("enter the starting point\n");
    scanf("%d",&ivalue1);

    printf("enter the ending point\n");
    scanf("%d",&ivalue2);

    iret=rangesum(ivalue1 , ivalue2);

    printf("addition is : %d\n",iret);

    return EXIT_SUCCESS;
}