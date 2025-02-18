#pragma once
#pragma once

#ifndef Header2_hpp
#define Header2_hpp
#include <iostream>
#include <string>

#include "Header.hpp"
#include <random>
using namespace std;
//Cоздать базовые классы дл€ растений(Plants) и плодов(Harvest)  ласс плода должен
//предоставл€ть возможность пользователю :
//узнавать своЄ название(задаЄтс€ при создании)
//узнавать свой вес и цвет(также можно задать при создании)


class Plant //–астени€
{
public:
	Plant();
	Plant(string name, double height)
		:name_(name),
		height_(height)
	{
		static std::mt19937 gen{ std::random_device()() }; //генерирует урожай от 10 до  99 
		static  std::uniform_int_distribution<int> provaider(10, 99);
		harvest_ = provaider(gen);
	}
	virtual ~Plant() = default;
	int getHarvest() { return harvest_; }
	virtual Harvest* DoHarvest(); //получить 1 плод с растени€
	double GetHeight (){ return height_; }


private:
	string name_;
	double height_; //высота
	int harvest_; //количество плодов
};

class Raspberry : public Plant //класс малина
{
public:
	Raspberry(string name,double height,int age) : Plant (name,height)
	{
		
		age = age_;
	}
	int getAge() { return age_; }
	Harvest* DoHarvest() override
	{

		if (harvest_ > 0)
		{
			harvest_ -= 1;
			return new Fetus("Harvest_", "Red", 0.1);
		}
		else
		{
			return nullptr;
		}

	}
	


private:
	int age_;
	int harvest_;
	

};







#endif // !Header2_hpp
