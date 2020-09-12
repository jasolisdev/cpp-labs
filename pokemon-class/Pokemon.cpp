#include <iostream>
#include <string>

#include "Pokemon.h"

Pokemon::Pokemon()
{
	pokemonName = "";
	pokemonNumber = 0;
	firstType = "";
	secondType = "";
}

Pokemon::Pokemon(std::string name, int number, std::string type1)
{
	pokemonName = name;
	pokemonNumber = number;
	firstType = type1;
}

Pokemon::Pokemon(std::string name, int number, std::string type1, std::string type2)
{
	pokemonName = name;
	pokemonNumber = number;
	firstType = type1;
	secondType = type2;
}

std::string Pokemon::getType1(std::string firstType) const
{
	return firstType;
}

std::string Pokemon::getType2(std::string secondType) const
{
	return secondType;
}

bool Pokemon::commonType(Pokemon p) const
{
	if (p.secondType == "" && this->secondType == "") 
	{
		if (p.firstType == this->firstType)
			return true;
		else return false;
	}
	
	if (p.firstType == this->firstType || p.firstType == this->secondType || p.secondType == this->firstType || p.secondType == this->secondType)
		return true;
	else return false;
}

void Pokemon::print() const
{
	std::cout << this->pokemonName << ": " << this->firstType << " " << this->secondType;
}

Pokemon::~Pokemon()
{
}
