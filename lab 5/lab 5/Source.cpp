
#include <stdio.h>
#include <math.h>
#include <cstring>
#include <cstdio>
#include <cctype>
#include <string>
#include <ctype.h>
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include <stdlib.h>
#include <regex>
#include<iostream>

char seperate(char* x)
{
	char* p;

	for (p = x; *p != NULL; p++)
	{
		if (*p == ' ')
		{
			*p = '\n';
		}
	}
	printf("%s\n", x);
	return 0;
}

char tolower(char* x)
{
	char* p;

	for (p = x; *p != NULL; p++)
	{
		if (*p >= 'A' && *p <= 'Z')
		{
			*p = *p + 32;
		}
	}
	printf("%s\n", x);
	return 0;
}


char toUpper(char* x)
{
	char* p;

	for (p = x; *p != NULL; p++)
	{
		if (*p >= 'a' && *p <= 'z')
		{
			*p = *p - 32;
		}
	}
	printf("%s\n", x);
	return 0;
}


char remove(char* x, char z)
{
	char* p, res[101];
	int j = 0;
	for (p = x; *p != NULL; p++)
	{
		if (*p != z)
		{
			*(res + j) =*p;
			j++;
		}
	}
	*(res + j) = '\0';
	printf("%s\n",res);
	return 0;
}



char addchart(char* x, char z)
{
	char* p,res[100];
	int j = 0;
	

	for (p = x; *p != NULL; p++)
	{
		if ((*p == ' ' && *(p - 1) != ' ') || (*p == '\n'))
		{
			*(res + j) = z;
			j++;
			*(res + j) =' ';
			j++;

		}  
		*(res + j) = *p;
		j++;
		
	}
	*(res + j) = '\0';
	printf("%s\n",res);
	return 0;
}
char replace(char* x, char z,char y)
{
	char* p;


	for (p = x; *p != NULL; p++)
	{
		if (*p == z)
			*p = y;

	}

	printf("%s\n", x);
	return 0;
}

char statistics(char* x)
{
	int i = 0;
	char* p;
	for (p = x; *p != NULL; p++)
	{
		if ((*p == ' ' && *(p-1)!=' ' )|| (*p !=' ' && *(p + 1) == '\0')||(*(p - 1) == '\0' && *p != ' ' && *(p + 1) == '\0'))
		{
			i++;
		}
		
	}
	printf("Number of words: %d\n", i);
	
	int j = 0;
	for (p = x; *p != NULL; p++)
	{
		j++;
	
	}
	printf("Number of characters: %d\n", j);
	

	int z = 0,k=0;
	char stat[128] = { 0 };
	for (p = x; *p != NULL; p++)
	{
		stat[*p]++;

	}
	for (k=32;k<128;k++)
	{
		if (stat[k] != 0) 
		{
			printf("Character:%c stats:%d\n", k, stat[k]);
			
		}
		
	}
	return 0;
	
	
	
	


}






int main()
{
	for (;;)
	{
		int option;
		printf("---------------------------------------------------------------------");
		printf("\n1. Split text\n2. Upper case to lower case\n3. Lower case to upper case\n4. Remove a character\n5. Add a character\n6. Replace a character\n7. Statistics\n8. Exit\n");
		printf("Enter an option:");
		scanf("%d", &option);
		getchar();
		if (option == 1 || option == 2 || option == 3 || option == 7)
		{
			char q[101];
			fgets(q, 100, stdin);
			q[strlen(q) - 1] = '\0';


			if (option == 1)
			{
				seperate(q);
			}
			if (option == 2)
			{
				tolower(q);
			}
			if (option == 3)
			{
				toUpper(q);
			}
			if (option == 7)
			{
				statistics(q);
			}

		}
		if (option == 4)
		{
			char q[101], z;
			fgets(q, 100, stdin);
			z = getchar();
			remove(q, z);

		}
		if (option == 5)
		{
			char a[101], s;
			fgets(a, 100, stdin);
			s = getchar();
			getchar();
			addchart(a, s);
		}
		if (option == 6)
		{
			char h[101], z, k;
			fgets(h, 100, stdin);
			z = getchar();
			getchar();
			k = getchar();
			getchar();
			replace(h, z, k);

		}

		if (option == 8)
		{
			return 0;
		}
	}
	
}






