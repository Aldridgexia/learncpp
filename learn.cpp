//
//  learn.cpp
//  
//
//  Created by 夏嘉会 on 16/3/2.
//
//

#include "learn.hpp"
#include <iostream>
#include <cmath>
using namespace std;
// enum gameResult{win,lose,tie,cancel};
// struct myTimeStruct
// {
// 	/* data */
// 	unsigned int year;
// 	unsigned int month;
// 	unsigned int day;

// 	unsigned int hour;
// 	unsigned int min;
// 	unsigned int sec;
// };

// double power(int x, int n){
// 	double val = 1. ;
// 	while(n--){
// 		val *= x;
// 	}
// 	return val;
// }

// double arctan(double x){
// 	double sqr = x*x;
// 	double r = 0;
// 	double e = x;
// 	int i = 1;
// 	while(e/i>1e-15){
// 		double f = e/i;
// 		r = (i%4==1)?r+f:r-f;
// 		e = e*sqr;
// 		i += 2;
// 	}
// 	return r;
// }

// bool symm(unsigned n){
// 	unsigned temp = n;
// 	unsigned m = 0;
// 	while(temp!=0){
// 		m = m*10 + temp%10;
// 		temp /= 10;
// 	}
// 	return (m == n);
// }

double tsin(double x){
	double r = 0;
	double t = x;
	int n = 1;
	do{
		r += t;
		n++;
		t = -t*x*x/(2*n-1)/(2*n-2);
	}
	while(fabs(t)>1e-10);
	return r;
}

int main()
{
    /*
    const double pi=3.14159;
    int radius=0;
    int a=0;
    int b=0;
    int x = 0;
    cout<<"The initial radius is: "<<radius<<'\n';
    cout<<"pi is: "<<pi<<'\n';
    cout<<"Please enter a different radius!\n";
    cin>>radius;
    cout<<"Now the radius changes to: "<<radius<<'\n';
    cout<<"pi is still "<<pi<<'\n'; //pi is not changed.
    cout<<"Enter a: \n";
    cin>>a;
    cout<<"Enter b: \n";
    cin>>b;
    x = a>b?a:b;
    cout<<"The bigger one is "<<x<<'\n';
    */

    /*
    double x=9;
    float y=2e15;
    cout<<sizeof(short)<<endl;
    cout<<sizeof x<<endl;
    cout<<static_cast<long>(y)<<endl;
	*/
	/*
	int x,y;
    cout<<"enter two numbers: "<<endl;
    cin>>x>>y;
	if(x==y) cout<<"x = y = "<<x<<endl;
	else{
		if(x<y) cout<<"x < y = "<<y<<endl;
		else cout<<"y < x = "<<x<<endl;
		}
	*/

	/*
	int day;
	cout<<"Enter a number: "<<endl;
	cin>>day;
	switch(day){
		case 0: cout<<"Sunday"<<endl;
		break;
		case 1: cout<<"Monday"<<endl;
		break;
		case 2: cout<<"Tuesday"<<endl;
		break;
		case 3: cout<<"Wensday"<<endl;
		break;
		case 4: cout<<"Thursday"<<endl;
		break;
		case 5: cout<<"Friday"<<endl;
		break;
		case 6: cout<<"Saturday"<<endl;
		break;
		default: cout<<"numbers out of range..."<<endl;

	}
	*/
	/*
	int i=1, sum=0, upperpoint;
	cout<<"Enter a number: "<<endl;
	cin>>upperpoint;
	while(i<=upperpoint){
		sum += i;
		i++;
	}
	cout<<"sum = "<<sum<<endl;
	*/
	/*
	int num=0,result=0;
	cout<<"Enter a number: "<<endl;
	cin>>num;
	do{
		result *= 10;
		result += num % 10;
		num /= 10;
	}
	while(num != 0);

	cout<<"the reverse number is "<<result<<endl;
	*/

	/*
	int n;
	cout<<"Enter a number: "<<endl;
	cin>>n;
	for(int i=1;i<=n;i++){
		if(n % i == 0)
			cout<<i<<" ";
	}
	cout<<endl;
	*/

	/*
	int i=0,j=0,n;
	cout<<"Enter a number,enter 0 to stop: "<<endl;
	cin>>n;
	while(n != 0){
		if(n>0) i++;
		else j++;
		cin>>n;
	}
	cout<<"You entered "<<i<<" positive numbers"<<" and "<<j<<" negative numbers"<<endl;
	*/

	/*
	myTimeStruct myTime = {2016,3,2,12,30,0};
	cout<<"Current time is: "<<myTime.year<<"-"<<myTime.month<<"-"<<myTime.day<<" "<<myTime.hour<<":"<<myTime.min<<":"<<myTime.sec<<endl;

	cout<<"Enter year: "<<endl;
	cin>>myTime.year;

	cout<<"Enter month: "<<endl;
	cin>>myTime.month;

	cout<<"Enter day: "<<endl;
	cin>>myTime.day;

	cout<<"Enter hour: "<<endl;
	cin>>myTime.hour;

	cout<<"Enter min: "<<endl;
	cin>>myTime.min;

	cout<<"Enter sec: "<<endl;
	cin>>myTime.sec;

	cout<<"Now the time is set to: "<<myTime.year<<"-"<<myTime.month<<"-"<<myTime.day<<" "<<myTime.hour<<":"<<myTime.min<<":"<<myTime.sec<<endl;
	*/

	// int x,n;
	// double result;
	// cout<<"Enter two numbers, latter for base and former for power: "<<endl;
	// cin>>x>>n;
	// result = power(x,n);
	// cout<<"The result is: "<<result<<endl;

	// int input;
	// int value;

	// cout<<"Enter a 8 bit binary num: "<<endl;
	// cin>>input;
	// for(int i=0;input!=0;i++){
	// 	int temp = input % 10;
	// 	if(temp!=0){
	// 		value += power(2,i);
	// 	}
	// 	input /= 10;
		
	// }
	// cout<<"the decimal num is: "<<value<<endl;

	// double a = 16.0 * arctan(1/5.0);
	// double b = 4.0 * arctan(1/239.0);
	// cout<<"PI = "<<a-b<<endl;

	// for(int i = 1;i < 1000;i++){
	// 	if(symm(i)&&symm(i*i)&&symm(i*i*i)){
	// 		cout<<"i = "<<i<<"; ";
	// 		cout<<"i*i = "<<i*i<<"; ";
	// 		cout<<"i*i*i = "<<i*i*i<<endl;
	// 	}
	// }

	double k,r,s;
	cout<<"k = ";
	cin>>k;
	cout<<"r = ";
	cin>>r;
	cout<<"s = ";
	cin>>s;
	if(r*r <= s*s){
		k = sqrt(tsin(r)*tsin(r)+tsin(s)*tsin(s));
	}
	else{
		k = tsin(r*s)/2;
	}
	cout<<k<<endl;



    return 0;
   
}