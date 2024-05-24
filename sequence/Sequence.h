#pragma once
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <deque>



class Sequence
{
public:

	// functions
	
	bool isEven(const int& val);// skaffer data om det er verdien er lik eller ikke
	void dequeFunction(); // funksjon for deque
	//void insertDeque(std::vector<std::deque<int>> list);
	void bubbleSort(std::deque<int> dequ);
	void printData();


private:
	
	std::deque<int> deq1;
	std::deque<int> deq2;
	std::deque<int> deq3;
	std::vector<int> vecList;
	

};

