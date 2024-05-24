#pragma once
#include "Fish.h"

class Mammals : public virtual Animals, public virtual Bird, public virtual FlightlessBirds, public virtual Fish

{
public:

	Mammals(); //defualt
	Mammals(std::string name, std::string sex, std::string animalFamily, std::string species, int weight); // overloaded constructor


	//Functions
	void addMammal();
	void printAllMammals();
	void movement();

	//Accessors
	std::string& getName(); // @return a reference of name
	std::string& getSex(); // @return a reference of sex
	std::string& getSpecies(); // @return a reference of species
	int& getWeight(); // @return a reference of Weight
	inline std::string getMovement() const { return this->m_movement; } // @return referanse av Movement

	friend std::ostream& operator <<(std::ostream& out, const Mammals& mammals); // så det kan skrives ut med cout<<

private:

	std::string m_name;
	std::string m_sex;
	std::string m_animalFamily;
	std::string m_species;
	int m_weight;
protected: std::string m_movement; // protected fordi vi må tilgang til den de andre klassene
protected: std::vector<Mammals> mammals; //lager en vector av mammals

};

std::ostream& operator <<(std::ostream& out, const Mammals& mammals);

