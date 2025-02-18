#pragma once

#ifndef Header_hpp
#define Header_hpp
#include <iostream>
#include <string>
using namespace std;

class Harvest //Урожай
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

	friend std::ostream& operator << (std::ostream& out, const Harvest& obj);
private:

	string name_;
	string color_;
	double weigth_; //масса
};
class Fetus :public Harvest//плод
{
public:
	Fetus() = default;
	Fetus(string name, string color, double weigth) :Harvest(name, color, weigth)
	{}
	~Fetus() = default;
	void Print()
	{
		cout << "Name: " << this->GetName() << '\n' << "Color: " << this->GetColor() << '\n' << "Weigth: " << this->GetWeigth() << '\n';
	}

private:

};














#endif // !Header_hpp
