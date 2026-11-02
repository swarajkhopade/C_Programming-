#include<stdio.h>
#include<stdlib.h>

void checktraingle(int iside1 , int iside2 , int iside3)
{
    if (iside1 > 0 && iside2 > 0 && iside3 > 0 &&
        iside1 + iside2 > iside3 &&
        iside1 + iside3 > iside2 &&
        iside2 + iside2 > iside1)
    {
        printf("valid triangle");
    }
    else
    {
        printf("inavlid triangle");
    }

}
int main()
{
     int iside1 = 0, iside2 = 0, iside3 = 0;
    
    printf("enter three sides : ");
    scanf("%d %d %d ",&iside1 , &iside2 , &iside3);

    checktraingle(iside1 , iside2 , iside3);

    return EXIT_SUCCESS;
   
}    