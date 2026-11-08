#include<stdio.h>
#include<stdlib.h>

void pattern(int irow , int icol)
{
    int i = 0;
    int j = 0;
    char startchar ='\0';

    for ( i = 1; i <= irow; i++)
    {
        if (i % 2 != 0)
        {
            startchar= 'A';
        }
        else
        {
            startchar= 'a';
        }

        for ( j = 1; j <= icol; j++)
        {
            printf("%c\t",startchar);
            startchar++;
        }
        printf("\n");
        
        
    }
    
}
int main()
{
    int ivalue1 = 0;
    int ivalue2 = 0;

    printf("enter number of rows and columns :\n");
    scanf("%d %d",&ivalue1 , &ivalue2);

    pattern(ivalue1,ivalue2);

    return EXIT_SUCCESS;
}