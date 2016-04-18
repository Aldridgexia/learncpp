#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
#include <functional>
#include <list>
#include <deque>
#include <string>
#include <stack>
using namespace std;

// double square(double x){
// 	return x*x;
// }

// template <class T, class InputIterator, class OutputIterator>
// void mySort(InputIterator first, InputIterator last, OutputIterator result){
// 	vector<T> s;
// 	for(;first!=last;++first)
// 		s.push_back(*first);
// 	sort(s.begin(), s.end());
// 	copy(s.begin(), s.end(), result);
// }

// template <class T>
// void printContainer(const char* msg, const T& s){
// 	cout<<msg<<": ";
// 	copy(s.begin(), s.end(), ostream_iterator<int>(cout," "));
// 	cout<<endl;
// }

// template <class T, class Sequence = deque<T>> class stack;

int main(){
	stack<char> s;
	string str;
	cin>>str;
	for(string::iterator iter=str.begin(); iter!=str.end(); ++iter)
		s.push(*iter);
	while(!s.empty()){
		cout<<s.top();
		s.pop();
	}
	cout<<endl;

	// istream_iterator<int> i1(cin), i2;
	// vector<int> s1(i1, i2);
	// sort(s1.begin(), s1.end());
	// deque<int> s2;
	// for(vector<int>::iterator iter = s1.begin();iter!=s1.end();++iter){
	// 	if(*iter % 2 == 0){
	// 		s2.push_back(*iter);
	// 	}
	// 	else
	// 		s2.push_front(*iter);
	// }
	// copy(s2.begin(), s2.end(), ostream_iterator<int>(cout, " "));
	// cout<<endl;

	// deque<int> s;
	// for(int i=0;i<10;i++){
	// 	int x;
	// 	cin>>x;
	// 	s.push_front(x);
	// }
	// printContainer("deque at first", s);

	// list<int> l(s.rbegin(), s.rend());
	// printContainer("list at first", l);

	// list<int>::iterator iter = l.begin();
	// while(iter != l.end()){
	// 	int v = *iter;
	// 	iter = l.erase(iter);
	// 	l.insert(++iter, v);
	// }
	// printContainer("list as last", l);
	// s.assign(l.begin(), l.end());
	// printContainer("deque at last", s);

	// double a[5] = {1.2, 2.4, 0.8, 3.3, 3.2};
	// mySort<double>(a, a+5, ostream_iterator<double>(cout," "));
	// cout<<endl;

	// mySort<int>(istream_iterator<int>(cin), istream_iterator<int>(), ostream_iterator<int>(cout," "));
	// cout<<endl;

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