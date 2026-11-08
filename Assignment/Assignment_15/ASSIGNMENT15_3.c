#include<stdio.h>
#include<stdlib.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL checkequal(int ino1 , int ino2)
{
    if (ino1 == ino2)
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
    int ivalue1= 0;
    int ivalue2 = 0;

    BOOL bret = FALSE;

    printf("please enter two number:\n");
    scanf("%d %d",&ivalue1,&ivalue2);

    bret=checkequal(ivalue1,ivalue2);


    if (bret == TRUE)
    {
        printf("equal\n");
    }
    else
    {
        printf("not equal\n");
    }
    return EXIT_SUCCESS;
}