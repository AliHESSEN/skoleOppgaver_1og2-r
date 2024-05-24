#pragma once
#include "Mammals.h"

class Equidae : public virtual Animals, public virtual Bird, public virtual FlightlessBirds, public virtual Fish, public virtual Mammals

{
public:

	Equidae(); //defualt
	Equidae(std::string name, std::string sex, std::string animalFamily, std::string species, int weight); // overloaded constructor



	//Functions
	void addEquidae();
	void printAllEquidae();
	void movement();

	//Accessors
	std::string& getName(); // @return a reference of name
	std::string& getSex(); // @return a reference of sex
	std::string& getSpecies(); // @return a reference of species
	int& getWeight(); // @return a reference of Weight
	inline std::string getMovement() const { return this->m_movement; } // @return referanse av Movement

	friend std::ostream& operator <<(std::ostream& out, const Equidae& equidae); // s� det kan skrives ut med cout<<

private:

	std::string m_name;
	std::string m_sex;
	std::string m_animalFamily;
	std::string m_species;
	int m_weight;
protected: std::string m_movement; // protected fordi vi m� tilgang til den de andre klassene
protected: std::vector<Equidae> equidae; //lager en vector av equidae

};

std::ostream& operator <<(std::ostream& out, const Equidae& equidae);

