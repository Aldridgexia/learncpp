#include <iostream>
#include <string>
#include <cmath>
#include <stdexcept>
using namespace std;

// int divide(int x, int y){
// 	if(y==0)
// 		throw x;
// 	else
// 		return x/y;
// }

// class myException{
// public:
// 	myException(const string &message): message(message){};
// 	~myException() {};
// 	const string &getMessage() const {return message;}
// private:
// 	string message;
// };

// class Demo{
// public:
//     Demo() { cout << "Constructor of Demo" << endl; }
//     ~Demo() { cout << "Destructor of Demo" << endl; }
// };

// void func() throw (myException) {
// 	Demo d;
//     cout << "Throw myException in func()" << endl;
//     throw myException("exception thrown by func()");
// };

double area(double a, double b, double c) throw(invalid_argument){
	if(a<=0||b<=0||c<=0)
		throw invalid_argument("the side length should be positive.");
	if(a+b<=c||a+c<=b||b+c<=a)
		throw invalid_argument("the side length should fit the triangle inequation.");
	double s = (a+b+c)/2;
	return sqrt(s*(s-a)*(s-b)*(s-c));
}


int main(){
	double a,b,c;
	cout<<"input three sides: ";
	cin>>a>>b>>c;
	try{
		double s = area(a,b,c);
		cout<<"Area: "<<s<<endl;
	} catch(exception &e){
		cout<<"Error: "<<e.what()<<endl;
	}

	// cout<<"In main function."<<endl;
	// try{
	// 	func();
	// } catch(myException &e){
	// 	cout << "Caught an exception: " << e.getMessage() << endl;
	// }
	// cout << "Resume the execution of main()" << endl;

	// try{
	// 	int a,b;
	// 	cout<<"Please enter two integers: ";
	// 	cin>>a;
	// 	cin>>b;
	// 	cout<<a<<" / "<<b<<" = "<<divide(a,b)<<endl;
	// } catch(int err){
	// 	cout<<"Zero dividend! Please enter again!"<<endl;
	// }

	// try{
	// 	cout<<"5 / 2 = "<<divide(5,2)<<endl;
	// 	cout<<"8 / 0 = "<<divide(8,0)<<endl;
	// 	cout<<"7 / 1 = "<<divide(7,1)<<endl;
	// } catch(int e){
	// 	cout<<e<<" is divided by zero!"<<endl;
	// }
	// cout<<"Done!"<<endl;

	return 0;
}