#include <stdio.h>
#include <math.h>
#include <string> 
#include <iostream>


int thow_at_rectangle(double x, double y, double x1, double y1, double x2, double y2) 
{

	int minX, minY, maxX,maxY;
	minX = fmin(x1, x2);
	maxX = fmax(x1, x2);
	minY = fmin(y1, y2);
	maxY = fmax(y1, y2);
	if (x > minX && x<maxX && y>minY&& y < maxY)
	{
		return 5;
	}


	if (((x> minX&& x < maxX && y == minY || y == maxY) || (y > minY&& y < maxY && x == minX || x == maxX) || (x == minX && y == minY) || (x == minX && y == maxY) || (x == maxX && y == minY) || (x == maxX && y == maxY)))
	{
		return 3;
	}


	return 0;
	
}


int test_inside_rectangle()
{
	int test1 = thow_at_rectangle(4, 4, 0, 0, 6, 6);
	int test2 = thow_at_rectangle(-2, -2, -4, -4, 0, 0);
	const int expected1 = 5;

	if (test1 == expected1 && test2 == expected1)
	{
		printf("test 1 & 2 succeeded!\n");
		return 1;
	}
	else {
		printf("test 1 or 2 or both failed!\n");

	}

}

int test_on_rectangle()
{
	int test3 =thow_at_rectangle(0, 0, 0, 0, 6, 6);
	int test4 = thow_at_rectangle(-4, -4, -4, -4, 0, 0);
	const int expected2 =3;

	
	if (test3==expected2 && test4==expected2)
	{
		printf("test 3 & 4 succeeded!\n");
		return 1;
	}
	else {
		printf("test 3 or 4  or both failed!\n");
	}
	
}

int test_outside_rectangle()
{
	int test5= thow_at_rectangle(-1,-1, 1, 1, 6, 6);
	int test6 = thow_at_rectangle(-5,-5,-4,-4,0,0);
	const int expected3 = 0;

	if (test5 == expected3&& test6==expected3)
	{
		printf("test 5 & 6 succeeded!\n");
		return 1;
	}
	else
	{
		printf("test 5 or 6 failed!\n");
		
	}

}


int main()
{
	return test_inside_rectangle() and test_on_rectangle() and test_outside_rectangle();

}























