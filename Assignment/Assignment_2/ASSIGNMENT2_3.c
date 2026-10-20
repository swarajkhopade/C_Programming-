#include<stdio.h>
#include<stdlib.h>


void display(int ino)
{
    if(ino < 10)
    {
        printf("hello");
    }
    else
    {
        printf("demo");
    }
}

int main()
{
    int ivalue = 0;

    printf("enter number :\n");
    scanf("%d",&ivalue);

    display(ivalue);

    return EXIT_SUCCESS;
}