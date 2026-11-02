#include<stdio.h>
#include<stdlib.h>

void checknumber(int ivalue)
{

    if(ivalue > 0)
        {
            printf("it is an positive number \n");
        }
    else if(ivalue < 0)
        {
            printf("it is an negative number \n");
        }
    else
        {
            printf("zero");
        }        


}
int main()
{
    int ivalue = 0;

    printf("enter a number \n");
    scanf("%d",&ivalue);

    checknumber(ivalue);

    return EXIT_SUCCESS;

}