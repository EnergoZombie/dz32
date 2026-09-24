#include "Ship.h"
#include <iostream>

using namespace std;

Ship::Ship(const char* t, int c, const char* t2, int l) : Transport(t, c), length(l)
{
	type = new char[strlen(t) + 1];
	strcpy_s(type, strlen(t) + 1, t);
}

char* Ship::GetType() const
{
	return type;
}
int Ship::GetLength() const
{
	return length;
}

void Ship::SetType(const char* t)
{
	if (type != nullptr)
	{
		delete[] type;
	}
	type = new char[strlen(t) + 1];
	strcpy_s(type, strlen(t) + 1, t);
}
void Ship::SetLength(int l)
{
	length = l;
}

void Ship::Print() const
{
	cout << "Ship\n";
	Transport::Print();
	cout << "Type " << type << endl
		<< "Length: " << length << endl;
}

void Ship::Input()
{
	Transport::Input();
	char b[64];
	cout << "Enter type: ";
	cin >> b;
	SetType(b);
	cout << "Enter length ";
	cin >> length;
}

Ship::~Ship()
{
	delete[] type;
}
