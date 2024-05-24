#include "Mammals.h"

Mammals::Mammals()
{
	m_name;
	m_sex;
	m_animalFamily;
	m_species;
	m_weight;
	m_movement = "walking, running and some mammals also move around by swimming";
}

Mammals::Mammals(std::string name, std::string sex, std::string animalFamily, std::string species, int weight)
	:m_name{ name }, m_sex{ sex }, m_animalFamily{ animalFamily }, m_species{ species }, m_weight{ weight }
{

}



void Mammals::addMammal()
{
	mammals.push_back(Mammals("Jimmy", "Male", "Mammal", "Horse", 300));
	mammals.push_back(Mammals("Caitlyn", "Female", "Mammal", "", 278));
	mammals.push_back(Mammals("Gatt", "Male", "Mammal", "Leopard", 31));
	mammals.push_back(Mammals("Peter", "Male", "Mammal", "Zebra", 410));
	mammals.push_back(Mammals("Toph", "Female", "Mammal", "Lion", 220));
	mammals.push_back(Mammals("Lee", "Male", "Mammal", "Donkey", 323));
	mammals.push_back(Mammals("Juri", "Female", "Mammal", "Blue whale", 140000));
	mammals.push_back(Mammals("Cody", "Male", "Mammal", "Elephant ", 4276));
	mammals.push_back(Mammals("Nina", "Female", "Mammal", "Cougar", 91));
	mammals.push_back(Mammals("Linda", "Female", "Mammal", "Jaguar", 97));
	mammals.push_back(Mammals("Slash", "Male", "Mammal", "Grizzly bear", 270));
	mammals.push_back(Mammals("Nancy", "Female", "Mammal", "Ice bear", 314));
	mammals.push_back(Mammals("Wendy", "Female", "Mammal", "Cheetah", 74));
	mammals.push_back(Mammals("Abel", "Male", "Mammal", "White rhinoceros", 2700));
	mammals.push_back(Mammals("Rufus", "Male", "Mammal", "Hippo", 1469));
	mammals.push_back(Mammals("Nina", "Female", "Mammal", "Cougar", 91));
}

void Mammals::printAllMammals()
{
	movement();
	addMammal();

	for (auto i = 0; i < mammals.size(); i++)
	{
		std::cout << "\n" << mammals[i] << std::endl;
	}
}

void Mammals::movement()
{
	Mammals mammal;
	std::cout << " The mammals move by " << mammal.getMovement() << std::endl;
}

std::string& Mammals::getName()
{
	return this->m_name;
}

std::string& Mammals::getSex()
{
	return this->m_sex;
}

std::string& Mammals::getSpecies()
{
	return this->m_species;
}

int& Mammals::getWeight()
{
	return this->m_weight;
}

std::ostream& operator<<(std::ostream& out, const Mammals& mammals)
{
	return out << " Name: " << mammals.m_name << ", " << " Sex: " << mammals.m_sex << ", " << "Animal family : " << mammals.m_animalFamily << ", " << "Species : " << mammals.m_species << ", "
		<< "Weight in kg : " << mammals.m_weight;
}
