#include<stdio.h>
#include<stdlib.h>

void checkadmission(float fmarks , int iage)
{
    if( iage < 0 && iage < 17)
    {
        if(fmarks < 60 && fmarks > 100)    
        {
        printf("it is invalid");
        }    
    }
    else if(iage >= 17)
        {
            printf("eligible for admission");
        }
    else if(fmarks >= 60)
        {
            printf("eligible for admission");
        }
    else
        {
            printf("not eligible");
        }    
}

int main()
{
    float fmarks = 0.0f;
    int iage = 0;

    printf("enter marks and age :\n");
    scanf(" %f %d", &fmarks , &iage);

    checkadmission(fmarks,iage);

    return EXIT_SUCCESS;
}