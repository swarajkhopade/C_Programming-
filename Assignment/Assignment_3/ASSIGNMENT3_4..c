#include<stdio.h>
#include<stdlib.h>

void displayconvert(char cvalue)
{
    if (cvalue >= 'a' && cvalue <= 'z')
    {
        printf("%c", cvalue -32);
    }
    else if(cvalue >= 'A' && cvalue <= 'Z')
    {
        printf("%c", cvalue -32);
    }
}

int main()
{
    char cvalue = '\0';
    printf("enter character\n");
    scanf("%c",&cvalue);

    displayconvert(cvalue);

    return EXIT_SUCCESS;
}