#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>

using namespace std;

// template <class T>
// inline string toString(const T &v){
// 	ostringstream os;
// 	os<<v;
// 	return os.str();
// }

template <class T>
inline T fromString(const string &str){
	istringstream is(str);
	T v;
	is>>v;
	return v;
}

int main(){
	int v1 = fromString<int>("111");
    cout << v1 << endl;
    double v2 = fromString<double>("3.14159");
    cout << v2 << endl;

	// string str1 = toString(5);
	// cout<<str1<<endl;
	// string str2 = toString(1.2);
	// cout<<str2<<endl;

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