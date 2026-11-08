#include<stdio.h>
#include<stdlib.h>

double circlearea(float fradius)
{
    double darea = 0.0;

    darea = 3.14 * fradius * fradius;

    return darea;
}


int main()
{
    float fvalue = 0.0;
    double dret = 0.0;

    printf("enter the radius \n");
    scanf("%f",&fvalue);

    dret=circlearea(fvalue);

    printf("area is : %lf\n",dret);

    return EXIT_SUCCESS;
}