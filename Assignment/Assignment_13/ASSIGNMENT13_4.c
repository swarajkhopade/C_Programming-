#include<stdio.h>
#include<stdlib.h>

int multdigit(int ino)
{
    int idigit = 0;
    int imult = 1;

    if (ino == 0)
    {
        return 0;
    }
    
    if (ino < 0)
    {
        ino = -ino;
    }

    while (ino > 0)
    {
        idigit = ino % 10;        
        if (idigit != 0)
        {
            imult = imult * idigit;
        }
        ino = ino / 10;
    }
    return imult;
    
}
int main()
{
    int ivalue = 0;
    int iret = 0;

    printf("enter the number\n");
    scanf("%d",&ivalue);

    iret = multdigit(ivalue);

    printf("%d\n",iret);

    return EXIT_SUCCESS;
}