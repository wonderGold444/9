#include "Header.h"
using namespace std;
int main ()
{
	Property* arr[7];
	for (int i = 0; i < 7; i++)
	{
		if (i < 3)
		{
			arr[i] = new Apartment(1000);
		}
		if(i>=3 && i<5)
		{
			arr[i] = new Car(200);
		}
		if(i>=5)
		{
			arr[i] = new CountryHouse(500);
		}
	}
	for (int i = 0; i < 7; i++)
	{
		if (arr[i]->GetWorth()==1000)
		{
			cout << "Tax from the Apartment : ";
		}
		if (arr[i]->GetWorth() == 500)
		{
			cout << "Tax from the CountryHouse : ";

		}
		if (arr[i]->GetWorth() == 200)
		{
			cout << "Tax from the Car : ";
		}
		cout << arr[i]->Tax() << endl;
	}

	for (int i = 0 ; i < 7 ; i++)
	{
		delete arr[i];
	}
	
}