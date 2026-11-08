#include<stdio.h>
#include<stdlib.h>

int dollartoinr(int ino)
{
        int ians = 0;

        ians = ino * 70;

        return ians; 
}

int main()
{
    int ivalue = 0;
    int iret = 0;

    printf("enter the amount in usd :\n");
    scanf("%d",&ivalue);

    iret=dollartoinr(ivalue);

    printf("value in inr is : %d\n",iret);

    return EXIT_SUCCESS;
}