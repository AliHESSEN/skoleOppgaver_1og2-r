#pragma once
#include <iostream>
#include <string>
#include <vector>



class Animals
{

public:


	Animals(); // defualt constructor
	virtual ~Animals();
	Animals(std::string name, std::string sex, std::string animalFamily, std::string species, int weight); // overloaded constructor


	//Functions

	void printAllAnimals();
	void addAnimal();
	



	// accessors

	inline bool getOnline() const { return this->m_online; } // use the program or quit
	std::string &getName(); // @return a reference of name
	std::string &getSex(); // @return a reference of sex (0 = female, 1 = male)
	std::string &getSpecies(); // @return a reference of species
	int &getWeight(); // @return a reference of Weight


	friend std::ostream& operator <<(std::ostream& out, const Animals& animals); // så det kan skrives ut med cout<<



private:
	protected: bool m_online; // om programmet er online eller offline må være tilgjengelig i alle klasser
	protected: int m_choice; // valgene som skal brukes i alle klassene
	std::string m_name;
	std::string m_sex; 
	std::string m_animalFamily;
	std::string m_species; 
	int m_weight;
	std::vector<Animals> animals; // lager en vector av alle animals


};

std::ostream& operator <<(std::ostream& out, const Animals& animals); // bruker denne for å kunne skrive ut med cout