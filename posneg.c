#include<stdio.h>
int main()
{
	int a;
	printf("Enter any number to find its positie or negative:");
	scanf("%d",&a);
	if(a == 0)
	{
		printf("a is zero");
	}
	else if (a > 0)
	{
		printf("%d is positive.",a);
	}
	else{
		printf("%d is negative.",a);
	}
}
