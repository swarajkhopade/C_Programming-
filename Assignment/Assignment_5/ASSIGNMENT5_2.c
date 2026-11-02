#include<stdio.h>
#include<stdlib.h>

void checkleapyear(int iyear)
{
    if (iyear <= 0)
    {
        printf("inavlid year \n");
        return;
    }
    if ((iyear % 400 == 0) || (iyear % 4 == 0 && iyear % 100 != 0))
    {
        printf("leap year \n");
    }
    else
    {
        printf("not leap year \n");
    }
}

int main()
{
    int ivalue = 0;
    

    printf("enter a number \n");
    scanf("%d", &ivalue);

    checkleapyear(ivalue);

    return EXIT_SUCCESS;
}