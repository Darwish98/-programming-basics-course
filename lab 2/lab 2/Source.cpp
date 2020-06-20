#include <math.h>
#include <stdio.h>

/*
fabs(x) ger absolutbelopp av x
fmax(x,y) returns the maximum of x and y
fmin(x,y) returns the minimum of x and y
sqrt(x) returns squarroot of x
pow(x,y) returns x power y x^y
*/

/*
int main()
{
	int x, y, z, Q;
	printf("Type two numbers:");
	scanf("%d %d", &x, &y);
	z = fmax(x, y);
	Q = fmin(x, y);
	printf("The maximum of %d and %d is:%d\n", x, y,z);
	printf("The minimum of %d and %d is:%d\n", x, y,Q);
}
*/


int main()
{
	int x, y, z, Q;
	printf("Type two numbers:");
	scanf("%d %d", &x, &y);
	Q = fabs(x - y);
	printf("The absolute value of %d-%d is %d\n", x, y, Q);
	
}



/*
int main()
{
	int x, z;
	printf("Type two numbers:");
	scanf("%d", &x);
	z = pow(x, 2) + (2 * x) + 1;
	printf("pow(%d, 2) + (2 * %d) + 1=%d",x,x,z);
}
*/

/*
int main()
{
	float x, y,z;
	printf("Type two numbers:");
	scanf("%f %f", &x,&y);
	z = ((x + y) / 3) - 1;
	printf("(%f + %f) / 3) - 1=%f", x, y, z);
}

*/

/*
int main()
{
	float x, y, z;
	printf("Type two numbers:");
	scanf("%f %f", &x, &y);
	z = sqrt(((pow(x + 1, 2)) / 3) + ((pow(y - 1, 2)) / 4));
	printf("sqrt(((pow(%f + 1, 2)) / 3) + ((pow(%f - 1, 2)) / 4))=%f", x, y, z);
}
*/

/*
int main()
{
	int x, y, z;
	printf("Type two numbers:");
	scanf("%d %d", &x, &y);
	z = 1/(x-y);
	printf("1/(%d-%d)=%d", x, y, z);
} 
*/
/*The program crashes*/


