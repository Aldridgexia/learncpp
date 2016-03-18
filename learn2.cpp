#include <iostream>
#include <cmath>
#include <cstdlib>
#include <iomanip>
#include <string>

using namespace std;

int main(){
	int f[20] = {1,1};
	for (int i=2;i<20;i++){
		f[i] = f[i-1] + f[i-2];
	}
	for (int i=0;i<20;i++){
		if(i%4 == 0)cout<<endl;
		cout.width(5);
		cout<<f[i];
	}
	cout<<endl;


	// int a[10], b[10];
 //  	for(int i = 0; i < 10; i++) {
	//     a[i] = i * 2 - 1;
	//     b[10 - i - 1] = a[i];
 //  	}
 //  	for(int i = 0; i < 10; i++) {
	//     cout << "a[" << i << "] = " << a[i] << "  ";
	//     cout << "b[" << i << "] = " << b[i] << endl;
 //  	}

  	return 0;
}