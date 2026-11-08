
#include<stdio.h>
#include<stdlib.h>

int rangesumeven(int istart , int iend)
{   
    
    if (istart < 0 || iend < 0 || istart > iend )
    {
        printf("invalid range\n");
        return 0;
    }
    
    int iCnt = 0;
    int isum = 0;


    for ( iCnt = istart; iCnt <= iend; iCnt++)
    {
         if (iCnt % 2 == 0)
        {
             isum = isum  + iCnt;  
        }     
       
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

    iret=rangesumeven(ivalue1 , ivalue2);

    printf("addition is : %d\n",iret);

    return EXIT_SUCCESS;
}