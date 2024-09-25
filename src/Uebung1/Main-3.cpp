// Main.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>
#include "MyString.h"


int main()
{
    MyString a;
    MyString b = (char *)"Test";

    a.print();
    printf("Laenge a=%d\n", a.length());
 
    b.print();
    printf("Laenge b=%d\n", b.length());
}

