#pragma once
#include "FlighttlessBirds.h"


class Fish : public virtual Animals, public virtual Bird, public virtual FlightlessBirds
{

public:

	Fish(); //defualt
	Fish(std::string name, std::string sex, std::string animalFamily, std::string species, int weight); // overloaded constructor



	//Functions
	void addfish();
	void printAllFish();
	void movement();

	//Accessors
	std::string& getName(); // @return a reference of name
	std::string& getSex(); // @return a reference of sex (0 = female, 1 = male)
	std::string& getSpecies(); // @return a reference of species
	int& getWeight(); // @return a reference of Weight
	inline std::string getMovement() const { return this->m_movement; } // @return referanse av Movement


	friend std::ostream& operator <<(std::ostream& out, const Fish& fish); // så det kan skrives ut med cout<<


private:

	std::string m_name;
	std::string m_sex;
	std::string m_animalFamily;
	std::string m_species;
	int m_weight;
protected: std::string m_movement; // protected fordi vi må tilgang til den de andre klassene
protected: std::vector<Fish> fish; //lager en vector av fisk


};

std::ostream& operator <<(std::ostream& out, const Fish& fish);

