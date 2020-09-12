#ifndef POKEMON_H
#define POKEMON_H

class Pokemon
{
public:
	Pokemon();

	Pokemon(std::string pokemonName, int pokemonNumber, std::string firstType);
	Pokemon(std::string pokemonName, int pokemonNumber, std::string firstType, std::string secondType);

	std::string getType1(std::string firstType) const;
	std::string getType2(std::string secondType) const;

	bool commonType(Pokemon p) const;

	void print() const;

	~Pokemon();


private:
	int pokemonNumber;
	
	std::string pokemonName;
	std::string firstType;
	std::string secondType;

};

#endif // !POKEMON_H
