#pragma once
#include <iostream>
#include <string>
using namespace std;
class Property
{
private:
	double worth;
public:
	Property(double worth)
	{
		this->worth = worth;
		cout << this->worth << endl;
	}
	 virtual double Tax()
	 {
		 return this->worth;
	 }
	 double GetWorth()
	 {
		 return worth;
	 }
};
class Apartment :public Property
{
public:
	Apartment(double worth):Property(worth)
	{
		
	}
	double Tax() override
	{
		
		return GetWorth() / 1000;
	}
};
class Car :public Property
{
public :
	Car(double worth) :Property(worth)
	{

	}
	double Tax() override
	{
		
		return GetWorth() / 200;
	}
};
class CountryHouse : public Property
{
public:
	CountryHouse(double worth) :Property(worth)
	{

	}
	double Tax() override
	{
		
		return GetWorth() / 500;
	}
};
