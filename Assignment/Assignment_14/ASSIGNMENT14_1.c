#include<stdio.h>
#include<stdlib.h>

int multfact(int ino)
{
	int imult = 1;
	int iCnt = 0;

	if(ino < 0)
	{
		ino = -ino;
	}

	for(iCnt = 1;iCnt <= (ino / 2); iCnt++)
	{
		if((ino % iCnt)== 0)
		{
			imult = imult * iCnt;
		}

	}
		return imult;

} 

int main()
{
	int ivalue = 0;
	int iret = 0;

	printf("enter the number\n");
	scanf("%d",&ivalue);

	iret=multfact(ivalue);	
	
	printf("%d",iret);

	return EXIT_SUCCESS;
}
