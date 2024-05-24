#include "Cat.h"
#include <string>
#include <iostream>

Cat::Cat()
{
	m_name;
	m_sex;
	m_animalFamily;
	m_species;
	m_weight;
	m_movement = "walking or running on all four legs";
}

Cat::Cat(std::string name, std::string sex, std::string animalFamily, std::string species, int weight)
	:m_name{ name }, m_sex{ sex }, m_animalFamily{ animalFamily }, m_species{ species }, m_weight{ weight }
{
}



void Cat::mainMenu()
{
	std::cout << "\n" << std::endl;
	std::cout << " MAIN MENU: \n" << std::endl;
	std::cout << " 0: QUIT" << std::endl;
	std::cout << " 1: Add animal" << std::endl;
	std::cout << " 2: Show all aniamls " << std::endl;
	std::cout << " 3: Show all the mammals" << std::endl;
	std::cout << " 4: Show the Fish family" << std::endl;
	std::cout << " 5: Show the Bird family" << std::endl;
	std::cout << " 6: Show all flightless birds" << std::endl;
	std::cout << " 7: Show the Equidae family" << std::endl;
	std::cout << " 8: Show the Cat family" << std::endl;
	std::cout << " 9: Remove dead animal" << std::endl;


	std::cout << std::endl;

	std::cout << std::endl << "Choice :" << std::endl;
	std::cin >> m_choice;
	std::cout << std::endl;


	switch (m_choice) // lager switch med valgene fra mainMenu
	{
	case 0:
		m_online = false; // @choice 0 blir m_online satt til false(quit)
		break;

	case 1: // lager switch cases for å legge til dyr
		int option;
		std::cout << " 1: Mammal" << std::endl;
		std::cout << " 2: Fish " << std::endl;
		std::cout << " 3: Bird" << std::endl;
		std::cout << " 4: Cat" << std::endl;
		std::cout << " 5: Equidae" << std::endl;
		std::cout << " 6: Quit\n" << std::endl;


		std::cout << " What type of animal will you be adding to the zoo? :" << std::endl;
		std::cin >> option;
		
		switch (option)
		{
		case 1:
		{
			std::string aniName;
			std::string sexOfAni;
			std::string aniFamily;
			std::string aniSpecies;
			int aniWeight;

			std::cout << " Type in the name of the animal :" << std::endl;
			std::cin >> aniName;
			std::cout << " " << std::endl;

			std::cout << " Type in the sex of the animal :" << std::endl;
			std::cin >> sexOfAni;
			std::cout << " " << std::endl;

			std::cout << " Type in the animal family :" << std::endl;
			std::cin >> aniFamily;
			std::cout << " " << std::endl;

			std::cout << " Type in the species of the animal :" << std::endl;
			std::cin >> aniSpecies;
			std::cout << " " << std::endl;

			std::cout << " Type in the weight of the animal :" << std::endl;
			std::cin >> aniWeight;
			std::cout << " " << std::endl;


			mammals.push_back(Mammals(aniName, sexOfAni, aniFamily, aniSpecies, aniWeight));
			for (auto i = 0; i < mammals.size(); i++)
			{
				std::cout << "\n" << mammals[i] << std::endl;
			}

			break;
		}
		case 2:
		{
			std::string aniName;
			std::string sexOfAni;
			std::string aniFamily;
			std::string aniSpecies;
			int aniWeight;

			std::cout << " Type in the name of the animal :" << std::endl;
			std::cin >> aniName;
			std::cout << " " << std::endl;

			std::cout << " Type in the sex of the animal :" << std::endl;
			std::cin >> sexOfAni;
			std::cout << " " << std::endl;

			std::cout << " Type in the animal family :" << std::endl;
			std::cin >> aniFamily;
			std::cout << " " << std::endl;

			std::cout << " Type in the species of the animal :" << std::endl;
			std::cin >> aniSpecies;
			std::cout << " " << std::endl;

			std::cout << " Type in the weight of the animal :" << std::endl;
			std::cin >> aniWeight;
			std::cout << " " << std::endl;


			fish.push_back(Fish(aniName, sexOfAni, aniFamily, aniSpecies, aniWeight));
			for (auto i = 0; i < fish.size(); i++)
			{
				std::cout << "\n" << fish[i] << std::endl;
			}
			break;
		}
		case 3:
		{
			std::string aniName;
			std::string sexOfAni;
			std::string aniFamily;
			std::string aniSpecies;
			int aniWeight;

			std::cout << " Type in the name of the animal :" << std::endl;
			std::cin >> aniName;
			std::cout << " " << std::endl;

			std::cout << " Type in the sex of the animal :" << std::endl;
			std::cin >> sexOfAni;
			std::cout << " " << std::endl;

			std::cout << " Type in the animal family :" << std::endl;
			std::cin >> aniFamily;
			std::cout << " " << std::endl;

			std::cout << " Type in the species of the animal :" << std::endl;
			std::cin >> aniSpecies;
			std::cout << " " << std::endl;

			std::cout << " Type in the weight of the animal :" << std::endl;
			std::cin >> aniWeight;
			std::cout << " " << std::endl;


			bird.push_back(Bird(aniName, sexOfAni, aniFamily, aniSpecies, aniWeight));
			for (auto i = 0; i < bird.size(); i++)
			{
				std::cout << "\n" << bird[i] << std::endl;
			}
			break;
		}
		case 4:
		{
			std::string aniName;
			std::string sexOfAni;
			std::string aniFamily;
			std::string aniSpecies;
			int aniWeight;

			std::cout << " Type in the name of the animal :" << std::endl;
			std::cin >> aniName;
			std::cout << " " << std::endl;

			std::cout << " Type in the sex of the animal :" << std::endl;
			std::cin >> sexOfAni;
			std::cout << " " << std::endl;

			std::cout << " Type in the animal family :" << std::endl;
			std::cin >> aniFamily;
			std::cout << " " << std::endl;

			std::cout << " Type in the species of the animal :" << std::endl;
			std::cin >> aniSpecies;
			std::cout << " " << std::endl;

			std::cout << " Type in the weight of the animal :" << std::endl;
			std::cin >> aniWeight;
			std::cout << " " << std::endl;

			// hvis vi legger til en ny katt, så legges den inn i både mammal og cat vectoren siden cat er begge deler

			cat.push_back(Cat(aniName, sexOfAni, aniFamily, aniSpecies, aniWeight));
			for (auto i = 0; i < cat.size(); i++)
			{
				std::cout << "\n" << cat[i] << std::endl;
			}
			std::cout << " \n " << std::endl;

			mammals.push_back(Mammals(aniName, sexOfAni, aniFamily, aniSpecies, aniWeight));
			for (auto i = 0; i < mammals.size(); i++)
			{
				std::cout << "\n" << mammals[i] << std::endl;
			}
			break;
		}
		case 5:
		{
			std::string aniName;
			std::string sexOfAni;
			std::string aniFamily;
			std::string aniSpecies;
			int aniWeight;

			std::cout << " Type in the name of the animal :" << std::endl;
			std::cin >> aniName;
			std::cout << " " << std::endl;

			std::cout << " Type in the sex of the animal :" << std::endl;
			std::cin >> sexOfAni;
			std::cout << " " << std::endl;

			std::cout << " Type in the animal family :" << std::endl;
			std::cin >> aniFamily;
			std::cout << " " << std::endl;

			std::cout << " Type in the species of the animal :" << std::endl;
			std::cin >> aniSpecies;
			std::cout << " " << std::endl;

			std::cout << " Type in the weight of the animal :" << std::endl;
			std::cin >> aniWeight;
			std::cout << " " << std::endl;

			// hvis vi legger til et nytt dyr i hestefamilen, så legges den inn i både mammal og equidae vectoren siden de er begge deler

			equidae.push_back(Equidae(aniName, sexOfAni, aniFamily, aniSpecies, aniWeight));
			for (auto i = 0; i < equidae.size(); i++)
			{
				std::cout << "\n" << equidae[i] << std::endl;		
			}
			std::cout << "\n" << std::endl;

			mammals.push_back(Mammals(aniName, sexOfAni, aniFamily, aniSpecies, aniWeight));
			for (auto i = 0; i < mammals.size(); i++)
			{
				std::cout << "\n" << mammals[i] << std::endl;
			}
			break;	
		}
		
		case 6: // quit
			break;
	
		}
	

		break;

	case 2:
		std::cout << " Animals at the zoo are : \n" << std::endl;
		printAllAnimals();
		break;

	case 3:
		std::cout << " The mammals at the zoo are : \n" << std::endl;
		printAllMammals();
		break;

	case 4:
		std::cout << " Fish at the zoo are : \n" << std::endl;
		printAllFish();
		break;

	case 5:
		std::cout << " Birds at the zoo are : \n" << std::endl;
		printAllBirds();
		break;

	case 6:
		std::cout << " The flightless birds at the zoo are : \n" << std::endl;
		printAllFlightlessBirds();
		break;

	case 7:
		std::cout << " The Equidae animals at the zoo are : \n" << std::endl;
		printAllEquidae();
		break;

	case 8:
		std::cout << " The Cat animals at the zoo are : \n" << std::endl;
		printAllCats();
		break;

	case 9:
		int option2;
		std::cout << " 1: Mammal" << std::endl;
		std::cout << " 2: Fish " << std::endl;
		std::cout << " 3: Bird" << std::endl;
		std::cout << " 4: Cat" << std::endl;
		std::cout << " 5: Equidae" << std::endl;
		std::cout << " 6: Quit\n" << std::endl;


		std::cout << " What type of animal will you be removing? :" << std::endl;
		std::cin >> option2;

		switch (option2) // lager switch caser for å fjerne dead animals fra vectorene
		{
		case 1:
		{
			int numInLine;
			std::cout << " What's the number of the animal to remove ? :" << std::endl;
			std::cin >> numInLine;

			mammals.erase(mammals.begin()+numInLine); // fjerner det døde dyret med gitt nummer fra brukeren
			for (auto i = 0; i < mammals.size(); i++) // printer ut updated vector etter at vi har fjernet dyret
			{
				std::cout << "\n" << mammals[i] << std::endl;
			}

			break;
		}

		case 2:
		{
			int numInLine;
			std::cout << " What's the number of the animal to remove ? :" << std::endl;
			std::cin >> numInLine;

			fish.erase(fish.begin() + numInLine); // fjerner det døde dyret med gitt nummer fra brukeren
			for (auto i = 0; i < fish.size(); i++) // printer ut updated vector etter at vi har fjernet dyret
			{
				std::cout << "\n" << fish[i] << std::endl;
			}

			break;
		}

		case 3:
		{
			int numInLine;
			std::cout << " What's the number of the animal to remove ? :" << std::endl;
			std::cin >> numInLine;

			

			bird.erase(bird.begin() + numInLine);	// fjerner det døde dyret med gitt nummer fra brukeren
			for (auto i = 0; i < bird.size(); i++) // printer ut updated vector etter at vi har fjernet dyret
			{
				std::cout << "\n" << bird[i] << std::endl;
			}

			break;
		}

		case 4:
		{
			int numInLine;
			std::cout << " What's the number of the animal to remove ? :" << std::endl;
			std::cin >> numInLine;



			cat.erase(cat.begin() + numInLine);	  // fjerner det døde dyret med gitt nummer fra brukeren
			for (auto i = 0; i < cat.size(); i++) // printer ut updated vector etter at vi har fjernet dyret
			{
				std::cout << "\n" << cat[i] << std::endl;
			}

			break;

		}
		
		case 5:
		{
			int numInLine;
			std::cout << " What's the number of the animal to remove ? :" << std::endl;
			std::cin >> numInLine;



			equidae.erase(equidae.begin() + numInLine);	  // fjerner det døde dyret med gitt nummer fra brukeren
			for (auto i = 0; i < equidae.size(); i++) // printer ut updated vector etter at vi har fjernet dyret
			{
				std::cout << "\n" << equidae[i] << std::endl;
			}

			break;
		}
			
		case 6:
		{
			break; // quit
		}

		}
		break;


	default:
		break;

	}
}

