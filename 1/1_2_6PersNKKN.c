#include <stdio.h>
#define STAFFCOUNT 10	

enum division {MANAGEMENT = 130, DEVELOPMENT = 110, PRDOCUTION = 101, MARKETING = 102, SALES = 101};
struct employee
	{
		char last_name[20];
		char first_name[20];
		unsigned int id;
		enum division department;
		float salary;
		
	};

struct employee company[STAFFCOUNT] = 
{
	{"Koetter", "Nick", 1, MANAGEMENT, 9200.85},
	{"Neitmann", "Karl", 2, DEVELOPMENT, 5400.15},
	{"Herdes", "Nilm", 3, SALES, 13.01},
	{"Arin", "Tremel", 4, MANAGEMENT, 1.01},
};

float average_salary()
{
	int counter, maxEle = 0;
	float avg_sal = 0;
	
	for(counter = 0; counter < STAFFCOUNT; counter++)
	{
		if((company[counter].id) != 0)
		{
			avg_sal = avg_sal + (company[counter].salary);
			maxEle++;
		}
	}
	avg_sal = avg_sal / (float)maxEle;
	return avg_sal;
}

int change_salary()
{
	int counter;
	
	for(counter = 0; counter < STAFFCOUNT; counter++)
	{
		if((company[counter].id) != 0)
		{
			company[counter].salary = company[counter].salary * (float)(0.01 * (float)company[counter].department);
		}
	}
	return 0;
}

int print_employee(struct employee printEmp)
{
	printf("\nMitarbeiter Nachname:\t%s\n", printEmp.last_name);
	printf("Mitarbeiter Vorname:\t%s\n", printEmp.first_name);
	printf("Mitarbeiter Nummer:\t%u\n", printEmp.id);
	printf("Mitarbeiter Abteilung:\t%d\n", printEmp.department);
	printf("Mitarbeiter Gehalt:\t%.2f\n", printEmp.salary);
	return 0;
}

int print_personnel(struct employee company[STAFFCOUNT])
{
	int counter;
	for(counter = 0; counter < STAFFCOUNT; counter++)
	{
		if(company[counter].id != 0)
		{
			print_employee(company[counter]);
		}
	}
	return 0;
}

int main()
{
	float avgSal = average_salary();
	printf("Durchschnittsgehalt: %f\n", avgSal);
	change_salary();
	avgSal = average_salary();
	printf("Durchschnittsgehalt neu: %f\n", avgSal);
	print_personnel(company);
	return 0;
}

