#include "Sequence.h"

bool Sequence::isEven(const int& val)
{
    //returnere true eller false, basert på om verdien er lik eller ikke
    return (val % 2) == 0;
}

void Sequence::dequeFunction()
{
    // lager en deque av int. man kan se på det som et dynamisk array
    std::deque<int> deq1;
    //std::deque<std::vector<int>> deq2;
    std::deque<std::deque<int>> deq2;
    std::deque<int> deq3;
    deq1.push_back(7);
    deq1.push_front(1);
    deq1.push_back(4);
    deq1.push_front(3);
    deq1.push_back(8);
    deq1.push_front(9);
    deq1.push_back(5);
    deq1.push_front(3);
    deq1.push_back(7);

    deq3.push_back(6);
    deq3.push_front(8);
    deq3.push_back(4);
    deq3.push_front(3);
    deq3.push_back(8);
    
    deq2.push_back(deq3);
    

    //std::cout << "The number at index 0 is : " << deq3.at(0) << std::endl;

    // assing overwriter det vi har lagt inn i listen
    //eq1.assign({ 11,12 });
   


}


void Sequence::bubbleSort(std::deque<int> dequ)
{
    // step 1. lager "outer for-loop"
    for (int i{ 0 }; i < dequ.size(); i++)
    {
        // step 2. lager "inner for-loop"
        // må huske på at j skal være size-i-1
        for (int j{ 0 }; j < dequ.size()-i-1; j++)
        {
            // step 3. sammenligner

            if (dequ.at(j) > dequ.at(j + 1))// her sammenligner vi arr[j] indexen med elementet i arr[j+1], dvs neste element som er et steg til høyre
            {
                // så hvis arr[j] er større enn neste element i listen, må vi gjennomføre en swap. Siden vi går fra en lav til høy struktur

                int temp = dequ.at(j);; // lager temp array med [j] for å bruke i swapen
                dequ.at(j) = dequ.at(j + 1); // gjennomfører swap
                dequ.at(j + 1) = temp; // gir temp den nye swap verdien
            }

        }
    }

}

void Sequence::printData()
{

    std::deque<std::deque<int>> deq2;
    std::deque<int> deq3;

    deq3.push_back(6);
    deq3.push_front(8);
    deq3.push_back(4);
    deq3.push_front(3);
    deq3.push_back(8);
    deq3.push_back(10);


    deq2.push_back(deq3);
   // dequeFunction();
    std::cout << "The list before sorting : " << std::endl;

    for (int i : deq3)

    {
        std::cout << i << std::endl;

    }
    std::cout << "Size of list are : " << deq3.size() << std::endl;

    // kjører bubbleSort funksjonen med arrayet som parameter
    bubbleSort(deq3);

    std::cout << "The list after sorting : " << std::endl;
    // skriver ut det sorterte arrayet
    for (int i{ 0 }; i < deq3.size(); i++)
    {
        sort(deq3.begin(), deq3.end());
        std::cout << deq3.at(i) << " " << std::endl;
        
    }

}
