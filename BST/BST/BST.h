#pragma once
#include <iostream>
#include "Tree.h"


class BST : public Tree
{
public:

	// Constructor
	BST(); //default

	// Functions
	bool isEmpty(); // funksjon for å se om nodeRoot er empty
	void menu(); // meny for programmet
	void addNode(Tree* newNode); // funksjon for å legge til nodes
	Tree* searchNode(int value); // funksjon for å søke etter nodes
	void printPreOrder(Tree* node); // en print funksjon som printer ut preorder

	// Accessors


	 // variables

	 Tree* m_nodeRoot; // root variabel for root som peker på Tree
private:



};

