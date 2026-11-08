#include<stdio.h>
#include<stdlib.h>

void pattern(int irow , int icol)
{
    int i = 0;
    int j = 0;

    for ( i = 1; i <= irow; i++)
    {
        
        for ( j = 1; j <= icol; j++)
        {
            if (i == 1 || i == irow || j == 1 || j == icol)
            {
                printf("%d\t",j);
            }
            else
            {
                printf("*\t");
            }
        }
        printf("\n");
    }    
}
int main()
{
    int ivalue1 = 0;
    int ivalue2 = 0;

    printf("enter the rows and columns:\n");
    scanf("%d %d",&ivalue1 , &ivalue2);

    pattern(ivalue1 , ivalue2);

    return EXIT_SUCCESS;
}
