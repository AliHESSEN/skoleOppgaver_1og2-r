#pragma once
#include <stdexcept> //standard exeptions
#include <string>

template <typename T> 

class Array
{
	//constructuren kan ta inn hvor stor array skal v�re
	// bruker <T> for � kunne lage Array med den datatypen vi �nsker
public:

	explicit Array <T>(size_t size); // lager et array av T med (size_t) bruer explicit fordi vi har et parameter
	Array<T>(const Array& arrCopy); //copy constructor av Array den tar inn et alias av Array&
	T& operator[](size_t index); // i f�rste dimmensjon fordi vi har en []() tar et alias av dataypen til arrayet Array bruker operator med (size_t) for � f� tak i innholdet i arrayet
	const T& operator[](size_t index) const; // gj�r den const slik at Array1 ikke blir endret n�r det blir satt til Array=Array2
	Array<T>& operator = (const Array& arr2); //const hvis vi bare skal ta en kopi, og b�r v�re et alias slik at de blir det samem n�r vi setter et Array=Array
	size_t getSize() const; //accsessor for size @return m_size;
	~Array(); // destructor

private:

	T* m_elements; // m� legges p� heapen ellers m� vi vite hvor stort array er. Det gj�r vi med en peker T*, dersom vi skal ha den p� stacken m� vi vite hvor stort det er
	size_t m_size; // st�rrelsen av arrayet

	// m� lagre informasjonen et sted





};

template<typename T>
 Array<T>::Array(size_t size) // inline gj�r at koden blir kopiert hver gang funksjonen kalles
	 : m_elements{ new T[size]{} }, m_size{ size }{} // noe p� heap gj�r vi med new datatpyen er T og st�rrelsen er [size]



template<typename T>
 Array<T>::Array(const Array& arrCopy)
	 : Array{arrCopy.m_size}
{
	 //kopier alt fra Arr inn i arrCOpy
	 for (size_t i = 0; i < m_size; ++i)
	 {
		 m_elements[i] = arrCopy.m_elements[i]; // setter arrCopy sin m_elements p� plass [i] til arr m_elements p� plass [i]
	 }
}



 template<typename T>
  Array<T>::~Array() // m� ha med destructoren siden vi lagrer noe p� heap, s� n�r vi sletter noe m� vi fjerne den fra heapen ogs�
 {
	  delete[] m_elements; // fjerner m_elements fra heap
 }

  template<typename T>
  T& Array<T>::operator[](size_t index)
  {
	  return const_cast <T&> (static_cast <const Array<T>&> (*this)[index]); // gj�r Array jeg er i const og finner det i [index], deretter fjerner jeg const beskyttelsen ved const_cast <T&>

	  //return const_cast <T&>(std::as_const(*this[index])); //kan ogs� gj�re det p� denne m�ten
  }

  template<typename T>
 const T& Array<T>::operator[](size_t index) const
  {
	 if (index >= m_size) // hvis det vi ber om � skrive ut er like stort eller st�rre enn arrayet v�r gj�r vi et unntak
	 {
		 throw std::out_of_range{ "Inxed too large: " + std::to_string(index) };
	 }
	 return m_elements[index]; // reterunerer m_elements[index]
  }

 template<typename T>
 Array<T>& Array<T>::operator=(const Array& arr2)
 {
	 // setter arr2 = Array

	 if (&arr2 != this) // hvis adressen p� heap ikke er lik som this object, s� kj�rer vi for-loopen
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
