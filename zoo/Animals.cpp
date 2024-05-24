#include "Animals.h"
#include "Bird.h"


Animals::Animals()
{
	m_name;
	m_sex;
	m_animalFamily;
	m_species;
	m_weight;
	m_online = true; // when browsing the zoo this will be set to true
	m_choice = 0;
}

Animals::~Animals()
{

}

Animals::Animals(std::string name, std::string sex, std::string animalFamily, std::string species, int weight)
	: m_name{ name }, m_sex{ sex }, m_animalFamily{ animalFamily }, m_species{ species }, m_weight{ weight } // memberVar til disse variablene
{

}

// Functions



void Animals::printAllAnimals()
{
	
	addAnimal();

	for (auto i = 0; i < animals.size(); i++)
	{
		std::cout << "\n" << animals[i] << std::endl;
	}
	
}

void Animals::addAnimal()
{
	animals.push_back(Animals("Jimmy", "Male", "Equidae", "Horse", 300));
	animals.push_back(Animals("Kate", "Female", "Bird", "Arctic tern", 10));
	animals.push_back(Animals("Caitlyn", "Female", "Cat", "", 278));
	animals.push_back(Animals("Ash", "Male", "Fish", "Hammerhead Shark", 209));
	animals.push_back(Animals("James", "Male", "Bird", "Cape Vulture", 8));
	animals.push_back(Animals("Annie", "Memale", "Fish", "Marlin", 94));
	animals.push_back(Animals("Vlad", "Male", "Bird", "Goshawk", 2));
	animals.push_back(Animals("Gatt", "Male", "Cat", "Leopard", 31));
	animals.push_back(Animals("Tommy", "Male", "Bird", "Golden Eagle", 7));
	animals.push_back(Animals("Lulu", "Female", "Fish", "Northen pike", 2));
	animals.push_back(Animals("Elena", "Female", "Fish", "Swordfish", 634));
	animals.push_back(Animals("Beth", "Female", "Bird", "White-tailed eagle", 7));
	animals.push_back(Animals("Luke", "Male", "Bird", "Cormorant", 3));
	animals.push_back(Animals("Abel", "Male", "Rhinocerotidae", "White rhinoceros", 2700));
	animals.push_back(Animals("Rufus", "Male", "", "HiHippopotamidaeppo", 1469));
	animals.push_back(Animals("Nina", "Female", "Cat", "Cougar", 91));
	animals.push_back(Animals("Karen", "Female", "Bird", "Ostrich", 67));
	animals.push_back(Animals("Peter", "Male", "Equidae", "Zebra", 410));
	animals.push_back(Animals("Obi", "Male", "Fish", "King mackerel", 14));
	animals.push_back(Animals("Gragas", "Male", "Fish", "Greater amberjack", 18));
	animals.push_back(Animals("Elise", "Female", "Fish", "Blue shark", 100));
	animals.push_back(Animals("Ken", "Male", "Bird", "Gadwall", 1));
	animals.push_back(Animals("Juri", "Female", "Rorquals", "Blue whale", 140000));
	animals.push_back(Animals("Cody", "Male", "Elephantidae", "Elephant ", 4276));
	animals.push_back(Animals("Linda", "Female", "Cat", "Jaguar", 97));
	animals.push_back(Animals("Slash", "Male", "Ursidae", "Grizzly bear", 270));
	animals.push_back(Animals("Nancy", "Female", "Ursidae", "Ice bear", 314));
	animals.push_back(Animals("Wendy", "Female", "Cat", "Cheetah", 74));
	animals.push_back(Animals("Auron", "Male", "Fish", "Tiger shark", 613));
	animals.push_back(Animals("Ruth", "Female", "Bird", "Kiwi", 2));
	animals.push_back(Animals("Jessica", "Fmale", "Bird", "Grey heron", 2));
	animals.push_back(Animals("David", "Male", "Bird", "Penguin", 35));
	animals.push_back(Animals("Xin", "Male", "Fish", "Channa micropeltes", 20));
	animals.push_back(Animals("Lee", "Male", "Fish", "Giant grouper", 400));
	animals.push_back(Animals("Kelly", "Fmale", "Bird", "Honey buzzard", 2));
	animals.push_back(Animals("Toph", "Female", "Cat", "Lion", 220));
	animals.push_back(Animals("Sam", "Male", "Bird", "Marsh harrier", 1));
	animals.push_back(Animals("Nicole", "Female", "Bird", "Red grouse", 1));
	animals.push_back(Animals("Lee", "Male", "Equidae", "Donkey", 323));
	animals.push_back(Animals("Ina", "Fmale", "Bird", "Yellow-legged gull", 1));
	animals.push_back(Animals("Dany", "Male", "Bird", "Tawny owl", 1));
	

	std::cout << "\n";
}




// Accessors

std::string& Animals::getName()
{
	return this->m_name;
}

std::string& Animals::getSex()
{
	return this->m_sex;
}

std::string& Animals::getSpecies()
{
	return this->m_species;
}

int& Animals::getWeight()
{
	return this->m_weight;
}




// så jeg kan skrive ut med cout <<
std::ostream& operator<<(std::ostream& out, const Animals& animals) 
{
	return out << " Name: " << animals.m_name <<", " << " Sex: " << animals.m_sex <<", " << "Animal family : " << animals.m_animalFamily << ", " << "Species : " << animals.m_species << ", " 
		<< "Weight in kg : " << animals.m_weight;
}


