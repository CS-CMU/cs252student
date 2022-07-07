#include <string>
using namespace std;

class Station {
public:
	string name;
	Station* prev;
	Station* next;
};