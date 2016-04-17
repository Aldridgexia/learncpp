#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
#include <functional>
using namespace std;

// double square(double x){
// 	return x*x;
// }

template <class T, class InputIterator, class OutputIterator>
void mySort(InputIterator first, InputIterator last, OutputIterator result){
	vector<T> s;
	for(;first!=last;++first)
		s.push_back(*first);
	sort(s.begin(), s.end());
	copy(s.begin(), s.end(), result);
}


int main(){
	double a[5] = {1.2, 2.4, 0.8, 3.3, 3.2};
	mySort<double>(a, a+5, ostream_iterator<double>(cout," "));
	cout<<endl;

	mySort<int>(istream_iterator<int>(cin), istream_iterator<int>(), ostream_iterator<int>(cout," "));
	cout<<endl;
	


	// transform(istream_iterator<double>(cin), istream_iterator<double>(), 
	// 	ostream_iterator<double>(cout,"\t"), square);
	// cout<<endl;

	// const int N = 5;
	// vector<int> s(N);
	// for(int i=0;i<N;i++)
	// 	cin>>s[i];
	// transform(s.begin(), s.end(), ostream_iterator<int>(cout, " "), negate<int>());
	// cout<<endl;
	return 0;
}