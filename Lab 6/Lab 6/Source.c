#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "info.h"

struct student *s=NULL;
struct stat *w=NULL;
int n = 0;



void add()
{
	
	if (n == 0)
	{
		s = (struct student*)malloc(sizeof(struct student));
	}
	else 
	{
		s = (struct student*)realloc(s,sizeof(struct student) * (n + 1));
	}

	printf("\nEnter personal number:");
	scanf("%ld", &s[n].PersonalNumber);
	getchar();
	printf("\nEnter Name:");
	fgets(s[n].Name,49,stdin);
	s[n].Name[strlen(s[n].Name) - 1] = '\0';
	printf("\nEnter gender(m or f):");
	fgets(s[n].Gender, 5, stdin);
	s[n].Gender[strlen(s[n].Gender) - 1] = '\0';
	printf("\nEnter study program:");
	fgets(s[n].StudyProgram, 99, stdin);
	s[n].StudyProgram[strlen(s[n].StudyProgram) - 1] = '\0';
	printf("\nEnter age:");
	scanf("%d", &s[n].Age);
	getchar();
	printf("\nEnter Email:");
	fgets(s[n].Email, 49, stdin);
	s[n].Email[strlen(s[n].Email) - 1] = '\0';
	n++;

}



void  modify()
{
	long int p;
	int i;

	printf("Enter personal number:");
	scanf("%ld", &p);
	getchar();

	for (i = 0;i < n;i++)
	{

		if (s[i].PersonalNumber == p)
		{
			
			printf("\nEnter new Name :");
			fgets(s[i].Name, 49, stdin);
			s[i].Name[strlen(s[i].Name) - 1] = '\0';
			printf("\nEnter new gender:");
			fgets(s[i].Gender, 5, stdin);
			s[i].Gender[strlen(s[i].Gender) - 1] = '\0';
			printf("\nEnter new study program:");
			fgets(s[i].StudyProgram, 99, stdin);
			s[i].StudyProgram[strlen(s[i].StudyProgram) - 1] = '\0';
			printf("\nEnter new age:");
			scanf("%d", &s[i].Age);
			getchar();
			printf("\nEnter new Email:");
			fgets(s[i].Email, 49, stdin);
			s[i].Email[strlen(s[i].Email) - 1] = '\0';
			return;
		}


	}
	printf("This person dose not exist\n");
}

void Delete()
{
	long int p;
	int i, j;

	printf("Enter personal number:");
	scanf("%ld", &p);
	for (i = 0;i < n;i++)
	{
		if (s[i].PersonalNumber == p)
		{
			for (j = i;j < (n - 1);j++)
			{
				s[j] = s[j + 1];
			
			}
			s = (struct student*)realloc(s, sizeof(struct student) * (n - 1));
			n--;
			return;
		}

	}
	printf("This person dose not exist\n");

}





