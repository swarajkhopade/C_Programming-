#include<stdio.h>
#include<stdlib.h>

int factorialdiff(int ino)
{
    int iCnt = 0;
     
    if (ino < 0)
    {
        ino = -ino;
    }

    int ievenfact = 1;
    int ioddfact = 1;

    for ( iCnt = 1; iCnt <= ino ; iCnt++)
    {
        if (iCnt % 2 == 0)
        {
            ievenfact = ievenfact * iCnt;
        }

        else
        {
            ioddfact = ioddfact * iCnt;
        }    
       
    }
    return ievenfact - ioddfact;
    
    
}

int main()
{
    int ivalue = 0;
    int iret = 0;

    printf("enter the number :\n");
    scanf("%d",&ivalue);

    iret=factorialdiff(ivalue);

    printf("the factorial diffrence : %d\n",iret);

    return EXIT_SUCCESS;
}