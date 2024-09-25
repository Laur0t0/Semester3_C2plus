#include <stdio.h>
#include <stdlib.h>
#include "Bruch.h"


/* Konstruktoren */

Bruch::Bruch()
{
	/* initialisiere mit 0 */
	zaehler = 0;
	nenner = 1;
}


Bruch::Bruch(int i)
{
	/* initialisiere mit i 1-tel */
	zaehler = i;
	nenner = 1;
}


Bruch::Bruch(int z, int n)
{
	if (n == 0)
	{
		fprintf(stderr, "Fehler: Nenner 0\n");
		exit(1);
	}
	zaehler = z;
	nenner = n;
}


/* Destruktor */

Bruch::~Bruch()
{
	/* keine Aktion notwendig */
}


/* Methoden */

void Bruch::print()
{
	printf("Zaehler: %d\nNenner: %d\n", zaehler, nenner);
}
