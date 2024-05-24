#include "Bubble.h"

void Bubble::bubbleSort(int arr[])
{
	// step 1. lager "outer for-loop"
	for (int i{ 0 }; i < size; i++)
	{
		// step 2. lager "inner for-loop"
		// m� huske p� at j skal v�re size-i-1
		for (int j{ 0 }; j < (size-i-1); j++)
		{
			// step 3. sammenligner
			if (arr[j] > arr[j + 1]) // her sammenligner vi arr[j] indexen med elementet i arr[j+1], dvs neste element som er et steg til h�yre
			{
				// s� hvis arr[j] er st�rre enn neste element i listen, m� vi gjennomf�re en swap. Siden vi g�r fra en lav til h�y struktur
				
				int temp = arr[j]; // lager temp array med [j] for � bruke i swapen
				arr[j] = arr[j + 1]; // gjennomf�rer swap
				arr[j + 1] = temp; // gir temp den nye swap verdien

			}
		}
	}

}

void Bubble::takeUserInput()
{

	std::cout << "type in the size of the array :" << std::endl;
	std::cin >> size; // tar inn size p� arrayet fra bruker

	std::cout << " type in " << size << " numbers to use in the array :" << std::endl;

	myArr = new int[size]; // definerer arrayet med antall elementer fra bruker p� heapen
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
	
	// kj�rer bubbleSort funksjonen med arrayet som parameter
	bubbleSort(myArr);

	std::cout << "The list after sorting : " << std::endl;
	// skriver ut det usorterte arrayet
	for (int i{ 0 }; i < size; i++)
	{
		std::cout << myArr[i] << " " << std::endl;
	}

	delete[] myArr; // sletter arrayet fra heapen
}
