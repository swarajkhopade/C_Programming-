#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;
BOOL checkeven(int ino)
{
    if((ino % 2)== 0)
    {
        return TRUE;
    }
    else 
    {
        return FALSE;
    }
}

int main()
{
    int ivalue =0;
    BOOL bret = FALSE;

    printf("enter number\n");
    scanf("%d",&ivalue);

    bret = checkeven(ivalue);

    if (bret == TRUE)
    {
        printf("%d is an even number \n",ivalue);
    }
    else
    {
        printf("%d is an odd number \n",ivalue);
    }

    return EXIT_SUCCESS;
}