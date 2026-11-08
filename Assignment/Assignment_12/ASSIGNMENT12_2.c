
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL checkzero(int ino)
{   
    if (ino == 0)
    {
        return TRUE;
    }

   if (ino < 0)
    {
        ino = -ino;
    }

    while (ino > 0)
    {
        int idigit = ino % 10;

        if (idigit == 0)
        {
            return TRUE;
        }
        ino = ino / 10;
    }
    return FALSE;

}
int main()
{
    int ivalue = 0;
    bool bret = FALSE;
   

    printf("enter the number \n");
    scanf("%d",&ivalue);
    
    bret=checkzero(ivalue);

    if (bret == TRUE)
    {
        printf("it contains zero");
    }
    else
    {
        printf("there is no zero");
    }
    

    return EXIT_SUCCESS;
}