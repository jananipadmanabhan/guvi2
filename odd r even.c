#include<stdio.h>
int main()
{
	int num;
	printf("enter a number to check");
	scanf("%d",&num);
	if(num%2==0)
	{
		printf("\nthe number is even");
	}
	else
	{
		printf("\nthe number is odd");
	}
	return 0;
}
