#include <iostream>
#include <cmath>
#include <cstdlib>
#include <iomanip>
#include <string>

using namespace std;

// void rowSum(int a[][4],int nRow){
// 	for(int i=0;i<nRow;i++){
// 		for(int j=0;j<4;j++){
// 			a[i][0] = a[i][j];
// 		}
// 	}
// }


int main(){
	int line1[] = {1,2,3};
	int line2[] = {4,5,6};
	int line3[] = {7,8,9};
	int *pline[] = {line1,line2,line3};
	cout<<"Matrix test: "<<endl;
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<pline[i][j]<<",";
		}
		cout<<endl;
	}

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