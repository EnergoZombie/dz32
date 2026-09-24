#pragma once
#include "Transport.h"
class Plane : public Transport
{
	char* manufacturer = nullptr;
	double wingspan = 0;
public:
	Plane() = default;
	Plane(const char* t, int c, const char* m, double w);

	char* GetManufacturer() const;
	double GetWingspan() const;

	void SetManufacturer(const char* m);
	void SetWingspan(double w);

	void Print() const;
	void Input();

	~Plane();
};

