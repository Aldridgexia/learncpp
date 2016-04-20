#include <iostream>
using namespace std;

int divide(int x, int y){
	if(y==0)
		throw x;
	else
		return x/y;
}


int main(){
	try{
		int a,b;
		cout<<"Please enter two integers: ";
		cin>>a;
		cin>>b;
		cout<<a<<" / "<<b<<" = "<<divide(a,b)<<endl;
	} catch(int err){
		cout<<"Zero dividend! Please enter again!"<<endl;
	}

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