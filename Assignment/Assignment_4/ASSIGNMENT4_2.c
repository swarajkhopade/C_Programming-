#include<stdio.h>
#include<stdlib.h>

void checkevenodd(int ino)
{
    if (ino % 2 == 0)
    {
        printf("number is even ");
    }
    else
    {
        printf("number is odd ");

    }
}

int main()
{
    int ivalue = 0;

    printf("enter a number : \n");
    scanf("%d",&ivalue);

    checkevenodd(ivalue);

    return EXIT_SUCCESS;

}
