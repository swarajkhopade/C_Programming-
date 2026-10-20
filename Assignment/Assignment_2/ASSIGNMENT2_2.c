#include<stdio.h>
#include<stdlib.h>

void display(int ino)
{
    int iCnt = 0;

    while (ino > iCnt)
    {
        printf("*\n");
        ino--;
    }
}
int main()
{
    int ivalue = 0;

    printf("enter number\n");
    scanf("%d",&ivalue);

    display(ivalue);

    return EXIT_SUCCESS;
}