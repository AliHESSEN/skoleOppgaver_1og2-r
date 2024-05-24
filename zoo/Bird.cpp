#include "Bird.h"

Bird::Bird()
{
	m_name;
	m_sex;
	m_animalFamily;
	m_species;
	m_weight;
	m_movement = "Flying";
}

Bird::Bird(std::string name, std::string sex, std::string animalFamily, std::string species, int weight)
	: m_name{name}, m_sex{sex}, m_animalFamily{animalFamily}, m_species{species}, m_weight{weight}

{

}



void Bird::addBird() // legger til fugler
{
	bird.push_back(Bird("Kate", "Female", "Bird", "Arctic tern", 1));
	bird.push_back(Bird("Edd", "Male", "Bird", "Arctic tern", 2));
	bird.push_back(Bird("Tom", "Male", "Bird", "Golden eagle", 6));
	bird.push_back(Bird("Beth", "Female", "Bird", "White-tailed eagle", 7));
	bird.push_back(Bird("Luke", "Male", "Bird", "Cormorant", 3));
	bird.push_back(Bird("Ken", "Male", "Bird", "Gadwall", 1));
	bird.push_back(Bird("Vlad", "Male", "Bird", "Goshawk", 2));
	bird.push_back(Bird("Karen", "Female", "Bird", "Ostrich", 67));
	bird.push_back(Bird("Jessica", "Fmale", "Bird", "Grey heron", 2));
	bird.push_back(Bird("Kelly", "Fmale", "Bird", "Honey buzzard", 2));
	bird.push_back(Bird("Sam", "Male", "Bird", "Marsh harrier", 1));
	bird.push_back(Bird("Nicole", "Female", "Bird", "Red grouse", 1));
	bird.push_back(Bird("Ina", "Fmale", "Bird", "Yellow-legged gull", 1));
	bird.push_back(Bird("Dany", "Male", "Bird", "Tawny owl", 1));
	bird.push_back(Bird("James", "Male", "Bird", "Cape Vulture", 8));
	bird.push_back(Bird("David", "Male", "Bird", "Penguin", 35));
	bird.push_back(Bird("Ruth", "Female", "Bird", "Kiwi", 2));
}

void Bird::printAllBirds() //printer ut alle fugler
{	
	
	movement();
	addBird();

	for (auto i = 0; i < bird.size(); i++)
	{
		std::cout << "\n" << bird[i] << std::endl;
	}
	
}



void Bird::movement()
{
	Bird bird;

	std::cout << " \n The " << bird.getMovement() << " birds at the zoo are:  "  << std::endl; // funksjonen for bevegelsen til flyvende fugler
}

std::string& Bird::getName()
{
	return this->m_name;
}

std::string& Bird::getSex()
{
	return this->m_sex;
}

std::string& Bird::getSpecies()
{
	return this->m_species;
}

int& Bird::getWeight()
{
	return this->m_weight;
}

// så jeg kan skrive ut med cout <<
std::ostream& operator<<(std::ostream& out, const Bird& bird)
{
	return out << " Name: " << bird.m_name << ", " << " Sex: " << bird.m_sex << ", " << "Animal family : " << bird.m_animalFamily << ", " << "Species : " << bird.m_species << ", "
		<< "Weight in kg : " << bird.m_weight;
}
