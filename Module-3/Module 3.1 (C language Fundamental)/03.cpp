/*
WAP to find area of circle, rectangle and triangle
*/
#include<Stdio.h>
int main()
{
	int r,area,Height,bredth,length,width;
	r=5;
	area=3.14*r*r;
	printf("Area of circle is :- %d",area);
	Height=2;
	bredth=2;
	area=(Height*bredth)/2;
	printf("\nArea of triangle is :- %d",area);
	length=10;
	width=20;
	area=length*width;
	printf("\nArea of rectangle is :- %d",area);
	return 0;
}
