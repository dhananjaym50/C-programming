// WOP to accept any number and print the value of remainder after dividing it by 3.
#include<stdio.h>
int main(void)
{
	int num, n, rem;
	printf("Enter a number: ");
	scanf("%d", &num);
	n = num;
	rem = num%3;
	printf("Remainder of the number %d after dividing it by 3 is  %d ", n, rem);
	return 0;
}
