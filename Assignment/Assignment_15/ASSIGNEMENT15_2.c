#include<stdio.h>
#include<stdlib.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL checkgreater(int ino)
{
    if (ino > 100)
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
    int ivalue = 0;

    BOOL bret = FALSE;

    printf("please enter number:\n");
    scanf("%d",&ivalue);

    bret=checkgreater(ivalue);

    if (bret == TRUE)
    {
        printf("greater\n");
    }
    else
    {
        printf("smaller\n");
    }
    

    return EXIT_SUCCESS;
}