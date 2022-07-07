#include <iostream>
#include <string>
#include "station.cpp"
using namespace std;

class Trip {

public:

    Station* header;
    Station* trailer;
    Trip()
    {
         /*
         WRITE YOUR CODE HERE
         */   
    }

    void printList()
    {
        cout << "[ ";
        Station* ptr = header->next;
        while (ptr != trailer) {
            cout << ptr->name << " ";
            ptr = ptr->next;
        }
        cout << "]\n";
    }


    void insert_front(string newItem)
    {
         /*
         WRITE YOUR CODE HERE
         */
    }
    void insert_back(string newItem)
    {
         /*
         WRITE YOUR CODE HERE
         */
    }

    void remove_front()
    {
         /*
         WRITE YOUR CODE HERE
         */
    }
    void remove_back()
    {
         /*
         WRITE YOUR CODE HERE
         */
    }

    Station* visit(int nStep, string stepText)
    {
         /*
         WRITE YOUR CODE HERE
         */
    }
};