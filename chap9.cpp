#include <iostream>
using namespace std;

// template <typename T>
// T abs(T x){
// 	return x<0?-x:x;
// }

template <class T>
void insertionSort(T a[], int n){
	int i,j;
	T temp;
	for(int i=1;i<n;i++){
		int j = i;
		T temp = a[i];
		while(j>0 && temp<a[j-1]){
			a[j] = a[j-1];
			j--;
		}
		a[j] = temp;
	}
}

int main() {
	// int n = -5;
	// double d = -6.3;
	// cout<<abs(n)<<endl;
	// cout<<abs(d)<<endl;

	return 0;
}