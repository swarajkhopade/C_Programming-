#include<stdio.h>
#include<stdlib.h>

void displayodd(int ino)
{
    int iCnt =0;

    for ( iCnt = 1; iCnt <= ino; iCnt++)
    {
        if (iCnt % 2 != 0)
        {
             printf("%d ",iCnt);
        }
        
    }
    
}
int main()
{
    int ivalue = 0;

    printf("enter the number\n");
    scanf("%d",&ivalue);

    displayodd(ivalue);

    return EXIT_SUCCESS;
}
