#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

#define TRUE 1
#define FALSE 0

bool check( int ino )
{
    if((ino % 5) == 0)
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
    bool bret = FALSE;

    printf("enter number :\n");
    scanf("%d",&ivalue);

    bret = check(ivalue);

    if(bret ==  TRUE)
    {
        printf("divisible by 5");
    }
    else
    {
        printf("not divisible by 5");
    }
    return EXIT_SUCCESS;
}