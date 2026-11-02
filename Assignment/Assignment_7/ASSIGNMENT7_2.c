#include<stdio.h>
#include<stdlib.h>

void display(int ino)
{
    int iCnt =0;

    for ( iCnt = 1; iCnt <= ino; iCnt++)
    {
        printf("%d",iCnt);
    }
    
}
int main()
{
    int ivalue = 0;

    printf("enter the number\n");
    scanf("%d",&ivalue);

    display(ivalue);

    return EXIT_SUCCESS;
}
