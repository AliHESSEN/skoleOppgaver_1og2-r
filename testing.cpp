#include <iostream>
#include <chrono>
#include <thread>
#include <mutex>
#include <vector>
#include <fstream>
#include <iomanip>
#include <time.h>



class Bursdag
{
public:
	Bursdag() = default; // default
	~Bursdag() = default; //destruktør
	Bursdag(std::string name, std::string fodselsDato, unsigned int age)
		: m_name{name}, m_fodelseDato{ fodselsDato }, m_age{ age }
	{

	}


	//Accessors
	friend inline std::ostream& operator <<(std::ostream& out, const Bursdag& bursdag);
	inline std::string getName() const { return this->m_name; }
	inline std::string getFodselsDato() const { return this->m_fodelseDato; }
	inline unsigned int getAge() const { return this->m_age; }

	// Functions
	void testThr2()
	{
		std::cout << " teest THR2" << std::endl;
	}
	void addKunder()
	{
		std::this_thread::sleep_for(std::chrono::seconds(5));

		m_bursdagsListe.push_back(Bursdag("A", "030194", 28));
		m_bursdagsListe.push_back(Bursdag("Per", "200495", 27));
		m_bursdagsListe.push_back(Bursdag("Jack", "110194", 28));
		m_bursdagsListe.push_back(Bursdag("Geir", "200194", 28));
		m_bursdagsListe.push_back(Bursdag("Tommy", "080993", 29));
		m_bursdagsListe.push_back(Bursdag("Alex", "131092", 30));
		m_bursdagsListe.push_back(Bursdag("Siri", "150694", 28));
		m_bursdagsListe.push_back(Bursdag("Tina", "190896", 26));

		for (auto i = 0; i < m_bursdagsListe.size(); ++i)
		{
			if (m_bursdagsListe[i].getFodselsDato() == "030194")
			{
				
				std::cout << " gratulerer" << getName() << std::endl;
				std::fstream kundeFil("BursdagsKort.txt");
				kundeFil.open("BursdagsKort.txt");
				kundeFil << " Gratulerer med dagen " << getName();
				
				
			}
			
			//std::cout << " \n" << m_bursdagsListe[i] << std::endl;
			
		}
		

	}
	void printKunder()
	{
		addKunder();
		for (auto i = 0; i < m_bursdagsListe.size(); ++i)
		{
			std::cout << " \n" << m_bursdagsListe[i] << std::endl;
			
		}

	}



private:
	std::string m_name;
	std::string m_fodelseDato;
	unsigned int m_age;
	std::string m_filename;
	std::vector<Bursdag> m_bursdagsListe; // liste av bursdagsKunder
	

};
std::ostream& operator << (std::ostream& out, const Bursdag& bursdag)
{
	return out << " Navn : " << bursdag.getName() << " FodelsesDato : " << bursdag.getFodselsDato() << " Alder : " << bursdag.getAge() << std::endl;
	
}



int main()
{

	Bursdag bur;
	bur.printKunder();
	
	std::thread t4(&Bursdag::addKunder,Bursdag("A","030194",28));
	t4.join();



		
}
