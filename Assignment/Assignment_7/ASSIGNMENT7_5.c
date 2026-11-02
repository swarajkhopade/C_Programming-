#include<stdio.h>
#include<stdlib.h>

void multipledisplay(int ino)
{
    int iCnt =0;

    for ( iCnt = 1; iCnt <= 5; iCnt++)
    {
             printf("%d ",ino * iCnt);
        
    }
}
int main()
{
    int ivalue = 0;

    printf("enter the number\n");
    scanf("%d",&ivalue);

    multipledisplay(ivalue);

    return EXIT_SUCCESS;
}
