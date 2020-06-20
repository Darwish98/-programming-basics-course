#include <stdio.h>
#include <math.h>


int main()
{
	for (;;) {
		float n, x, y, sq, p, q, b,Avg;
		printf("1. Sum\n");
		printf("2. Sub\n");
		printf("3. Mul\n");
		printf("4. Div\n");
		printf("5. Sqr\n");
		printf("6. Pow\n");
		printf("7. Avg\n");
		printf("8. Exit\n");
		printf("Enter an option:");
		scanf("%f", &n);

		if (n == 1|| n == 2 || n == 3 || n == 4 || n == 6)
		{
			printf("Type two numbers:");
			scanf("%f %f", &x, &y);


			if (n == 1)
			{
				printf("%f + %f = %f\n\n", x, y, x + y);
			}


			if (n == 2)
			{
				printf("%f - %f = %f\n\n", x, y, x - y);
			}

			if (n == 3)
			{
				printf("%f * %f = %f\n\n", x, y, x * y);
			}

			if (n == 4)
			{
				printf("%f / %f = %f\n\n", x, y, x / y);
			}
			if (n == 6)
			{
				p = pow(x, y);
				printf("(%f)^%f = %f\n\n", x, y, p);

			}


		}


		if (n == 5)
		{
			printf("Type One number:");
			scanf("%f", &x);
			sq = sqrt(x);
			printf("Squar root of %f is: %f\n\n", x, sq);
		}

		if (n == 7)

		{
			int i;/*i is b but integer*/
			float sum = 0, z;
			printf("Enter the amount of numbers:");
			scanf("%f", &b);  /*amount of elemnts*/
			printf("Enter the numbers to calculate the average:");
			for (i = 0; i < b; i++)
			{
				scanf("%f",&z);
				sum += z;
			}
			printf("The Average: %f \n", sum / b);
			

		}

		if (n == 8)
		{
			return 0;
		}
	}

}

