#include <iostream>
#include "term.cpp"
using namespace std;
class Polynomial{
public:
    Poly_node* head;
    Polynomial(){
        /*
         WRITE YOUR CODE HERE
         */
    }
    void addTerm(int coef, int exponent){
        /*
         WRITE YOUR CODE HERE
         */
    }
    void printPolynomial(){
        cout<<"[ ";
        Poly_node* ptr = head;
        while(ptr!=NULL){
            if(ptr->coef==0){

            }else{
                cout<< ptr->coef<<"X^{"<<ptr->exponent<<"} ";
            }
            ptr = ptr->next;
        }
        cout<<"]\n";
    }
    void plus(Polynomial f2){
        /*
         WRITE YOUR CODE HERE
         */
    }
    void minus(Polynomial f2){
        /*
         WRITE YOUR CODE HERE
         */
    }
};



