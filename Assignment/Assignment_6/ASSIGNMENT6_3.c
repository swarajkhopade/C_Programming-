#include<stdio.h>
#include<stdlib.h>

void calculatediscount(float famount)
{
    float fdiscount = 0.0f;
    float ffinalamount = 0.0f;

    if(famount < 0)
    {
        printf("invalid input");
    }
    else if (famount < 1000)
    {
        fdiscount = 0;
    }
    else if (famount < 5000)
    {
        fdiscount = 10;
    }
    else
    {
        fdiscount = 20;
    }

    ffinalamount = famount - (famount * fdiscount / 100);

    if (famount >=0)
    {
        printf("payable amount = %.2f",ffinalamount);
    }
    
}

int main()
{
    float famount= 0.0f;
    

    printf("enter purchase amount : \n");
    scanf("%f", &famount);

    calculatediscount(famount);

    return EXIT_SUCCESS;

}    