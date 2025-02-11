#include "Header.hpp"
#include "Header2.hpp"


int main()
{
	setlocale(LC_ALL, "rus");

	Plant bush("bush", 1.5);
	Harvest raspberry("raspberry", "red", 0.2);
	raspberry.GetName();
	bush.DoHarvest();
		
		



	return 0;
}