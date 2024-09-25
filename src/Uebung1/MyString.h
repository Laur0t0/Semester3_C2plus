class MyString
{
	/* kein Zugriff von aussen */
private:
	char text[101];
	int length;

	/* oeffentliche Schnittstelle */
public:
	MyString();
    MyString(char *);
    print();
    length(int);
    ~MyString();

	void print();
};