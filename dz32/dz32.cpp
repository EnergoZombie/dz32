#include <iostream>
#include"Transport.h"
#include"Car.h"
#include"Ship.h"
#include"Plane.h"
#include"Motorcycle.h"



using namespace std;

int main()
{
	int c = 0;
	cout << "Choose option {1 - Car, 2 - Ship, 3 - Plane, 4 - Motorcycle): ";
	cin >> c;
	Transport* ptr = nullptr;
	switch (c)
	{
	case 1:
		ptr = new Car();
		break;
	case 2:
		ptr = new Ship();
		break;
	case 3:
		ptr = new Plane();
		break;
	case 4:
		ptr = new Motorcycle();
		break;
	}
	if (ptr != nullptr)
	{
		ptr->Input();
		ptr->Print();

		delete ptr;
	}
	}