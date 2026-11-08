
#include<stdio.h>
#include<stdlib.h>

int counttwo(int ino)
{   
    int idigit = 0;
    int iCnt = 0;

   if (ino < 0)
    {
        ino = -ino;
    }
    
    while (ino != 0)
    {
        idigit = ino % 10;
        if (idigit == 2)
        {
            iCnt ++;
        }
        ino = ino / 10;
    }
    return iCnt;

}
int main()
{
    int ivalue = 0;
    int iret = 0;
   

    printf("enter the number \n");
    scanf("%d",&ivalue);

    
    iret=counttwo(ivalue);

    printf("%d\n",iret);

    return EXIT_SUCCESS;
}