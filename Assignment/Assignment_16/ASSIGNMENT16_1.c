#include<stdio.h>
#include<stdlib.h>

void pattern(int irow , int icol)
{
    int i = 0;
    int j = 0;

    for ( i = 1; i <= irow; i++)
    {
        char ch = 'A';

        for ( j = 1; j <= icol; j++)
        {
            printf("%c\t",ch);
            ch++;
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

    pattern(ivalue1 , ivalue2);

    return EXIT_SUCCESS;

}