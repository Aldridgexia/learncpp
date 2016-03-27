#include <iostream>
#include <cmath>
#include <cstdlib>
#include <iomanip>
#include <string>
#include <vector>

using namespace std;

// void rowSum(int a[][4],int nRow){
// 	for(int i=0;i<nRow;i++){
// 		for(int j=0;j<4;j++){
// 			a[i][0] = a[i][j];
// 		}
// 	}
// }
// void splitFloat(float x,int *intPart, float *fracPart){
// 	*intPart = static_cast<int>(x);
// 	*fracPart = x - *intPart;
// }

// int* search(int* a, int num){
// 	for(int i=0;i<num;i++){
// 		if(a[i] == 0){
// 			return &a[i];
// 		}
// 	}
// }

// int compute(int a, int b,int(*func)(int,int)){
// 	return func(a,b);
// }
// int max(int a, int b){
// 	return((a>b)?a:b);
// }
// int min(int a, int b){
// 	return((a<b)?a:b);
// }
// int sum(int a, int b){
// 	return a+b;
// }
// class Point {
// public:
//   Point(int x = 0, int y = 0) : x(x), y(y) { }
//      int getX() const { return x; }        
//      int getY() const { return y; }        
// private:
//      int x, y;
// };

double average(const vector<double> &arr){
	double sum = 0;
	for(unsigned i=0;i<arr.size();i++){
		sum += arr[i];
	}
	return sum/arr.size();
}

int main(){
	unsigned n;
	cout<<"n = ";
	cin>>n;

	vector<double> arr(n);
	cout<<"Please input "<<n<<" real numbers: "<<endl;
	for(int i=0;i<n;i++)
		cin>>arr[i];
	cout<<"Average = "<<average(arr)<<endl;


	// int (*fp)[9][8] = new int[7][9][8];
	// for (int i = 0; i < 7; i++)
 //    	for (int j = 0; j < 9; j++)
 //    		for (int k = 0; k < 8; k++)
 //    			*(*(*(fp + i) + j) + k) = (i*100+j*10+k);
 //    for (int i = 0; i < 7; i++) {
 //    	for (int j = 0; j < 9; j++) {
 //    		for (int k = 0; k < 8; k++)
 //    			cout<<fp[i][j][k]<<' ';
 //    			cout<<endl;
 //    		}
 //    		cout<<endl;
 //    	}
 //    	delete[] fp;


	// Point a(4,5);
	// Point *ptr = &a;
	// cout<<ptr->getX()<<endl;
	// cout<<a.getX()<<endl;

	// int a,b,res;
	// cout<<"Please enter a: "; cin>>a;
	// cout<<"Please enter b: "; cin>>b;

	// res = compute(a,b,&max);
	// cout<<"max of a and b is "<<res<<endl;
	// res = compute(a,b,&min);
	// cout<<"min of a and b is "<<res<<endl;
	// res = compute(a,b,&sum);
	// cout<<"sum of a and b is "<<res<<endl;


	// int array[10];
	// int* search(int* a, int num);
	// for(int i=0;i<10;i++){
	// 	cin>>array[i];
	// }
	// int* zeroptr = search(array, 10);

	// cout<<"Enter 3 float point numbers: "<<endl;
	// for(int i=0;i<3;i++){
	// 	float x, f;
	// 	int n;
	// 	cin>>x;
	// 	splitFloat(x, &n, &f);
	// 	cout<<"Integer part: "<<n<<" Fraction part: "<<f<<endl;
	// }

	// int line1[] = {1,2,3};
	// int line2[] = {4,5,6};
	// int line3[] = {7,8,9};
	// int *pline[] = {line1,line2,line3};
	// cout<<"Matrix test: "<<endl;
	// for(int i=0;i<3;i++){
	// 	for(int j=0;j<3;j++){
	// 		cout<<pline[i][j]<<",";
	// 	}
	// 	cout<<endl;
	// }

	// int array[3] = {1,2,3};
	// for(int &e:array){
	// 	e += 2;
	// 	cout<<e<<endl;
	// }

	// int table[3][4] = {{1, 2, 3, 4}, {2, 3, 4, 5}, {3, 4, 5, 6}};
	// for (int i = 0; i < 3; i++)  {
 //         for (int j = 0; j < 4; j++)
 //              cout << table[i][j] << "   ";
 //         cout << endl;
 //     }
 //     rowSum(table, 3);  
 //     for(int i=0;i<3;i++){
 //     	cout << "Sum of row " << i << " is " << table[i][0] << endl;
 //     }
     
	// const char key[] = {'a','c','b','a','d'};
	// const int ques_num = 5;
	// char usr_input;
	// int ques = 0, correct_num = 0;

	// cout<<"Enter the "<<ques_num<<" question tests:"<<endl;
	// while(cin.get(usr_input)){
	// 	if(usr_input != '\n'){
	// 		if(usr_input == key[ques]){
	// 			correct_num++;
	// 			cout<<" ";
	// 		}
	// 		else{
	// 			cout<<"*";
	// 		}
	// 		ques++;
	// 	}
	// 	else{
	// 		cout<<"Score: "<<static_cast<float>(correct_num)/ques_num*100<<"%";
	// 		ques = 0; correct_num = 0;cout<<endl;
	// 	}
	// }

	// int f[20] = {1,1};
	// for (int i=2;i<20;i++){
	// 	f[i] = f[i-1] + f[i-2];
	// }
	// for (int i=0;i<20;i++){
	// 	if(i%4 == 0)cout<<endl;
	// 	cout.width(5);
	// 	cout<<f[i];
	// }
	// cout<<endl;


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