void  Search()
{
	long int p;
	int i, op;
	printf("1. Personal number\n");
	printf("2. Name\n");
	printf("3. Study program\n");
	printf("4. Statistics\n");
	printf("Choose an option:");
	scanf("%d", &op);
	printf("\n");
	if (op == 1)
	{
		printf("Enter personal number:");
		scanf("%ld", &p);
		for (i = 0;i < n;i++)
		{

			if (s[i].PersonalNumber == p)
			{
				printf("\n------------------------------\n");
				printf("| PersonalNumber: %ld\n", s[i].PersonalNumber);
				printf("| Name: %s\n", s[i].Name);
				printf("| Gender: %s\n", s[i].Gender);
				printf("| StudyProgram: %s\n", s[i].StudyProgram);
				printf("| Age: %d\n", s[i].Age);
				printf("| Email: %s\n", s[i].Email);
				printf("------------------------------\n");
			}
		}
	}

	if (op == 2 )
	{
		int i;
		char name[25];
		printf("Enter Name:");
		scanf("%s", name);

		for (i = 0;i < n;i++)
		{

			if (strcmp(s[i].Name,name)==0)
			{
				printf("------------------------------\n");
				printf("| PersonalNumber: %ld\n", s[i].PersonalNumber);
				printf("| Name: %s\n", s[i].Name);
				printf("| Gender: %s\n", s[i].Gender);
				printf("| StudyProgram: %s\n", s[i].StudyProgram);
				printf("| Age: %d\n", s[i].Age);
				printf("| Email: %s\n", s[i].Email);
				printf("------------------------------\n");
			}
		}
	}
	if (op == 3)
	{
		int i;
		char studypro[50];
		printf("Enter Study program:");
		scanf("%s", studypro);

		for (i = 0;i < n;i++)
		{

			if (strcmp(s[i].StudyProgram, studypro) == 0)
			{
				printf("------------------------------\n");
				printf("| PersonalNumber: %ld\n", s[i].PersonalNumber);
				printf("| Name: %s\n", s[i].Name);
				printf("| Gender: %s\n", s[i].Gender);
				printf("| StudyProgram: %s\n", s[i].StudyProgram);
				printf("| Age: %d\n", s[i].Age);
				printf("| Email: %s\n", s[i].Email);
				printf("------------------------------\n");
			}
		}
	}
	if (op == 4)
	{
		int students = 0;
		int students1 = 0;
		for (i = 0;i < n;i++)
		{
			students++;

		}

		printf("Amount of student: %d\n", students);


		int male = 0;
		int female = 0;
		int male1 = 0;
		int female1 = 0;
		for (i = 0;i < n;i++)
		{
			if (strcmp(s[i].Gender, "m") == 0)
			{
				male++;

			}
		}

		printf("Male students: %d\n", male);

		for (i = 0;i < n;i++)
		{
			if (strcmp(s[i].Gender, "f") == 0)
			{
				female++;
			}
		}
		printf("Female student: %d\n", female);

		int avg = 0;
		int average = 0;
		for (i = 0;i < n;i++)
		{
			if (s[i].Age)
			{
				avg += s[i].Age;
			}
		}
		average = (avg / students);
		printf("Average age: %d\n", average);













		int j;
		int avg1 = 0;
		int average1 = 0;
		int k = 0;
	
		for (i = 0;i < n;i++)
		{
			int flag = 0;
			
			for (j = 0;j < k;j++)
			{
				if (strcmp(s[i].StudyProgram, w[j].StudyProgramm) == 0)
				{
					w[j].n_st++;

					if (strcmp(s[i].Gender, "m") == 0)
					{
						w[j].male++;
					}
					if (strcmp(s[i].Gender, "f") == 0)
					{
						w[j].female++;
					}
					w[j].avg_age = (w[j].avg_age+ s[i].Age)/w[j].n_st;
					flag = 1;
					break;
				}
				
				
				
				
				

			}


			if (flag == 0)
			{
				if (k == 0)
				{
					w = (struct stat*)malloc(sizeof(struct stat));
					k++;
					w[0].n_st = 1;

					if (strcmp(s[i].Gender, "m") == 0)
					{
						w[0].male = 1;
						w[0].female = 0;
					}
					if (strcmp(s[i].Gender, "f") == 0)
					{
						w[0].female = 1;
						w[0].male = 0;
						
					}
					strcpy(w[0].StudyProgramm, s[i].StudyProgram);
					w[0].avg_age =  s[i].Age ;
					


				}
				else
				{
					k++;
					w = (struct stat*)realloc(w, sizeof(struct stat) * k);
					
					w[k - 1].n_st = 1;

					if (strcmp(s[i].Gender, "m") == 0)
					{
						w[k - 1].male = 1;
						w[k - 1].female = 0;
					}
					if (strcmp(s[i].Gender, "f") == 0)
					{
						w[k - 1].female = 1;
						w[k - 1].male = 0;
					}
		
					strcpy(w[k-1].StudyProgramm, s[i].StudyProgram);
					w[k - 1].avg_age = s[i].Age;


				}
				


			}
			
		



		}
		for (j = 0;j < k;j++)
		{
			printf("\n----------------------\n");
			printf("Study program: %s\n", w[j].StudyProgramm);
			printf("Amount of student: %d\n", w[j].n_st);
			printf("Male students: %d\n", w[j].male);
			printf("Female student: %d\n", w[j].female);
			printf("Average age: %lf\n", w[j].avg_age);
		}

		
		
	}
}

void info()
{
	int i;
	for (i = 0;i < n;i++)
	{
		printf("------------------------------\n");
		printf("| PersonalNumber: %ld\n", s[i].PersonalNumber);
		printf("| Name: %s\n", s[i].Name);
		printf("| Gender: %s\n", s[i].Gender);
		printf("| StudyProgram: %s\n", s[i].StudyProgram);
		printf("| Age: %d\n", s[i].Age);
		printf("| Email: %s\n", s[i].Email);
		printf("------------------------------\n");


	}


}





void Save()
{
	char filena[20];
	printf("Enter File name:");
	scanf("%s",filena);
	FILE* out = fopen(filena, "wb");
	fwrite(s, sizeof(struct student), n, out);
	fclose(out);
}
void Load()
{
	int size;
	char filena[20];
	printf("Enter File name:");

	scanf("%s", filena);
	FILE* in = fopen(filena, "rb");
	if (in == NULL)
	{
		printf("The file dose not exist!\n");

	}
	
	fseek(in,0, SEEK_END);
	size = (ftell(in) / sizeof(struct student));
	rewind(in);
	n = size;
	s = (struct student*)malloc(size * sizeof(struct student));
	fread(s, sizeof(struct student), size, in);
	fclose(in);
	

	/*
	SEEK_SET
	SEEK_END
	SEEK_CUR
	*/


}

void exit()
{
	int op;
	printf("Do you want to save the database?\n");
	printf("1. Save and Exit \n");
	printf("2. Exit\n");
	printf("Choose an option:");
	scanf("%d", &op);
	if (op == 1)
	{
		Save();	
		
	}
	return;

}


int main()
{
	for (;;)
	{
		
		int option;
		printf("-------------------------\n");
		printf("| 1. Add                 | \n");
		printf("| 2. Modify              | \n");
		printf("| 3. Delete              | \n");
		printf("| 4. Search              | \n");
		printf("| 5. Save                | \n");
		printf("| 6. Load                | \n");
		printf("| 7. Exit                | \n");
		printf("| 8. info                | \n");
		printf("|-------------------------\n");
		printf("| Choose an option:");
		scanf("%d", &option);
		if (option == 1)
		{
			add();
		}
		if (option == 2)
		{
			modify();
		}
		if (option == 3)
		{
			Delete();
		}
		if (option == 4)
		{
			Search();
		}
		if (option == 5)
		{
			Save();
		}
		if (option == 6)
		{
			Load();
		}
		if (option == 7)
		{
			exit();
			free(s);
			return 0;
		}
		if (option == 8)
		{
			info();
		}
		
	}
	


}

