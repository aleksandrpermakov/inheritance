#include "Header2.hpp"

Plant::Plant():

	Plant("Apple",7.1)
{}

Harvest* Plant::DoHarvest()
{
	if (harvest_ > 0)
	{
		harvest_ -= 1;
		return new Harvest("Apple", 0.2, 0.3);
	}
	else
	{
		return nullptr;
	}
}
	
