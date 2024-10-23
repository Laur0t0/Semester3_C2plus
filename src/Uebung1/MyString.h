#pragma once


class MyString
{
private:
	char *sPtr;
	unsigned len;

public:
	MyString(const char* = "");
	MyString(const MyString&);
	~MyString();

	void print() const;
	int length() const;

	const MyString& operator = (const MyString&);
};

