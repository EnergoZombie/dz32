#include "Transport.h"
#include <iostream>

using namespace std;

Transport::Transport(const char* t, int c) : fuel_consumption(c)
{
	fuel_type = new char[strlen(t) + 1];
	strcpy_s(fuel_type, strlen(t) + 1, t);
}

char* Transport::GetFuelType() const
{
	return fuel_type;
}
int Transport::GetFuelConsumption() const
{
	return fuel_consumption;
}

void Transport::SetFuelType(const char* t)
{
	delete[] fuel_type;
	fuel_type = new char[strlen(t) + 1];
	strcpy_s(fuel_type, strlen(t) + 1, t);
}
void Transport::SetFuelConsumption(int c)
{
	fuel_consumption = c;
}

void Transport::Print() const
{
	cout << "Fuel type: " << fuel_type << endl
		<< "Fuel consuption: " << fuel_consumption << endl;
}
void Transport::Input()
{
	char b[64];
	cout << "Enter fuel type: ";
	cin >> b;
	SetFuelType(b);
	cout << "Enter fuel consuption: ";
	cin >> fuel_consumption;
}

Transport::~Transport()
{
	if (fuel_type != nullptr)
	{
		delete[] fuel_type;
	}
}