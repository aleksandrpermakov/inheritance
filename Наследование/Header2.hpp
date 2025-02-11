#pragma once
#pragma once

#ifndef Header2.hpp
#define Header2.hpp
#include <iostream>
#include <string>

#include "Header.hpp"
#include <random>
using namespace std;
//Cоздать базовые классы для растений(Plants) и плодов(Harvest) Класс плода должен
//предоставлять возможность пользователю :
//узнавать своё название(задаётся при создании)
//узнавать свой вес и цвет(также можно задать при создании)


class Plant
{
public:
	Plant();
	Plant(string name, double height)
		:name_(name),
		height_(height)
	{
		static std::mt19937 gen{ std::random_device()() };
		static  std::uniform_int_distribution<int> provaider(10, 99);
		harvest_ = provaider(gen);
	}
	virtual ~Plant() = default;

	virtual Harvest* DoHarvest();


private:
	string name_;
	double height_;
	int harvest_;
};

class PlantName : public Plant
{
public:
	Harvest* DoHarvest() override;
private:

};







#endif // !Header2.hpp
