#include "Fish.h"

Fish::Fish()
{
	m_name;
	m_sex;
	m_animalFamily;
	m_species;
	m_weight;
	m_movement = "swimming";
}

Fish::Fish(std::string name, std::string sex, std::string animalFamily, std::string species, int weight)
	:m_name{ name }, m_sex{ sex }, m_animalFamily{ animalFamily }, m_species{ species }, m_weight{ weight }
{

}



void Fish::addfish()
{
	fish.push_back(Fish("Ryu", "Male", "Fish", "Ocean sunfish", 2000));
	fish.push_back(Fish("Alex", "Male", "Fish", "Yellowfin tuna ", 180));
	fish.push_back(Fish("Betty", "Femle", "Fish", "Great white shark", 1000));
	fish.push_back(Fish("Auron", "Male", "Fish", "Tiger shark", 613));
	fish.push_back(Fish("Lulu", "Female", "Fish", "Northen pike", 2));
	fish.push_back(Fish("Elena", "Female", "Fish", "Swordfish", 634));
	fish.push_back(Fish("Obi", "Male", "Fish", "King mackerel", 14));
	fish.push_back(Fish("Gragas", "Male", "Fish", "Greater amberjack", 18));
	fish.push_back(Fish("Elise", "Female", "Fish", "Blue shark", 100));
	fish.push_back(Fish("Xin", "Male", "Fish", "Channa micropeltes", 20));
	fish.push_back(Fish("Lee", "Male", "Fish", "Giant grouper", 400));
	
}

void Fish::printAllFish()
{
	movement();
	addfish();

	for (auto i = 0; i < fish.size(); i++)
	{
		std::cout << "\n" << fish[i] << std::endl;
	}
}

void Fish::movement()
{
	Fish fish;
	std::cout << "The fishes move by " << fish.getMovement() << std::endl;
}

std::string& Fish::getName()
{
	return this->m_name;
}

std::string& Fish::getSex()
{
	return this->m_sex;
}

std::string& Fish::getSpecies()
{
	return this->m_species;
}

int& Fish::getWeight()
{
	return this->m_weight;
}

std::ostream& operator<<(std::ostream& out, const Fish& fish)
{
	return out << " Name: " << fish.m_name << ", " << " Sex: " << fish.m_sex << ", " << "Animal family : " << fish.m_animalFamily << ", " << "Species : " << fish.m_species << ", "
		<< "Weight in kg : " << fish.m_weight;
}
