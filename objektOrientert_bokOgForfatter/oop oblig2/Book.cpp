#include "Book.h"

Book::Book()
{
	m_title;
	m_author;
	m_numOfPages;
}

Book::Book(std::string title, Author* author, int numOfPages)
	:m_title(title), m_author(author), m_numOfPages(numOfPages)
{

}
// memberVar til disse tre nye
//m_author = author;
//m_numOfPages = numOfPages;



std::string Book::getTitle()
{
	return m_title;
}

std::string Book::getAuthorName()
{
	return m_author->getName();
}



int Book::getNumOfPages()
{
	return m_numOfPages;
}

void Book::setTitle(std::string title)
{
	m_title = title;
}



void Book::setNumOfPages(int numOfPages)
{
	m_numOfPages = numOfPages;
}