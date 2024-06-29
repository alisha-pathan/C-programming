#include <stdio.h>
int main()
{
	int n1,n2,n3;
	float f1,f2,f3;
	char ch1,ch2,ch3;
	//integer
	printf("\nPlease enter any integer number:");
	printf("\nEnter any number:");
	scanf(" %d",&n1);
	printf("\nEnter any number:");
	scanf(" %d",&n2);
	printf("\nEnter any number:");
	scanf(" %d",&n3);
	
	printf("\n%d",n1);
	printf("\n%d",n2);
	printf("\n%d",n3);
	
	//float
	printf("\nPlease enter any float number:");
	printf("\nEnter any number:");
	scanf("%f",&f1);
	printf("\nEnter any number:");
	scanf("%f",&f2);
	printf("\nEnter any number:");
	scanf("%f",&f3);
	
	
	printf("\n%.2f",f1);
	printf("\n%.3f",f2);
	printf("\n%.5f",f3);
	
	//character
	printf("\nPlease enter any single character:");
	printf("\nEnter any character:");
	scanf(" %c",&ch1);
	printf("\nEnter any character:");
	scanf(" %c",&ch2);
	printf("\nEnter any character:");
	scanf(" %c",&ch3);
	
	
	printf("\n%c",ch1);
	printf("\n%c",ch2);
	printf("\n%c",ch3);

}
