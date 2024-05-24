#pragma once
#include <iostream>
#include <string>
#include "Author.h"


class Author;

class Book
{
public:

	Book(); // default constructor
	Book(std::string title, Author* author, int numOfPages); // overload
	// functions for returning info from variables

	std::string getTitle(); //@return - return title of book
	//Author getAuthor();
	int getNumOfPages();
	std::string getAuthorName();



	void setTitle(std::string);
	//void setAuthor(Author);
	void setNumOfPages(int);



private:

	std::string m_title;
	Author* m_author;
	int m_numOfPages;








};

