#include <iostream>
#include <string>
#include "card.cpp"

using namespace std;

class CardList{

public:
	Card* head;
    CardList(){
        /*
         WRITE YOUR CODE HERE
         */
    }

	void pop_back(){
        /*
         WRITE YOUR CODE HERE
         */
	}


    void insert_back(string newItem){
        /*
         WRITE YOUR CODE HERE
         */
    }

    void shuffle(int pos){ //1<=pos<=size-1
        /*
         WRITE YOUR CODE HERE
         */
    }
    
    void printCardList(){
        /*
         DO NOT DELETE OR EDIT
         */
        cout << "[ ";
        Card* ptr = head;
        while(ptr!=NULL){
            cout << ptr->name << " ";
            ptr = ptr->next;
        }
        cout << "]\n";
    }
};
