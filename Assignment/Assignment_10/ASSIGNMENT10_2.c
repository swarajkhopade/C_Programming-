#include<stdio.h>
#include<stdlib.h>

double rectarea(float fwidth, float fheight)
{
    double rectarea = 0;
    rectarea = (double)fwidth * (double)fheight;
    return rectarea;

}

int main()
{   
    float fvalue1 = 0.0f;
    float fvalue2 = 0.0f;
    double dret = 0.0;

    printf("enter width\n");
    scanf("%f",&fvalue1);

    printf("enter height\n");
    scanf("%f",&fvalue2);

    dret=rectarea(fvalue1,fvalue2);

    printf("area of rectangle : %lf\n",dret);

    return EXIT_SUCCESS;
}