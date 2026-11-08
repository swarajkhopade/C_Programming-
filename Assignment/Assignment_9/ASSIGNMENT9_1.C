#include<stdio.h>
#include<stdlib.h>

void display(int ino)
{
        int iCnt = 0;

        if (ino < 0)
        {
            ino = -ino;
        }

        for ( iCnt = 0; iCnt < ino; iCnt++)
        {
            printf("* ");
        }

        for ( iCnt = 0; iCnt < ino; iCnt++)
        {
            printf("# ");
        }
        
        printf("\n");
}

int main()
{
    int ivalue = 0;

    printf("enter the number \n");
    scanf("%d",&ivalue);

    display(ivalue);

    return EXIT_SUCCESS;
}