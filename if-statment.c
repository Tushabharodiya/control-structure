#include<stdio.h>
main()
{
	int a,b;
	
	printf("Enter Value Of A=");
	scanf("%d",&a);
	
	printf("Enter Value Of B=");
	scanf("%d",&b);
	
	if(a<b)
	{
		printf("%d is minimum",a);
	}
	else
	{
		printf("%d is minimum",b);
	}
}