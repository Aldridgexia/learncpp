#include <iostream>
using namespace std;

class BaseClass {
public:
	int Number;
	int GetNumber() {return Number;}
	BaseClass() {cout<<"BaseClass constructed."<<endl;}
	~BaseClass() {cout<<"BaseClass destructed."<<endl;}
};

class DerivedClass:BaseClass {
public:
	DerivedClass() {
		Number = 0;
		Number++;
		cout<<"DerivedClass construction. Number is "<<GetNumber()<<endl;
	}
	~DerivedClass() {
		Number--;
		cout<<"DerivedClass destruction. Number is "<<GetNumber()<<endl;
	}

};

int main() {
	DerivedClass d;
	return 0;
}