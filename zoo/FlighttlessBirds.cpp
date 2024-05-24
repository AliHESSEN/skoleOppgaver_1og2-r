#include "FlighttlessBirds.h"
#include "Bird.h"

FlightlessBirds::FlightlessBirds()
{
	m_name;
	m_sex;
	m_animalFamily;
	m_species;
	m_weight;
	m_movement = "walking or running cause they cant fly";
}

FlightlessBirds::FlightlessBirds(std::string name, std::string sex, std::string animalFamily, std::string species, int weight)
	:m_name{ name }, m_sex{ sex }, m_animalFamily{ animalFamily }, m_species{ species }, m_weight{ weight }
{

}




void FlightlessBirds::addBird()
{
	flightlessBirds.push_back(FlightlessBirds("David", "Male", "Bird", "Penguin", 35));
	flightlessBirds.push_back(FlightlessBirds("Karen", "Female", "Bird", "Ostrich", 67));
	flightlessBirds.push_back(FlightlessBirds("Ruth", "Female", "Bird", "Kiwi", 2));
	
}

void FlightlessBirds::printAllFlightlessBirds()

{
	movement();
	addBird();

	for (auto i = 0; i < flightlessBirds.size(); i++)
	{
		std::cout << "\n" << flightlessBirds[i] << std::endl;
	}
}

void FlightlessBirds::movement()
{
	FlightlessBirds noFlyBird;
	std::cout << " \n These birds move around by " << noFlyBird.getMovement() << std::endl;
}

std::string& FlightlessBirds::getName()
{
	return this->m_name;
}

std::string& FlightlessBirds::getSex()
{
	return this->m_sex;
}

std::string& FlightlessBirds::getSpecies()
{
	return this->m_species;
}

int& FlightlessBirds::getWeight()
{
	return this->m_weight;
}

std::ostream& operator<<(std::ostream& out, const FlightlessBirds& flightLessBirds)
{
	return out << " Name: " << flightLessBirds.m_name << ", " << " Sex: " << flightLessBirds.m_sex << ", " << "Animal family : " << flightLessBirds.m_animalFamily << ", " << "Species : " << flightLessBirds.m_species << ", "
		<< "Weight in kg : " << flightLessBirds.m_weight;
}
