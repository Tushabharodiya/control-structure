#include<stdio.h>
main()
{
	int neutral;
	
	printf("Enter the number=");
	scanf("%d",&neutral);
	
	if(neutral>0)
	{
		printf("Number is not neutral");
	}
	else if(neutral==0)
	{
		printf("Number is neutral");
	}
	else if(neutral<0)
	{
		printf("Number is not neutral");
	}
}