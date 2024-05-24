#include <iostream>
#include <string>
#include "Book.h"
#include <vector>
#include "Author.h"

/*void fillVector(std::vector<Book>& newBookList)
{
	std::string title;
	std::string author;
	int numOfPages;
	std::cout << "How many books will you be registering ?" << std::endl;
	int classSize;
	std::cin >> classSize;
	//for-loop
	for (int i = 0; i < classSize; i++)
	{
		std::cout << " Type the title of the book" << std::endl;
		std::cin >> title;
		std::cout << " Type the name of the author" << std::endl;
		std::cin >> author;
		std::cout << " Type the amount of pages in the book " << std::endl;
		std::cin >> numOfPages;
		Book newBook(title, author, numOfPages); // information from for-loop
		newBookList.push_back(newBook); // information from newBook saved in newBookList vec
	}
}*/

void fillBooks(std::vector<Book*>& newBookList, std::vector<Author*>& authorList)
{

	newBookList.push_back(new Book("big", authorList.at(0), 245));
	newBookList.push_back(new Book("small", authorList.at(0), 345));

}

void printAuthor(Author* author)
{
	std::cout << " Name is " << author->getName() << std::endl;
	std::cout << " email is " << author->getEmail() << std::endl;
	std::cout << " Books are " << std::endl;
	for (auto const& book : author->getBooks())
	{
		std::cout << "    title: " << book->getTitle() << std::endl;
	}


}


void printBooks(std::vector<Book*>& newBookList)
{
	unsigned int size = newBookList.size();

	for (unsigned int i = 0; i < size; i++)
	{
		std::cout << " Registration complete \n " << std::endl;
		std::cout << " Book title is " << newBookList[i]->getTitle() << std::endl;
		std::cout << " The name of the author is " << newBookList[i]->getAuthorName() << std::endl;
		std::cout << " Number of pages are " << newBookList[i]->getNumOfPages() << std::endl;
	}

}

void addAuthors(std::vector<Author*>& newAuthorsList, std::vector<Book*>& newBookList)
{

	newAuthorsList.push_back(new Author("Per", "Per@hotmail.com", newBookList));
	newAuthorsList.push_back(new Author("joakim", "joakim@hotmail.com", newBookList));

}




int main()
{
	//std::vector<Book*> bookList; // vector of books
	std::vector<Author*> authorList; //vecv of authors
	auto auth = new Author("Per", "Per@hotmail.com");
	auto book2 = new Book("Big book", auth, 645);
	auto book = new Book("Huge BOOK", auth, 666);
	//bookList.push_back(book);
	//bookList.push_back(book2);
	auth->addBook(book);
	auth->addBook(book2);

	printAuthor(auth);



	///for (auto const& book)
	//{
		//std::cout << "    title: " << book->getTitle() << std::endl;
	//}


	//addAuthors(authorList, bookList);
	//fillBooks(bookList,authorList);

	//printBooks(bookList);
	//fillVector(bookList);

}