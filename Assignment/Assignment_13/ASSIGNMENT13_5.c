#include<stdio.h>
#include<stdlib.h>

int countdiff(int ino)
{
    int idigit = 0;
    int isumeven = 0;
    int isumodd = 0;

    if (ino < 0)
    {
        ino = -ino;
    }

    while (ino > 0)
    {
        idigit = ino % 10;        
        if (idigit % 2 == 0)
        {
            isumeven = isumeven + idigit;
        }
        else
        {
            isumodd = isumodd + idigit;
        }
        ino = ino / 10;
    }
    return isumeven - isumodd;
    
}
int main()
{
    int ivalue = 0;
    int iret = 0;

    printf("enter the number\n");
    scanf("%d",&ivalue);

    iret = countdiff(ivalue);

    printf("%d\n",iret);

    return EXIT_SUCCESS;
}