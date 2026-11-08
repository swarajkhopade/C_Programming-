#include<stdio.h>
#include<stdlib.h>

int evenfactorial(int ino)
{
    int iCnt = 0;
    int iFact =1;
     
    if (ino < 0)
    {
        ino = -ino;
    }

    for ( iCnt = ino; iCnt > 0; iCnt--)
    {
        if (iCnt % 2 == 0)
        {
            iFact = iFact * iCnt;
        }
        
    }

    if (ino == 0)
    {
        return 0;
    }
    return iFact;
    
    
}

int main()
{
    int ivalue = 0;
    int iret = 0;

    printf("enter the number :\n");
    scanf("%d",&ivalue);

    iret=evenfactorial(ivalue);

    printf("the factorial is : %d\n",iret);

    return EXIT_SUCCESS;
}