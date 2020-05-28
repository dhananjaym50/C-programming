// WOP that accepts marks in five subjects and calculates the total percentage marks.
#include<stdio.h>
int main(void)
{
	int a1,a2,a3,a4,a5;
	float percentage;
	printf("Enter marks of five subjests: ");
	scanf("%d%d%d%d%d",&a1,&a2,&a3,&a4,&a5);
	percentage = (float)(a1+a2+a3+a4+a5)/5;
	printf("Percentage = %f", percentage);
	return 0;
}
