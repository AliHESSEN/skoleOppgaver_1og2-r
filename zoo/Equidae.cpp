#include "Equidae.h"

Equidae::Equidae()
{
	m_name;
	m_sex;
	m_animalFamily;
	m_species;
	m_weight;
	m_movement = "walking or running on all four legs";
}

Equidae::Equidae(std::string name, std::string sex, std::string animalFamily, std::string species, int weight)
	:m_name{ name }, m_sex{ sex }, m_animalFamily{ animalFamily }, m_species{ species }, m_weight{ weight }
{

}




void Equidae::addEquidae()
{
	equidae.push_back(Equidae("Jimmy", "Male", "Equidae", "Horse", 300));
	equidae.push_back(Equidae("Peter", "Male", "Equidae", "Zebra", 410));
	equidae.push_back(Equidae("Lee", "Male", "Equidae", "Donkey", 323));
}

void Equidae::printAllEquidae()
{
	movement();
	addEquidae();
	for (auto i = 0; i < equidae.size(); i++)
	{
		std::cout << "\n" << equidae[i] << std::endl;
		
	}
}

void Equidae::movement()
{
	Equidae equidae;
	std::cout << " The Equidae aniamals move by "<< equidae.getMovement() << std::endl;
}

std::string& Equidae::getName()
{
	return this->m_name;
}

std::string& Equidae::getSex()
{
	return this->m_sex;
}

std::string& Equidae::getSpecies()
{
	return this->m_species;
}

int& Equidae::getWeight()
{
	return this->m_weight;
}

std::ostream& operator<<(std::ostream& out, const Equidae& equidae)
{
	return out << " Name: " << equidae.m_name << ", " << " Sex: " << equidae.m_sex << ", " << "Animal family : " << equidae.m_animalFamily << ", " << "Species : " << equidae.m_species << ", "
		<< "Weight in kg : " << equidae.m_weight;
}
