#include "Header.hpp"
#include "Header2.hpp"


int main()
{
	setlocale(LC_ALL, "rus");

	Plant bush("bush", 1.5);
	Harvest raspberr("raspberry", "red", 0.2);
	raspberr.GetName();
	bush.DoHarvest();

	
	Fetus raspberry("raspberry", "red", 0.1);
	raspberry.Print();

		
		



	return 0;
}