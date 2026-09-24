#include "Motorcycle.h"
#include <iostream>

using namespace std;

Motorcycle::Motorcycle(const char* t, int c, const char* t2, int w) : Transport(t, c), weight(w)
{
	type = new char[strlen(t2) + 1];
	strcpy_s(type, strlen(t2) + 1, t2);
}

char* Motorcycle::GetType() const
{
	return type;
}
int Motorcycle::GetWeight() const
{
	return weight;
}

void Motorcycle::SetType(const char* t)
{
	if (type != nullptr)
	{
		delete[] type;
	}
	type = new char[strlen(t) + 1];
	strcpy_s(type, strlen(t) + 1, t);
}
void Motorcycle::SetWeight(int w)
{
	weight = w;
}

void Motorcycle::Print() const
{
	cout << "Motorcycle\n";
	Transport::Print();
	cout << "Type " << type << endl
		<< "Weight: " << weight << endl;
}

void Motorcycle::Input()
{
	Transport::Input();
	char b[64];
	cout << "Enter type: ";
	cin >> b;
	SetType(b);
	cout << "Enter weight ";
	cin >> weight;
}

Motorcycle::~Motorcycle()
{
	delete[] type;
}
