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


	// har ikke behov for å member variablene i private. Slipper også å bruke Accessors for å få tak i variablene 
	
	// variables
	  int m_nodeValue; // node verdi

	// trenger to variabler som peker på Tree. En for verdier som er lavere/venstre) enn root nodeValue
	// og en som er for verdier som er større (høyre) enn root nodeValue
	  Tree* m_leftSide; // venstre subtree variabel med peker til tree
	  Tree* m_rightSide; // høyre subtree variabel med peker til tree

private:



};

