#include "MyString.h"

/* Konstruktoren */

MyString::MyString()
{
	/* initialisiere mit 0 */
	length = 0;
	char* text;
}

MyString::MyString()
{
	
}


/* Destruktor */

MyString::~MyString()
{
	/* keine Aktion notwendig */
}


/* Methoden */

void MyString::print()
{
	print("Zaehler: %d\nNenner: %d\n", text, length);
}