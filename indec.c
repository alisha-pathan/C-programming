#include <stdio.h>
void main()
{
	int a;
	printf("\nEnter any number to do pre increment/decrement & post decrement/decrement:");
	scanf("%d",&a);
	printf("\n\tA NUMBER YOU ENTER : %d",a);printf("\n");
	++a;
	printf("\n\tA number after Pre-increment : %d",a);
	a++;
	printf("\n\tA number after post-increment : %d",a);
	--a;
	printf("\n\tA number after pre-decrement:%d",a);
	a--;
	printf("\n\tA number after post-decrement:%d",a);
	
/*	int a,b,c,d;
	printf("\n enter integer to pre increment:");
	scanf("%d",&a);
	printf("\tAfter pre increment: %d",++a);
	printf("\n");
	
	printf("\n enter integer to post increment:");
	scanf("%d",&b);
	b++;
	printf("\t after post increment:%d", b);
	printf("\n");
	
	printf("\nenter integer to pre decrement:");
	scanf("%d",&c);
	printf("\t after post increment: %d",--c);
	printf("\n");
	
	printf("\n enter integer to post increment:");
	scanf("%d",&d);
	d--;
	printf("\t after post decrement:%d", d);
	*/
	
}
