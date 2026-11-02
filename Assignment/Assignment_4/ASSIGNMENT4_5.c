#include<stdio.h>
#include<stdlib.h>

void checkdivisiblity(int ino)
{
    if (ino % 5 == 0)
    {
        printf("it is divisible by 5");
    }
    else
    {
        printf("it is not divisible by 5");
    }
}
int main()
{
    int ivalue = 0;

    printf("enter a number \n");
    scanf("%d",&ivalue);

    checkdivisiblity(ivalue);

    return EXIT_SUCCESS;
}