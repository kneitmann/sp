#include <stdio.h>

int main()
{
	unsigned int number, counter, bit, firstBit = 1;
	printf("Bitte geben Sie eine Zahl zwischen 0 und 255 ein.\n");
	scanf("%ud", &number);
	printf("\nBitte geben Sie die zu testende Bitstelle ein.\n");
	printf("Null ist die erste Stelle, 7 ist die letzte.\n");
	scanf("%ud", &bit);
	if((number <= 255) && (bit <= 7))
		{
		for(counter = 0; counter < bit; counter++)
		{
			firstBit = firstBit << 1;
		}
		
		if((firstBit & number) != 0)
		{
			printf("\nDas Bit ist gesetzt.\n");
		}
		else
		{
			printf("\nDas Bit ist nicht gesetzt, aber wurde jetzt gesetzt.\n");
			number = firstBit | number;
		}
		printf("Die Zahl lautet: %u\n", number);
		
		firstBit = ~firstBit;
		number = firstBit & number;
		printf("Das Bit wurde auf 0 gesetzt und die Zahl lautet nun: %u\n", number);
	}
	else
	{
		printf("\n\n Die Zahl oder die Bitstelle wurden zu hoch gesetzt.\n");
	}
	return 0;
}