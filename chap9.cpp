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

template <class T>
void mySwap(T &x, T &y){
	T temp = x;
	x = y;
	y = temp;
}

template <class T>
void SelectionSort(T a[], int n){
	for(int i=0;i<n-1;i++){
		int leastIndex = i;
		for(int j=i+1;j<n;j++){
			if(a[j]<a[leastIndex])
				leastIndex = j;
		mySwap(a[i], a[leastIndex]);
		}
	}
}

template <class T>
void BubbleSort(T a[], int n){
	int i = n-1;
	while(i>0){
		int lastExchangeIndex = 0;
		for(int j=0;j<i;j++){
			if(a[j+1]<a[j]){
				mySwap(a[j],a[j+1]);
				lastExchangeIndex = j;
			}
			i = lastExchangeIndex;
		}
	}
}

// 二分查找
template <class T>
int binSearch(const T list[], int n, const T &key){
	int low = 0;
	int high = n-1;
	while(low<=high){
		int mid = (low + high)/2;
		if(key == list[mid]){
			return mid;
		}
		else if(key < list[mid]){
			high = mid - 1;
		}
		else
			low = mid + 1;
	}
	return -1;
}

int main() {
	// int n = -5;
	// double d = -6.3;
	// cout<<abs(n)<<endl;
	// cout<<abs(d)<<endl;

	return 0;
}