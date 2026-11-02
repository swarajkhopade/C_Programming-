#include<stdio.h>
#include<stdlib.h>

void findgreatest(int ino1 , int ino2, int ino3)
{
    if ((ino1 >= ino2) && (ino1 >= ino3))
    {
        printf("%d is greatest", ino1);
    }
    else if ((ino2 >= ino1) && (ino2 >= ino3))
    {
        printf("%d is greatest",ino2);
    }
    else
    {
        printf("%d is gretest",ino3);
    }

}
int main()
{
    int ivalue1 = 0;
    int ivalue2 = 0;
    int ivalue3 = 0;


    printf("enter a number \n");
    scanf("%d %d %d",&ivalue1 , &ivalue2 , &ivalue3);

    findgreatest(ivalue1,ivalue2,ivalue3);

    return EXIT_SUCCESS;
}