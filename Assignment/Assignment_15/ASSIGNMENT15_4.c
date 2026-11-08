#include<stdio.h>
#include<stdlib.h>


int multply(int ino1 , int ino2 , int ino3)
{
    int isum = 0;

    isum = ino1 * ino2 * ino3;
    
    return isum;
}
int main()
{
    int ivalue1 = 0;
    int ivalue2 = 0;
    int ivalue3 = 0;
    int iret = 0;

    printf("please enter three numbers:\n");
    scanf("%d %d %d",&ivalue1 , &ivalue2 ,&ivalue3);

    iret=multply(ivalue1 , ivalue2 , ivalue3);

    printf("%d",iret);

    return EXIT_SUCCESS;
}