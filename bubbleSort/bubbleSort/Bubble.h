#pragma once
#include <iostream>

class Bubble
{
public:

	//functions

	void bubbleSort(int arr[]);
	void takeUserInput();


private:

	//int m_array[5];
	int* myArr = NULL; // lager array med int pointer
	int size, numbers; // dynmaisk størrelse på arrayet
};

