#include<iostream>
#include "HW00.cpp"
using namespace std;

int main()
{
    Employee myObj;
    myObj.setSalary(50000);
    cout << "My salary is " << myObj.getSalary();
    return 0;
}
