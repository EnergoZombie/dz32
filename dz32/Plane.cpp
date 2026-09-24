#include "Plane.h"
#include <iostream>

using namespace std;

Plane::Plane(const char* t, int c, const char* m, double w) : Transport(t, c), wingspan(w)
{
	manufacturer = new char[strlen(m) + 1];
	strcpy_s(manufacturer, strlen(m) + 1, m);
}

char* Plane::GetManufacturer() const
{
	return manufacturer;
}
double Plane::GetWingspan() const
{
	return wingspan;
}

void Plane::SetManufacturer(const char* m)
{
	if (manufacturer != nullptr)
	{
		delete[] manufacturer;
	}
	manufacturer = new char[strlen(m) + 1];
	strcpy_s(manufacturer, strlen(m) + 1, m);
}
void Plane::SetWingspan(double w)
{
	wingspan = w;
}

void Plane::Print() const
{
	cout << "Plane\n";
	Transport::Print();
	cout << "Manufacturer: " << manufacturer << endl
		<< "Wingspan: " << wingspan << endl;
}
void Plane::Input()
{
	Transport::Input();
	char b[64];
	cout << "Enter manufacturer: ";
	cin >> b;
	SetManufacturer(b);
	cout << "Enter wingspan: ";
	cin >> wingspan;

}

Plane::~Plane()
{
		delete[] manufacturer;
}
