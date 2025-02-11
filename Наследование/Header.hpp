#pragma once

#ifndef Header.hpp
#define Header.hpp
#include <iostream>
#include <string>
using namespace std;

class Harvest
{
public:
	Harvest(string name, double volume, double weigth)

		:name_(name),
		volume_(volume),
		weigth_(weigth)
	{}
	virtual ~Harvest() = default;
	double GetVolume()const;

	double GetWeigth()const { return weigth_; }
	string GetName() const;
	/*Harvest::~Harvest()
	{
	}*/
	friend std::ostream &operator << (std::ostream &out, const Harvest& obj);
private:

	string name_;
	double volume_;
	double weigth_;
}










#endif // !Header.hpp
