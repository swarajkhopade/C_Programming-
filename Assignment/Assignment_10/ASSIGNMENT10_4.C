#include<stdio.h>
#include<stdlib.h>


int fhtocs(float ftemp)
{
    double dcelcius = 0.0;
    dcelcius = (ftemp - 32) * (5.0/9.0);
    return dcelcius;
}
int main()
{
    float fvalue = 0.0f;
    double dret = 0.0;

    printf("enter the temprature in fahrenheit \n");
    scanf("%f",&fvalue);

    dret=fhtocs(fvalue);

    printf("temp in celcius is : %lf\n",dret);

    return EXIT_SUCCESS;
}