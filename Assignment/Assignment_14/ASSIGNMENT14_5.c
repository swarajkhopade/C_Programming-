#include<stdio.h>
#include<stdlib.h>

int factdiff(int ino)
{
	int iCnt = 0;
	int idiff = 0;
	int isum = 0;

		

	if(ino < 0)
	{
		ino = -ino;
	}

	for(iCnt = 1;iCnt <= ino; iCnt++)
	{
		if(ino % iCnt != 0)
		{
			isum = isum + iCnt;
		}		

	}
		return isum;

} 

int main()
{
	int ivalue = 0;
	int iret = 0;

	printf("enter the number\n");
	scanf("%d",&ivalue);

	iret=factdiff(ivalue);
	
	printf("%d",iret);
	
	return EXIT_SUCCESS;
}
