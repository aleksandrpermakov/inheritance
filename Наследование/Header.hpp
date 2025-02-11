#pragma once

#ifndef Header.hpp
#define Header.hpp
#include <iostream>
#include <string>
using namespace std;

class Harvest
{
public:
	Harvest(string name, string color, double weigth)

		:name_(name),
		color_(color),
		weigth_(weigth)
	
	{}
	virtual ~Harvest() = default;

	string GetColor()const;
	double GetWeigth()const { return weigth_; }
	string GetName() const;
	/*Harvest::~Harvest()
	{
	}*/
	friend std::ostream &operator << (std::ostream &out, const Harvest& obj);
private:

	string name_;
	string color_;
	double weigth_;
}












#endif // !Header.hpp
