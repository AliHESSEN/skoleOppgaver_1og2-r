#include "Author.h"

Author::Author()
{
	// memberVar til disse tre nye
	m_name;
	m_email;
	m_books;

}

Author::Author(std::string name, std::string email, std::vector<Book*> books)
{
	m_name = name;
	m_email = email;
	m_books = books;
}

Author::Author(std::string name, std::string email)
	:m_name(name), m_email(email)
{

}

std::string Author::getName()
{
	return m_name;
}

std::string Author::getEmail()
{
	return m_email;
}

std::vector<Book*> Author::getBooks()
{
	return m_books;
}

int Author::getOwnedBooks() // return books in vec
{
	return m_books.size();
}

void Author::addBook(Book* book)
{
	m_books.push_back(book);
}

void Author::setName(std::string name)
{
	m_name = name;
}

void Author::setEmail(std::string email)
{
	m_email = email;
}

void Author::setBooks(std::vector<Book*> books)
{
	m_books = books;
}