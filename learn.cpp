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
#include <cstdlib>
#include <iomanip>
#include <string>

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

// double tsin(double x){
// 	double r = 0;
// 	double t = x;
// 	int n = 1;
// 	do{
// 		r += t;
// 		n++;
// 		t = -t*x*x/(2*n-1)/(2*n-2);
// 	}
// 	while(fabs(t)>1e-10);
// 	return r;
// }

// int rollDice(){
// 	int die1 = 1 + rand()%6;
// 	int die2 = 1 + rand()%6;
// 	int sum = die1 + die2;
// 	cout<<"player rolled "<<die1<<" + "<<die2<<" = "<<sum<<endl;
// 	return sum;
// }

// enum GameStatus { WIN,LOSE,PLAYING };

// int comm(int n, int k){
// 	if(k>n){
// 		return 0;
// 	}
// 	else if(n == k||k == 0){
// 		return 1;
// 	}
// 	else
// 		return comm(n-1,k) + comm(n-1,k-1);
// }

// void move(char src,char dest){
// 	cout<<src<<"==>"<<dest<<endl;
// }

// void hanoi(int n,char src,char medium,char dest){
// 	if(n == 1){
// 		move(src,dest);
// 	}
// 	else{
// 		hanoi(n-1,src,dest,medium);
// 		move(src,dest);
// 		hanoi(n-1,medium,src,dest);
// 	}
// }
// void swap(int &a,int &b){
// 	int t;
// 	t = a;
// 	a = b;
// 	b = t;
// }

// const double PI = 3.14159265358979;
// inline double calArea(double radius){
// 	return PI*radius*radius;
// }

// int getVolume(int length,int width=2, int height=3){
// 	cout << setw(5) << length << setw(5) << width << setw(5)<< height << '\t';
// return length * width * height;
// }

// class Clock{
// public:
// 	Clock(int newH, int newM, int newS);
// 	Clock();
// 	void setTime(int newH, int newM,int newS);
// 	void showTime();
// private:
// 	int hour, minute, second;
// };
// void Clock::setTime(int newH, int newM, int newS) {
//    hour = newH;
//    minute = newM;
//    second = newS;
// }
// void Clock::showTime() {
//    cout << hour << ":" << minute << ":" << second<<endl;
// }
// Clock::Clock(int newH, int newM, int newS):hour(newH), minute(newM), second(newS){

// }
// Clock::Clock():hour(0),minute(0),second(0){

// }
// class Point{
// public:
// 	Point(int xx=0, int yy=0){
// 		x = xx;
// 		y = yy;
// 	}
// 	Point(Point &p);
// 	int getX(){return x;}
// 	int getY(){return y;}
// private:
// 	int x,y;
// };
// Point::Point(Point &p){
// 	x = p.x;
// 	y = p.y;
// 	cout<<"Calling the constructor of Point"<<endl;
// }

// class Line{
// public:
// 	Line(Point xp1, Point xp2);
// 	Line(Line &l);
// 	double getLen(){return len;}
// private:
// 	Point p1,p2;
// 	double len;
// };

// Line::Line(Point xp1, Point xp2):p1(xp1),p2(xp2){
// 	cout<<"Calling constructor of Line"<<endl;
// 	double x = static_cast<double>(p1.getX()-p2.getX());
// 	double y = static_cast<double>(p1.getY()-p2.getY());
// 	len = sqrt(x*x + y*y);
// }

// Line::Line(Line &l):p1(l.p1),p2(l.p2){
// 	cout<<"Calling the copy constructor of Line"<<endl;
// 	len = l.len;
// }

// struct Student{
// 	int num;
// 	string name;
// 	char sex;
// 	int age;
// };

enum class Side{Left,Right};
enum class Thing{Right,Wrong};

int main()
{
	Side s = Side::Right;
	Thing t = Thing::Wrong;
	cout<<(s == t)<<endl;

	// Student stu = {90071,"linlin",'F',19};
	// cout << "Num:  " << stu.num << endl;
	// cout << "Name: " << stu.name << endl;
	// cout << "Sex:  " << stu.sex << endl;
	// cout << "Age:  " << stu.age << endl;


	// Point myp1(1,1), myp2(4,5);
	// Line line(myp1, myp2);
	// Line line2(line);
	// cout << "The length of the line is: ";
	// cout << line.getLen() << endl;
	// cout << "The length of the line2 is: ";
	// cout << line2.getLen() << endl;
	// Clock c1(8,10,0);
	// Clock c2;
	// c1.showTime();
	// c2.showTime();

	// int angle;
	// cout<<"Enter an angle: ";
	// cin>>angle;
	// double radian = angle*PI/180.0;
	// cout<<"sin("<<angle<<")= "<<sin(radian)<<endl;
	// cout<<"cos("<<angle<<")= "<<cos(radian)<<endl;
	// cout<<"tan("<<angle<<")= "<<tan(radian)<<endl;

	// const int X = 10, Y = 12, Z = 15;
	// cout << "Some box data is " ;
	// cout << getVolume(X, Y, Z) << endl;
	// cout << "Some box data is " ;
	// cout << getVolume(X, Y) << endl;
	// cout << "Some box data is " ;
	// cout << getVolume(X) << endl;

	// double r = 3.0;
	// double area = calArea(r);
	// cout<<area<<endl;

	// int x = 5;
	// int y = 10;
	// cout<<"x and y before swap: x = "<<x<<" y = "<<y<<endl;
	// swap(x,y);
	// cout<<"x and y after swap: x = "<<x<<" y = "<<y<<endl;

	// int m;
	// cout<<"Enter the number of discs: ";
	// cin>>m;
	// cout<<"the step of moving "<<m<<"discs: "<<endl;
	// hanoi(m,'A','B','C');

	// int n,k;
	// cout<<"Enter n and k: ";
	// cin>>n>>k;
	// cout<<"C(n,k): "<<comm(n,k)<<endl;

	//以下为正序排列，以上为倒序排列
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

	// double k,r,s;
	// cout<<"k = ";
	// cin>>k;
	// cout<<"r = ";
	// cin>>r;
	// cout<<"s = ";
	// cin>>s;
	// if(r*r <= s*s){
	// 	k = sqrt(tsin(r)*tsin(r)+tsin(s)*tsin(s));
	// }
	// else{
	// 	k = tsin(r*s)/2;
	// }
	// cout<<k<<endl;

	// int sum,myPoint;
	// GameStatus status;
	// unsigned seed;
	// cout<<"Enter a num: ";
	// cin>>seed;
	// srand(seed);
	// sum = rollDice();
	// switch(sum){
	// 	case 7:
	// 	case 11:
	// 		status = WIN;
	// 		break;
	// 	case 2:
	// 	case 3:
	// 	case 12:
	// 		status = LOSE;
	// 		break;
	// 	default:
	// 		status = PLAYING;
	// 		myPoint = sum;
	// 		cout<<"point is "<<myPoint<<endl;
	// 		break;
	// }
	// while(status == PLAYING){
	// 	sum = rollDice();
	// 	if(sum == myPoint){
	// 		status = WIN;
	// 	}
	// 	else if(sum == 7){
	// 		status = LOSE;
	// 	}
	// }
	// if(status == WIN){
	// 	cout<<"player wins!"<<endl;
	// }
	// else
	// 	cout<<"player loses!"<<endl;

    return 0;
   
}