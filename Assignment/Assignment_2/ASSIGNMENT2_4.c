#include<stdio.h>
#include<stdlib.h>

void display(int ino, int ifrequency)
{
    int iCnt = 0;

    if (ifrequency < 0)
    {
        ifrequency = -ifrequency;
    }
    

    for(iCnt = 1; iCnt <= ifrequency; iCnt ++)
    {
        printf("%d\t", ino);
    }
}

int main()
{
    int ivalue = 0;
    int icount = 0;

    printf("enter number\n");
    scanf("%d",&ivalue);

    printf("enter frequency");
    scanf("%d",&icount);
    
    display(ivalue,icount);

    return EXIT_SUCCESS;
}