#include<stdio.h>
#include<stdlib.h>


double squaremeter(int ino)
{
    double dans = 0.0;

    dans = ino * 0.0929;

    return dans;

}
int main()
{
    int ivalue = 0;
    double dret = 0.0;

    printf("enter area in square feet \n");
    scanf("%d",&ivalue);

    dret=squaremeter(ivalue);

    printf("square feet into square meter is : %lf\n",dret);

    return EXIT_SUCCESS;
}