#pragma once
#include <iostream>

class Tree
{

public:
	
	//Constructor

	Tree(); // default
	Tree(int value); // constructor med int parameter

	// Functions


	// Accessors


	// har ikke behov for � member variablene i private. Slipper ogs� � bruke Accessors for � f� tak i variablene 
	
	// variables
	  int m_nodeValue; // node verdi

	// trenger to variabler som peker p� Tree. En for verdier som er lavere/venstre) enn root nodeValue
	// og en som er for verdier som er st�rre (h�yre) enn root nodeValue
	  Tree* m_leftSide; // venstre subtree variabel med peker til tree
	  Tree* m_rightSide; // h�yre subtree variabel med peker til tree

private:



};

