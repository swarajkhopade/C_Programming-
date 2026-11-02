#include<stdio.h>
#include<stdlib.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL checkvowel(char c)
{
    if (c=='a'|| c=='e'|| c=='i'|| c=='o'|| c=='u'||
        c=='A'|| c=='E'|| c=='I'|| c=='O'|| c=='U')
    
            return TRUE;
        else
            return FALSE;
}

int main()
{
    char c;
    printf("enter charater \n");
    scanf("%c",&c);

    if(checkvowel(c)== TRUE)
    {
        printf("it is vowel");
    }
    else
    {
        printf("it is not vowel");
    }

    return EXIT_SUCCESS;
}