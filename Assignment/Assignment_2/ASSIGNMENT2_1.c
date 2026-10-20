#include<stdio.h>
#include<stdlib.h>

void display(int ino)
{
    int iCnt =0;

    //loops runs ino times
    while (iCnt < ino)
    {
        printf("*\n");
        iCnt ++;
    }
}
int main ()
{
    int ivalue = 0;


    printf("enter number \n");
    scanf("%d",&ivalue);

    display(ivalue);

    return EXIT_SUCCESS;
}
