// WOP to accept a number in decimal and print the number in octal and hexadecimal.
#include<stdio.h>
int main(void)
{
	int n;
	printf("Enter a number in decimal: ");
	scanf("%d", &n);
	printf("Octal equivalent of decimal %d = %o\n", n,n);
	printf("Hexadecimal equivalent of decimal %d = %x\n",n,n);
	printf("Hexadecimal equivalent of decimal %d = %X\n",n,n);
	return 0;
}
