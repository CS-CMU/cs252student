#include <iostream>
#include <stack>
#include <queue>
#include <string>
using namespace std;

bool isBalanced(string s) {
  /*
  WRITE YOUR CODE HERE
  */
  return false;
}

int main() {
  string s;
  cin >> s;
  while (s != "-1") {
    if(isBalanced(s)) {
      cout << "Parentheses are balanced" << endl;
    } else {
      cout << "Parentheses are not balanced" << endl;
    }
    cin >> s;
  }
    
}
