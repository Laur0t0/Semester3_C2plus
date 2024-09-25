#pragma once

class Bruch
{
	/* kein Zugriff von aussen */
private:
	int zaehler;
	int nenner;

	/* oeffentliche Schnittstelle */
public:
	Bruch();
	Bruch(int);
	Bruch(int, int);
	~Bruch();

	void print();
};

