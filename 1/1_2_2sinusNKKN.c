#include <stdio.h>
#include <math.h>

int main()
{	
	const double Pi = 3.141592653;
	int square = 10;
	double sinus;
	int i;
	
	printf("\nSinus-Funktionswerte mit For-Schleife\n\n");
	
	for(i = 0; i < 37; i++)
	{
		sinus = sin((i * square) * Pi / 180);
		printf("Winkel %d Grad => Sinus-Funktionswert: %6.3f\n", (i * square) ,sinus);
	}
	
	printf("\nSinus-Funktionswerte mit While-Schleife\n\n");
	square = square - 10;
	
	while(square < 370)
	{
		sinus = sin(square * Pi / 180);
		printf("Winkel %d Grad => Sinus-Funktionswert: %6.3f\n", square, sinus);
		square = square + 10;
	}

	return 0;
}