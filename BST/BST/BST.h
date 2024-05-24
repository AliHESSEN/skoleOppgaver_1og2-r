#pragma once
#include <iostream>
#include "Tree.h"


class BST : public Tree
{
public:

	// Constructor
	BST(); //default

	// Functions
	bool isEmpty(); // funksjon for � se om nodeRoot er empty
	void menu(); // meny for programmet
	void addNode(Tree* newNode); // funksjon for � legge til nodes
	Tree* searchNode(int value); // funksjon for � s�ke etter nodes
	void printPreOrder(Tree* node); // en print funksjon som printer ut preorder

	// Accessors


	 // variables

	 Tree* m_nodeRoot; // root variabel for root som peker p� Tree
private:



};

