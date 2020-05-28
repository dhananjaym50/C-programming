/*Write a program that enters temperature in celcius and converts that into fahrenheit*/
#include<stdio.h>
int main(void)
{
	float celsius,fahrenheit;
	printf("Enter temperature in Celcius: ");
	scanf("%f",&celsius);
	fahrenheit =(celsius * 9/5) + 32;
	printf("Temperature = %.2f fahrenheit", fahrenheit);
	return 0;
}
