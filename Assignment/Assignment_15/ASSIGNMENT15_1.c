#include<stdio.h>
#include<stdlib.h>

int main()
{
    char name[30];

    printf("please enter your full name\n");
    scanf("%[^\n]",&name);

    printf("your name is %s",name);

    return EXIT_SUCCESS;
}