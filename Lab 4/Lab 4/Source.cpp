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


	if (((x > minX&& x < maxX && y == minY || y == maxY) || (y > minY&& y < maxY && x == minX || x == maxX) || (x == minX && y == minY) || (x == minX && y == maxY) || (x == maxX && y == minY) || (x == maxX && y == maxY)))
	{
		return 3;
	}



	else
	{
		return 0;
	}
}


int test1()
{
	int test1 =thow_at_rectangle(0, 0, 0, 0, 6, 6);
	int expected1 =3;
	
	if (test1==expected1)
	{
		printf("test 1 succeeded!\n");
		return 1;
	}
	else {
		printf("test 1 failed!\n");
	}
	
}

int test2()
{
	int test2 = thow_at_rectangle(4, 4, 0, 0, 6, 6);
	const int expected2 =5;

	if (test2 == expected2)
	{
		printf("test 2 succeeded!\n");
		return 1;
	}
	else {
		printf("test 2 failed!\n");
		
	}

}

int test3()
{
	int test3= thow_at_rectangle(-1,-1, 1, 1, 6, 6);
	const int expected3 = 0;

	if (test3 == expected3)
	{
		printf("test 3 succeeded!\n");
		return 1;
	}
	else
	{
		printf("test 3 failed!\n");
		
	}

}


int main()
{
	return test1() and test2() and test3();

}













