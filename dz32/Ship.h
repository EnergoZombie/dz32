#pragma once
#include "Transport.h"
class Ship : public Transport
{
	char* type = nullptr;
	int length = 0;
public:
	Ship() = default;
	Ship(const char* t, int c, const char* t2, int l);

	char* GetType() const;
	int GetLength() const;

	void SetType(const char* t);
	void SetLength(int l);

	void Print() const;
	void Input();

	~Ship();
};

