#include <iostream>
#include "Animals.h"
#include "Bird.h"
#include "FlighttlessBirds.h"
#include "Fish.h"
#include "Mammals.h"
#include "Equidae.h"
#include "Cat.h"




int main()

{

    Cat cat;

    while (cat.getOnline())
    {
        cat.mainMenu(); // kj�rer mainMenu funksjonen som kj�rer hele programmet
    }

}