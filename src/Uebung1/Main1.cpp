// Main.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "MyString.h"


using namespace std;


int main()
{
    MyString a;
    MyString b = "Test";

    cout << ">" << a << "<" << " mit Laenge " << a.length() << endl;

    if ("Test" == b)
    {
        a = b + "fall";
        cout << ">" << a << "<" << " mit Laenge " << a.length() << endl;
    }

    char* t = NULL;

    return(0);
}
