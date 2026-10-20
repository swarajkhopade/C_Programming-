#include<stdio.h>
#include<stdlib.h>


float divide(int ino1, int ino2)
{
    int ians =0;

    if(ino2 == 0)
    {
        return -1;
    }

    ians = ino1/ ino2;

    return ians;


}

int main()
{
    int ivalue1 = 15, ivalue2 = 5;
    int iret = 0;

    iret =divide(ivalue1,ivalue2);

    printf("division is  %d",iret);

    return EXIT_SUCCESS;
}