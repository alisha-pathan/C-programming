#include<stdio.h>
int main()
{
	printf("hello world");
	printf("\n how are you?");
	
	//variable declaration
	//int char
	
	int num1=1,num2=20,num3=30,num4=52,num5=56;
	char ch1='a'; float f1=2.36;
	printf("\n number = %d",num1);
	printf("\n float number = %.2f",f1);
	printf("\n character = %c",ch1);
	
	//sum function calling
	int ans; num1 =45, num2 =25;
	ans = add(num1,num2); 
	printf("\n %d",ans);
	// substraction function calling
	float answer; float n3 = 2.35, n4 = 63.25;
	answer = sub(n3, n4);
	printf("%f",answer);

}
// sum function building
int add(int num1, int num2);
int add(int num1, int num2)
{
	int ans; 
	ans= num1 + num2 ;
	return ans;
}

//float function building
float sub(float n3, float n4);
float sub(float n3, float n4){
	float answer;
	answer = n3 - n4;
	return answer;
}

