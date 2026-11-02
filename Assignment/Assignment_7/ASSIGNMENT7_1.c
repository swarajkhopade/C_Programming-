#include<stdio.h>
#include<stdlib.h>

void pattern(int ino)
{
    int iCnt = 0;
    if (ino < 0)
    {
        ino = -ino;
    }
    
    for ( iCnt = 1; iCnt <= ino; iCnt++)
    {
        printf("$\t*");
    }
    
}
int main()
{
    int ivalue = 0;

    printf("enter the number\n");
    scanf("%d",&ivalue);

    pattern(ivalue);

    return EXIT_SUCCESS;
}
