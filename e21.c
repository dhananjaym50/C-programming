// Write a program that accepts the radius of a circle and calculates the area and perimeter of that circle
#include<stdio.h>
int main(void)
{
	int r;
	float area, perimeter;
	printf("Enter the radius of circle: ");
	scanf("%d", &r);
	area = (22/7)*r*r;
	perimeter = 2*(22/7)*r;
	printf("Area and Perimeter of Circle of radius %d unit is %.2f unit square and %.2f unit ", r, area, perimeter);
	return 0;
}
