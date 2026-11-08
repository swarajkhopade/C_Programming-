#include<stdio.h>
#include<stdlib.h>


int KMtometer(int ino)
{
    int ians = 0;

    ians = ino * 1000;

    return ians;

}
int main()
{
    int ivalue = 0;
    int iret = 0;

    printf("enter the number \n");
    scanf("%d",&ivalue);

    iret=KMtometer(ivalue);

    printf("distance in meter is : %d\n",iret);

    return EXIT_SUCCESS;
}