#include <iostream>
#include "HW07.cpp"
using namespace std;

int main()
{
    Router pq(50);
    pq.insert(10);
    pq.insert(5);
    pq.insert(15);
    cout << pq.min() << endl;
    pq.reset(12);
    cout<<pq.removeMin()<<endl;
    cout << pq.min() << endl;
    return 0;
}
