#pragma once
#include "Transport.h"
class Motorcycle : public Transport
{
	char* type = nullptr;
	int weight = 0;
public:
	Motorcycle() = default;
	Motorcycle(const char* t, int c, const char* t2, int w);

	char* GetType() const;
	int GetWeight() const;

	void SetType(const char* t);
	void SetWeight(int w);

	void Print() const;
	void Input();

	~Motorcycle();
};

