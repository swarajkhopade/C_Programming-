#include<stdio.h>
#include<stdlib.h>

void accept(int ino)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= ino; iCnt ++ )
    {
        printf("*\n");
    }
}

int main()
{
    int ivalue = 0;
    ivalue = 5;

    accept(ivalue);

    return EXIT_SUCCESS;
}