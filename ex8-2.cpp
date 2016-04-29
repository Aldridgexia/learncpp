#include <iostream>
using namespace std;

class Vehicle {
public:
	int MaxSpeed;
	int Weight;
	// void Run() {cout<<"Vehicle runs."<<endl;}
	// void Stop() {cout<<"Vehicle stops."<<endl;}
	virtual void Run() {cout<<"Vehicle runs."<<endl;}
	virtual void Stop() {cout<<"Vehicle stops."<<endl;}
};

class Bicycle : virtual public Vehicle {
public:
	int Height;
	void Run() {cout<<"Bicycle runs."<<endl;}
	void Stop() {cout<<"Bicycle stops."<<endl;}

};

class Motorcar : virtual public Vehicle {
public:
	int SeatNum;
	void Run() {cout<<"Motorcar runs."<<endl;}
	void Stop() {cout<<"Motorcar stops."<<endl;}
};

class Motorcycle : public Bicycle, public Motorcar {
public:
	void Run() {cout<<"Motorcycle runs."<<endl;}
	void Stop() {cout<<"Motorcycle stops."<<endl;}
};

int main() {
	Vehicle v;
	v.Run();
	v.Stop();
	Bicycle b;
	b.Run();
	b.Stop();
	Motorcar m;
	m.Run();
	m.Stop();
	Motorcycle mc;
	mc.Run();
	mc.Stop();
	Vehicle *vp = &v;
	vp->Run();
	vp->Stop();
	vp = &b;
	vp->Run();
	vp->Stop();
	vp = &m;
	vp->Run();
	vp->Stop();
	vp = &mc;
	vp->Run();
	vp->Stop();

	return 0;
}


