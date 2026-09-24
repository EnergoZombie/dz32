#pragma once
class Transport
{
protected:
	char* fuel_type = nullptr;
	int fuel_consumption = 0;
public:
	Transport() = default;
	Transport(const char* t, int c);

	char* GetFuelType() const;
	int GetFuelConsumption() const;

	void SetFuelType(const char* t);
	void SetFuelConsumption(int c);

	virtual void Print() const;
	virtual void Input();

	virtual ~Transport();
};

