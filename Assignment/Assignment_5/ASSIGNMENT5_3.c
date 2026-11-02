#include<stdio.h>
#include<stdlib.h>

void displaygrade(float fmarks)
{
    if (fmarks < 0.0f || fmarks > 100.0f)
    {
        printf("invalid marks\n");
        return;
    }
    
    if (fmarks >= 90.0f && fmarks <= 100.0f)
    {
        printf("grade is A\n");
    }

    else if (fmarks >= 75.0f && fmarks <=89.0f)
    {
        printf("grade is B\n");
    }

    else if (fmarks >= 60.0f && fmarks <=74.0f)
    {
        printf("grade is C\n");
    }

    else if (fmarks >= 40.0f && fmarks <=59.0f)
    {
        printf("grade is D\n");
    }

    else
    {
        printf("fail\n");
    }
    
}

int main()
{
    float fmarks = 0.0f;
    

    printf("enter a number \n");
    scanf("%f", &fmarks);

    displaygrade(fmarks);

    return EXIT_SUCCESS;