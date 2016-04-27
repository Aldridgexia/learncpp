#include <iostream>
using namespace std;

class Animal {
public:
	int age;
};

class Dog:public Animal {
public:
	void SetAge(int n) {age = n;}
};

int main() {
	Dog d;
	d.SetAge(2);
	cout<<d.age<<endl;
	return 0;
}