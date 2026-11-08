#include<stdio.h>
#include<stdlib.h>

int nonfact(int ino)
{
	int iCnt = 0;

	if(ino < 0)
	{
		ino = -ino;
	}

	for(iCnt = 1;iCnt < ino; iCnt++)
	{
		if(ino % iCnt != 0)
		{
			printf("%d\t",iCnt);		
		}
	}
		return iCnt;

} 

int main()
{
	int ivalue = 0;

	printf("enter the number\n");
	scanf("%d",&ivalue);

	nonfact(ivalue);	
	
	return EXIT_SUCCESS;
}
