#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "MyString.h"


/* avoid Visual Studio "depreciated/unsafe error" when using strcpy() */
static char* my_strcpy(char* t, const char* s)
{
	char* p = t;

	while ((*p++ = *s++) != '\0');

	return(t);
}


/* Konstruktoren/Destruktor */

MyString::MyString(const char* s)
{
	len = strlen(s);
	sPtr = new char[len + 1];
	if (sPtr == NULL)
	{
		fprintf(stderr, "ERROR: Kein Speicher\n");
		exit(1);
	}

	/* avoid Visual Studio "depreciated/unsafe error" when using strcpy() */
	my_strcpy(sPtr, s);
}


MyString::MyString(const MyString& s)
{
	len = s.len;
	sPtr = new char[len + 1];
	if (sPtr == NULL)
	{
		fprintf(stderr, "ERROR: Kein Speicher\n");
		exit(1);
	}

	/* avoid Visual Studio "depreciated/unsafe error" when using strcpy() */
	my_strcpy(sPtr, s.sPtr);
}


MyString::~MyString()
{
	delete[] sPtr;
}


/* Methoden */

void MyString::print() const
{
	printf(">%s<\n", sPtr);
}


int MyString::length() const
{
	return(len);
}


/* Operatoren */

const MyString& MyString::operator = (const MyString& s)
{
	/* Zuweisung an sich selbst */
	if (this == &s)
	{
		return(*this);
	}

	if (len != s.len)
	{
		delete[] sPtr;
		len = s.len;
		sPtr = new char[len + 1];
		if (sPtr == NULL)
		{
			fprintf(stderr, "ERROR: Kein Speicher\n");
			exit(1);
		}
	}
	my_strcpy(sPtr, s.sPtr);

	return(*this);
}
