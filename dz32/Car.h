#pragma once
#include "Transport.h"
class Car : public Transport
{
	char* brand = nullptr;
	int max_speed = 0;
public:
	Car() = default;
	Car(const char* t, int c, const char* b, int s);

	char* GetBrand() const;
	int GetMaxSpeed() const;

	void SetBrand(const char* b);
	void SetMaxSpeed(int s);

	void Print() const;
	void Input();

	~Car();
};

