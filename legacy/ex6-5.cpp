#include <iostream>
#include <string>
using namespace std;

// char* link(char* a, char* b) {
// 	int m = 0,n = 0;

// 	while(a[m] != '\0') {
// 		m++;
// 	}
// 	while(b[n] != '\0') {
// 		n++;
// 	}

// 	char* c = new char[m+n+1];
// 	for(int i=0;i<m;i++){
// 		c[i] = a[i];
// 	}
// 	for(int i=m;i<m+n;i++){
// 		c[i] = b[i-m];
// 	}
// 	c[m+n] = '\0';
// 	return c;
// }

int main() {
	string s1 = "abc", s2 = "def";
	cout<<s1+s2<<endl;

	// char a[] = "abc";
	// char b[] = "def";

	// cout<<link(a,b)<<endl;

	return 0;
}