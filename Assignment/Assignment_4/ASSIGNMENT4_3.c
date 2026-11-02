#include<stdio.h>
#include<stdlib.h>

void greatestnumber(int ino1 , int ino2)
{
    if (ino1 > ino2)
    {
        printf("%d is greatest",ino1);
    }
    else if (ino2 > ino1)
    {
        printf("%d is greatest", ino2);
    }
    else
    {
        printf(" number is equal");
    }
}

int main()
{
    int ivalue1 = 0;
    int ivalue2 = 0;

    printf("enter a number \n");
    scanf("%d %d",&ivalue1 , &ivalue2);

    greatestnumber(ivalue1 , ivalue2);

    return EXIT_SUCCESS; 

    
}