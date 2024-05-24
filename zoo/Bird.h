#pragma once
#include "Animals.h"

class Bird : public virtual Animals 

{
public:
	Bird(); //defualt
	Bird(std::string name, std::string sex, std::string animalFamily, std::string species, int weight); // overloaded constructor



	//Functions
	void addBird();
	void printAllBirds();
	void movement();

	//Accessors
	std::string& getName(); // @return a reference of name
	std::string& getSex(); // @return a reference of sex (0 = female, 1 = male)
	std::string& getSpecies(); // @return a reference of species
	int& getWeight(); // @return a reference of Weight
	inline std::string getMovement() const { return this->m_movement; } // @return referanse av Movement
	



	friend std::ostream& operator <<(std::ostream& out, const Bird& bird); // så det kan skrives ut med cout<<


private:

	std::string m_name;
	std::string m_sex;
	std::string m_animalFamily;
	std::string m_species;
	int m_weight;
protected: std::string m_movement; // protected fordi vi må tilgang til den de andre klassene
protected: std::vector<Bird> bird; //lager en vector av bird


};
std::ostream& operator <<(std::ostream& out, const Bird& bird); // bruker denne for å kunne skrive ut med cout


