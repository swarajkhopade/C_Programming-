#include<stdio.h>
#include<stdlib.h>

int countrange(int ino)
{
    int idigit = 0;
    int iCnt = 0;

    if (ino < 0)
    {
        ino = -ino;
    }

    while (ino > 0)
    {
        idigit = ino % 10;        
        if (idigit > 3 && idigit < 7)
        {
            iCnt++;
        }
        ino = ino / 10;
    }
    return iCnt;
    
}
int main()
{
    int ivalue = 0;
    int iret = 0;

    printf("enter the number\n");
    scanf("%d",&ivalue);

    iret = countrange(ivalue);

    printf("%d",iret);

    return EXIT_SUCCESS;
}