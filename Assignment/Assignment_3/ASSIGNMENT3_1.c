#include<stdio.h>
#include<stdlib.h>

void printeven(int ino)
{

    int iCnt = 0;

    if(ino <= 0)
    {
        return; 
    }

    for (iCnt = 1 ; iCnt <= ino; iCnt++)
    {
        printf("%d\t", iCnt *2);
    }
}

int main()
{
    int ivalue = 0;

    printf("enter number\n");
    scanf("%d",&ivalue);

    printeven(ivalue);

    return EXIT_SUCCESS;
}