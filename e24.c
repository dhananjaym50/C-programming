// Accept any two numbers, if the first number is greater than second then print the difference of these two numbers, otherwise print their sum. Write this using ternary operator.
#include<stdio.h>
int main(void)
{
	int a,b,c;
	printf("Enter any two number a and b: ");
	scanf("%d %d", &a,&b);
	a>b? printf("Diffrence=%d\n",a-b):printf("Sum = %d\n",a+b);
	return 0;
}
