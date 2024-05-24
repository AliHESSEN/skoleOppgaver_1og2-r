#include "Bubble.h"

void Bubble::bubbleSort(int arr[])
{
	// step 1. lager "outer for-loop"
	for (int i{ 0 }; i < size; i++)
	{
		// step 2. lager "inner for-loop"
		// må huske på at j skal være size-i-1
		for (int j{ 0 }; j < (size-i-1); j++)
		{
			// step 3. sammenligner
			if (arr[j] > arr[j + 1]) // her sammenligner vi arr[j] indexen med elementet i arr[j+1], dvs neste element som er et steg til høyre
			{
				// så hvis arr[j] er større enn neste element i listen, må vi gjennomføre en swap. Siden vi går fra en lav til høy struktur
				
				int temp = arr[j]; // lager temp array med [j] for å bruke i swapen
				arr[j] = arr[j + 1]; // gjennomfører swap
				arr[j + 1] = temp; // gir temp den nye swap verdien

			}
		}
	}

}

void Bubble::takeUserInput()
{

	std::cout << "type in the size of the array :" << std::endl;
	std::cin >> size; // tar inn size på arrayet fra bruker

	std::cout << " type in " << size << " numbers to use in the array :" << std::endl;

	myArr = new int[size]; // definerer arrayet med antall elementer fra bruker på heapen
	for (int i = 0; i < size; i++)
	{
		std::cin >> numbers;
		myArr[i] = numbers;
	}


	std::cout << "The list Before sorting : " << std::endl;
	// skriver ut det usorterte arrayet
	for (int i{ 0 }; i < size; i++)
	{
		std::cout << myArr[i] << " " << std::endl;
	}
	
	// kjører bubbleSort funksjonen med arrayet som parameter
	bubbleSort(myArr);

	std::cout << "The list after sorting : " << std::endl;
	// skriver ut det usorterte arrayet
	for (int i{ 0 }; i < size; i++)
	{
		std::cout << myArr[i] << " " << std::endl;
	}

	delete[] myArr; // sletter arrayet fra heapen
}
