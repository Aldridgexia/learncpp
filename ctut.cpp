//this is a comment
/* this is 
a 
multi-line
comment
*/
#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

int main(){
	/*
	cout <<"Hello World" << endl;

	const double PI = 3.1415926535;
	char myGrade = 'A';
	bool isHappy = true;
	int myAge = 39;
	float favNum = 3.141592;
	double otherfavNum = 1.6180339887;

	cout << "Favorate number" << favNum << endl;
	*/
	double eulersConstant = .57721;
	string eulerGuess;
	double eulerGuessDouble;

	cout<<"What is eulersConstant?";
	getline(cin,eulerGuess);
	eulerGuessDouble = stod(eulerGuess);
	if (eulerGuessDouble == eulersConstant)
	{
		cout<<"You are right!"<<endl;
	}
	else
	{
		cout<<"You are wrong!"<<endl;
	}

	cout << "Size of string " << eulerGuess.size() << endl;
	cout << "Is string empty " << eulerGuess.empty() << endl;
	cout << eulerGuess.append(" was your guess") << endl;

	return 0;
}