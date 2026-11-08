#include<stdio.h>
#include<stdlib.h>

void factrev(int ino)
{
	int imult = 1;
	int iCnt = 0;

	if(ino < 0)
	{
		ino = -ino;
	}

	for(iCnt = ino / 2;iCnt >= 1; iCnt--)
	{
		if((ino % iCnt)== 0)
		{
			printf("%d\t", iCnt);
		}	
	}
		printf("\n");

} 

int main()
{
	int ivalue = 0;
	
	printf("enter the number\n");
	scanf("%d",&ivalue);

	factrev(ivalue);	
	
	return EXIT_SUCCESS;
}
