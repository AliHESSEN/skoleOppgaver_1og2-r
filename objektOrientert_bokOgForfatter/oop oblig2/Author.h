#pragma once
#include <string>
#include "Book.h"
#include <vector>

class Book;

class Author
{
public:

	Author(); // default constructor
	Author(std::string name, std::string email, std::vector<Book*> books); // overload
	Author(std::string name, std::string email); // overload
	// functions for returning info from variables

	std::string getName(); //@return - return name of author
	std::string getEmail();
	std::vector<Book*> getBooks();
	int getOwnedBooks();


	//husker navn
	void addBook(Book* book);
	void setName(std::string);
	void setEmail(std::string);
	void setBooks(std::vector<Book*> books);



private:

	std::string m_name;
	std::string m_email;
	std::vector<Book*> m_books;

};