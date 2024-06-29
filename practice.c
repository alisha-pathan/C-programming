/*#include <stdio.h>

int main() {
    int num1 = 100, num2 = 7;
    int sum = num1 + num2;
    int sub = num1 - num2;
    int mul = num1 * num2;
    int div = num1 / num2;
    int mod = num1 % num2;
    float cgpa = 8.23, percentage = 95.0;
    char name[7] = "shahil";
    char course[5] = "B.E.";

    printf("This is my first code\n");
    printf("Hello, \ntoday our coding in C language has started.\tI have made two friends.\n");
    printf("First number is: %d\n", num1);
    printf("Second number is: %d\n", num2);
    printf("New name: %s\n", name);
    printf("Course: %s\n", course);
    printf("CGPA: %.2f\n", cgpa);
    printf("Percentage: %.2f\n", percentage);
    printf("Sum: %d\n", sum);
    printf("Subtraction: %d\n", sub);
    printf("Multiplication: %d\n", mul);
    printf("Division: %d\n", div);
    printf("Modulus: %d\n", mod);

    return 0;
    */
#include <stdio.h>
void main(){
	int n1,n2,n3;
	printf("Enter a first number:");
	scanf("%d",&n1);
	printf("Enter a second number:");
	scanf("%d",&n2);
	printf("Enter a third number:");
	scanf("%d",&n3);
	
	if(n1 > n2 && n1 > n3 )
	{
		printf("n1 is greatest");
	}
	else
	{
		printf (" n1 is not the greatest");
	}
	
}


