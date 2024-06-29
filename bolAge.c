#include <stdio.h>
int main()
{
	int myAge,voteAge=18;
	printf("\nEnter Your age to check if you are qualified for vote or not:");
	scanf("%d",&myAge);
	
	printf("%d",myAge >=voteAge);
	
}
