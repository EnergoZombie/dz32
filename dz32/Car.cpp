#include "Car.h"
#include <iostream>

using namespace std;

Car::Car(const char* t, int c, const char* b, int s) : Transport(t, c), max_speed(s)
{
	brand = new char[strlen(b) + 1];
	strcpy_s(brand, strlen(b) + 1, b);
}

char* Car::GetBrand() const
{
	return brand;
}
int Car::GetMaxSpeed() const
{
	return max_speed;
}

void Car::SetBrand(const char* b)
{
	if (brand != nullptr)
	{
		delete[] brand;
	}
	brand = new char[strlen(b) + 1];
	strcpy_s(brand, strlen(b) + 1, b);
}

void Car::SetMaxSpeed(int s)
{
	max_speed = s;
}

void Car::Print() const
{
	cout << "Car\n";
	Transport::Print();
	cout << "Brand: " << brand << endl
		<< "Max Speed: " << max_speed << "km/h\n";
}

void Car::Input()
{
	Transport::Input();
	char b[64];
	cout << "Enter brand: ";
	cin >> b;
	SetBrand(b);
	cout << "Enter max speed: ";
	cin >> max_speed;
}

Car::~Car()
{
	delete[] brand;
}
