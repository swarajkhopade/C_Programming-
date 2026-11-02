#include<stdio.h>
#include<stdlib.h>

void checkvotingeligibility(int iage)
{

    if (iage < 0)
    {
        printf("invalid");
    }
    if (iage >= 18)
    {
        printf("eligible for voting ");
    }
    else
    {
        printf("not eligible for voting ");
    }
}

int main()
{
    int iage = 0;

    printf("enter a number \n");
    scanf("%d",&iage);

    checkvotingeligibility(iage);

    return EXIT_SUCCESS;
}