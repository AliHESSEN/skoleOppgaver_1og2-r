#include "BST.h"

BST::BST()
{
	// starter p� nullPtr
	m_nodeRoot = NULL;
}

bool BST::isEmpty()
{
	// ser om root er tom
	if (m_nodeRoot == NULL)
	{
		return true;
	}
	else
		return false;
}

void BST::menu()
{
	BST bst;
	int option, val, nodeVal; // int variabel for valg i menyen, og int val for verdi p� node som skal brukes i BS


	// lager en do while-loop for meny programmet v�rt
	do
	{
		std::cout << std::endl;
		std::cout << "What do you want to do ?: " << std::endl;
		std::cout << "1. Add Node " << std::endl;
		std::cout << "2. Search for a Node " << std::endl;
		std::cout << "3. Print out BTS values " << std::endl;
		std::cout << "4. clear screen " << std::endl;
		std::cout << "0. Quit " << std::endl;

		std::cin >> option; //  tar user input
		// lager Node n1
		Tree* newNode = new Tree(); //blir laget et objekt av Tree p� heapen, og p� stacken blir en pointer av Tree laget
		// new Tree() = lager objektet p� heapen, *newNode = adressen av objektet
		// ved � bruke en slik syntax vil objektet ha global scope, og vil v�re tilgjenglig s� lenge programmet kj�rer eller vi selv sletter det fra heapen
		// bruker det siden vi skal kj�re switch casen flere ganger helt til bruker selv avslutter det

		switch (option) // switch case med user input
		{
		case 0:
			break;

		case 1:
			//std::cout << "Insert :" << std::endl;
			std::cout << "Enter a value of the node to insert in the BST :" << std::endl;
			std::cin >> val; // tar user input
			newNode->m_nodeValue = val; // newNode blir satt til val fra user input
			
			bst.addNode(newNode); // kj�rer funksjonen med newNode som parameter
			std::cout << std::endl;
			break;

		case 2:
			//std::cout << "Searching for node :" << std::endl;
			std::cout << "Type in a node value to search for :" << std::endl;
			std::cin >> nodeVal;
			newNode = bst.searchNode(nodeVal); // adressen til newNode blir satt til funksjonen
			// skriver ut om vi finner verdien s�ker eller ikke
			if (newNode != NULL)
			{
				std::cout << "The node you are searching for have been found :" << std::endl;
			}
			else
			{
				std::cout << "Couldnt find the node you are searching for :" << std::endl;
			}
			break;


		case 3:
			std::cout << "Printing out node(s) :" << std::endl;
			bst.printPreOrder(bst.m_nodeRoot); // kj�rer printfunksjonen med root verdiene
			break;

		case 4:
			std::cout << "Clearing screen :" << std::endl;
			break;


		default:
			std::cout << "Please enter a valid option number :" << std::endl; // hvis bruker ikke skriver riktig valg

		}


	} while (option != 0); // s� lenge bruker ikke velger 0, vil programmet kj�re

 }


void BST::addNode(Tree* newNode)
{
	// ser om root er empty f�rst
	if (m_nodeRoot == NULL)
	{
		m_nodeRoot = newNode; // da blir den satt til newNode variabelen
		std::cout << "Value has been inserted as a root node :" << std::endl;

	}

	else
	{
		Tree* temp = m_nodeRoot; // hvis root verdien ikke er empty, s� lager vi en temp variabel som peker p� Tree
		while (temp != NULL) // og dette skal gj�res s� lenge temp ikek er empty
		{
			// 1. ser f�rst om gitt verdi allerede eksisterer i treet
			if (newNode->m_nodeValue == temp->m_nodeValue)
			{
				std::cout << "Value already exist " << std::endl;
				return; // hopper ut av funksjonen, og sp�r bruker om en ny verdi
			}
			// 2. ser om den nye verdien er mindre enn temp verdien og temp verdien p� venstreside er empty
			//Verdier som er mindre enn root skal v�re plassert p� venstresiden
			else if ((newNode->m_nodeValue < temp->m_nodeValue) && (temp->m_leftSide == NULL))
			{
				temp->m_leftSide = newNode; // da blir det satt en ny verdi p� venstresiden
				std::cout << "Value has been inserted to the left :" << std::endl;
				break; // breaker


			}
			// 3. ser om newNode verdien er mindre enn temp verdien
			else if (newNode->m_nodeValue < temp->m_nodeValue)
			{
				temp = temp->m_leftSide; // blir satt p� venstresiden. 
				// dette betyr at temp->left fra forrige else if ikke var empty

			}
			// 4. ser om den nye verdien er st�rre enn temp verdien og temp verdien p� h�yreside er empty
			// siden verdier som er st�rre enn root skal plasseres p� h�yresiden
			else if ((newNode->m_nodeValue > temp->m_nodeValue) && (temp->m_rightSide == NULL))
			{
				temp->m_rightSide = newNode; // temp right blir satt som newNode
				std::cout << "Value has bee inserted to the right :" << std::endl;
				break; // breaker ut av funksjonen
			}
			else
			{
				temp = temp->m_rightSide; // som betyr at temp->right ikke var empty
			}
		}
	}
}





Tree* BST::searchNode(int value)
{
	//1. ser om root er tom
	if (m_nodeRoot == NULL)
	{
		return m_nodeRoot; // @return = NULL
	}
	// dersom den ikke er null
	else
	{
		//2. lager en temp variabel som skal brukes for � sammenligne verdier gjennom hele treet

		Tree* temp = m_nodeRoot;

		while (temp != NULL) // s� lenge temp variabelen ikke er tom
		{
			// 3. ser om den verdien vi s�ker (val) har samme verdi som v�r temp root verdi (n1)
			if (value == temp->m_nodeValue)
			{
				return temp; // @return temp dersom det er verdien vi s�ker
			}
			// 4. hvis det ikke er verdien vi s�ker
			else if (value < temp->m_nodeValue) // ser om verdien vi s�ker er mindre enn v�r temp root variabel (n1)
			{
				temp = temp->m_leftSide; // 5. peker p� root verdien p� venstreside(n2)
			}
			// 6. hvis den ikke er mindre enn v�r temp root variabel, s� m� den v�re st�rre
			else
			{
				temp = temp->m_rightSide; // peker p� root verdien p� h�yreside(n3)

			}
		}
		return NULL; // dersom vi ikke finner veriden
	}
}

void BST::printPreOrder(Tree* node)
{
	// printer ut i denne strukturen node ->left ->right

//1. Ser om node er empty f�rst
	if (node == NULL)
		return;
	// 2. printer ut verdien p� root node
	std::cout << " " << node->m_nodeValue << std::ends;


	// 3. beveger oss mot venstre subtree
	printPreOrder(node->m_leftSide); // kj�rer samme funksjon, for venstre subtree

	//4. gj�r det samme for h�yre subtree
	printPreOrder(node->m_rightSide); // h�yresiden
}


