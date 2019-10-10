#include <stdio.h>

int main()
{
	unsigned int input, counter = 0, counterIn = 0;
	
	printf("Bitte die Menge der einzugebenen Sterne:\n");
	scanf("%ud", &input);
	printf("1. Ausgabe:\n\n");
	
	while(counter < input)
	{
		printf("*");
		counter++;
	}
	
	printf("\n\n2. Ausgabe:\n\n");
	
	for(counter = 0; counter <= input; counter++)
	{
		while(counterIn < counter)
		{
			printf("*");
			counterIn++;
		}
		counterIn = 0;
		printf("\n");
	}
	
	printf("\n\n3. Ausgabe:\n\n");
	
	for(counter = 0; counter < input; counter = counter + 2)
	{
		while(counterIn < ((input - counter) / 2))
		{
			printf(" ");
			counterIn++;
		}
		counterIn = 0;
		while(counterIn < counter + 1)
		{
			printf("*");
			counterIn++;
		}
		counterIn = 0;
		if((counter == (input - 2)) && ((input % 2) == 0))
		{
			printf("\nDie Zahl ist gerade und dadurch, ist die gezeigte Pyramide nicht korrekt\n");
		}
		printf("\n");
	}
	
	printf("\n");
		
	return 0;
}