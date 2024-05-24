#include "Tree.h"

Tree::Tree()
{
	m_nodeValue = 0; // start verdi på 0
	m_leftSide = NULL; // peker på nullPtr når vi starter
	m_rightSide = NULL; // peker på nullPtr når vi stater
}

Tree::Tree(int value)
{
	m_nodeValue = value; // member variablen blir satt til value
	m_leftSide = NULL;
	m_rightSide = NULL;
}

