#include<iostream>
using namespace std;
class Router
{

	int capacity; // maximum possible size of min heap
	int heap_size; // Current number of elements in min heap
public:
    int *data; // pointer to array of elements in heap
	Router(int cap){
    /*
         WRITE YOUR CODE HERE
    */
    }
	int parent(int i) { return (i-1)/2; }
	int left(int i) { return (2*i + 1); }
	int right(int i) { return (2*i + 2); }
	int removeMin(){
    /*
         WRITE YOUR CODE HERE
    */
    }
	int min() {
    /*
         WRITE YOUR CODE HERE
    */
	}
	void insert(int k){
    /*
         WRITE YOUR CODE HERE
    */
    }
	void downHeap(int i){
    /*
         WRITE YOUR CODE HERE
    */
    }

	void reset(int k){
    /*
         WRITE YOUR CODE HERE
    */
    }
};

