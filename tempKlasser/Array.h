#pragma once
#include <stdexcept> //standard exeptions
#include <string>

template <typename T> 

class Array
{
	//constructuren kan ta inn hvor stor array skal være
	// bruker <T> for å kunne lage Array med den datatypen vi ønsker
public:

	explicit Array <T>(size_t size); // lager et array av T med (size_t) bruer explicit fordi vi har et parameter
	Array<T>(const Array& arrCopy); //copy constructor av Array den tar inn et alias av Array&
	T& operator[](size_t index); // i første dimmensjon fordi vi har en []() tar et alias av dataypen til arrayet Array bruker operator med (size_t) for å få tak i innholdet i arrayet
	const T& operator[](size_t index) const; // gjør den const slik at Array1 ikke blir endret når det blir satt til Array=Array2
	Array<T>& operator = (const Array& arr2); //const hvis vi bare skal ta en kopi, og bør være et alias slik at de blir det samem når vi setter et Array=Array
	size_t getSize() const; //accsessor for size @return m_size;
	~Array(); // destructor

private:

	T* m_elements; // må legges på heapen ellers må vi vite hvor stort array er. Det gjør vi med en peker T*, dersom vi skal ha den på stacken må vi vite hvor stort det er
	size_t m_size; // størrelsen av arrayet

	// må lagre informasjonen et sted





};

template<typename T>
 Array<T>::Array(size_t size) // inline gjør at koden blir kopiert hver gang funksjonen kalles
	 : m_elements{ new T[size]{} }, m_size{ size }{} // noe på heap gjør vi med new datatpyen er T og størrelsen er [size]



template<typename T>
 Array<T>::Array(const Array& arrCopy)
	 : Array{arrCopy.m_size}
{
	 //kopier alt fra Arr inn i arrCOpy
	 for (size_t i = 0; i < m_size; ++i)
	 {
		 m_elements[i] = arrCopy.m_elements[i]; // setter arrCopy sin m_elements på plass [i] til arr m_elements på plass [i]
	 }
}



 template<typename T>
  Array<T>::~Array() // må ha med destructoren siden vi lagrer noe på heap, så når vi sletter noe må vi fjerne den fra heapen også
 {
	  delete[] m_elements; // fjerner m_elements fra heap
 }

  template<typename T>
  T& Array<T>::operator[](size_t index)
  {
	  return const_cast <T&> (static_cast <const Array<T>&> (*this)[index]); // gjør Array jeg er i const og finner det i [index], deretter fjerner jeg const beskyttelsen ved const_cast <T&>

	  //return const_cast <T&>(std::as_const(*this[index])); //kan også gjøre det på denne måten
  }

  template<typename T>
 const T& Array<T>::operator[](size_t index) const
  {
	 if (index >= m_size) // hvis det vi ber om å skrive ut er like stort eller større enn arrayet vår gjør vi et unntak
	 {
		 throw std::out_of_range{ "Inxed too large: " + std::to_string(index) };
	 }
	 return m_elements[index]; // reterunerer m_elements[index]
  }

 template<typename T>
 Array<T>& Array<T>::operator=(const Array& arr2)
 {
	 // setter arr2 = Array

	 if (&arr2 != this) // hvis adressen på heap ikke er lik som this object, så kjører vi for-loopen
	 {
		 delete[] m_elements; // fjerner m_elements fra heapen


		 m_size = arr2.m_size;
		 m_elements = new T[m_size];
		 for (size_t i = 0; i < m_size; ++i)
		 {
			 m_elements[i] = arr2.m_elements[i]; // kopierer innholdet fra m_elements til arr2.m_elements

		 }

	 }
 }

 template<typename T>
 size_t Array<T>::getSize() const
 {
	 return m_size;
 }
