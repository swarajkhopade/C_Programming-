#include<stdio.h>
#include<stdlib.h>

void calculateelectricitybill(int iunits)
{
    float fbill = 0.0f;

    if(iunits < 0)
    {
        printf("invalid units");
    }
    else if(iunits <= 100)
    {
        fbill = iunits * 5;
    }
    else if(iunits <= 200)
    {
        fbill = (100*5) + (iunits - 100) * 7;
    }
    else
    {
        fbill =(100*5) + (100*7) + (iunits - 200)* 10;
    }

    if(iunits >=0)
    {
        printf("bill = %.2f",fbill);
    }

}
int main()
{
    int iunits = 0;

    printf("enter consumed units :");
    scanf("%d",&iunits);

    calculateelectricitybill(iunits);

    return EXIT_SUCCESS;
}