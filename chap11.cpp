#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>

using namespace std;

template <class T>
inline string toString(const T &v){
	ostringstream os;
	os<<v;
	return os.str();
}

int main(){
	string str1 = toString(5);
	cout<<str1<<endl;
	string str2 = toString(1.2);
	cout<<str2<<endl;

	// double values[] = { 1.23, 35.36, 653.7, 4358.24 };
	// string names[] = { "Zoot", "Jimmy", "Al", "Stan" };
	// cout<<setiosflags(ios_base::scientific);
	// for(int i=0;i<4;i++){
	// 	cout<<setiosflags(ios_base::left)<<setw(6)<<names[i]
	// 	<<resetiosflags(ios_base::left)<<setw(10)
	// 	<<setprecision(1)<<values[i]<<endl;

		// cout.width(10);
		// cout<<values[i]<<endl;
	// }
	
	return 0;
}