void Cat::addCat()
{
	cat.push_back(Cat("Gatt", "Male", "Cat", "Leopard", 31));
	cat.push_back(Cat("Nina", "Female", "Cat", "Cougar", 91));
	cat.push_back(Cat("Caitlyn", "Female", "Cat", "", 278));
	cat.push_back(Cat("Linda", "Female", "Cat", "Jaguar", 97));
	cat.push_back(Cat("Wendy", "Female", "Cat", "Cheetah", 74));
	cat.push_back(Cat("Toph", "Female", "Cat", "Lion", 220));
}

void Cat::printAllCats()
{
	movement();
	addCat();
	for (auto i = 0; i < cat.size(); i++)
	{
		std::cout << "\n" << cat[i] << std::endl;
	}
}

void Cat::movement()
{
	Cat cat;
	std::cout << " The cats move around by " << cat.getMovement() << std::endl;
}

std::string& Cat::getName()
{
	return this->m_name;
}

std::string& Cat::getSex()
{
	return this->m_sex;
}

std::string& Cat::getSpecies()
{
	return this->m_species;
}

int& Cat::getWeight()
{
	return this->m_weight;
}

std::ostream& operator<<(std::ostream& out, const Cat& cat)
{
	return out << " Name: " << cat.m_name << ", " << " Sex: " << cat.m_sex << ", " << "Animal family : " << cat.m_animalFamily << ", " << "Species : " << cat.m_species << ", "
		<< "Weight in kg : " << cat.m_weight;
}
