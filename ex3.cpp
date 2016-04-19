#include <iostream>
#include <cmath>
using namespace std;

int max1(int x, int y);
int max1(int x, int y, int z);
double max1(double x, double y);
double max1(double x, double y, double z);

int max1(int x, int y){
	if(x==y) return x;
	else if(x>=y)
		return x;
	else
		return y;
}

int max1(int x, int y, int z){
	return max1(max1(x,y),z);
}

double max1(double x, double y){
	if(abs(x-y)<1e-10) return x;
	else if(x>=y)
		return x;
	else
		return y;
}

double max1(double x, double y, double z){
	return max1(max1(x,y),z);
}

int main(){
	int a,b,c;
	double m,n,l;
	cout<<"enter int a: ";
	cin>>a;
	cout<<"enter int b: ";
	cin>>b;
	cout<<"enter int c: ";
	cin>>c;
	cout<<"\n";
	cout<<"max of "<<a<<" and "<<b<<" is "<<max1(a,b)<<endl;
	cout<<"max of "<<a<<" and "<<b<<" and "<<c<<" is "<<max1(a,b,c)<<endl;
	cout<<a<<" power "<<b<<" is "<<pow(a,b)<<endl;
	cout<<"\n\n";
	cout<<"enter double m: ";
	cin>>m;
	cout<<"enter double n: ";
	cin>>n;
	cout<<"enter double l: ";
	cin>>l;
	cout<<"\n";
	cout<<"max of "<<m<<" and "<<n<<" is "<<max1(m,n)<<endl;
	cout<<"max of "<<m<<" and "<<n<<" and "<<l<<" is "<<max1(m,n,l)<<endl;
	cout<<"\n\n";

	return 0;
}
