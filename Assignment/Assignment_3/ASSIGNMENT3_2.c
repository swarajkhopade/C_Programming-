#include<stdio.h>
#include<stdlib.h>

void displayfactor(int ino)
{
    int iCnt= 0;

    if(ino <= 0)
    {
        ino = -ino;
    }

    for(iCnt=1; iCnt <= (ino / 2); iCnt++)
    {
        if ((ino % iCnt == 0) && (iCnt % 2 == 0))
        {
            printf("%d\t", iCnt);
        }
    }
}

int main()
{
    int ivalue = 0;

    printf("enter number \n");
    scanf("%d",&ivalue);

    displayfactor(ivalue);

}