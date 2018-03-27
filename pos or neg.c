#include<stdio.h>
int main()
{
	int pos,neg,num;
	printf("enter a number to check");
	scanf("%d",&num);
	if(num>=0)
	{
		printf("\nthe number is positive");
	}
	else
	{
		printf("\nthe number is negative");
	}
	return 0;
}
