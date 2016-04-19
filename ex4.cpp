#include <iostream>
using namespace std;

enum CPU_Rank {P1=1,P2,P3,P4,P5,P6,P7};
class CPU{
private:
	CPU_Rank rank;
	int frequency;
	float voltage;
public:
	CPU(CPU_Rank r,int f, float v){
		rank = r;
		frequency = f;
		voltage = v;
		cout<<"构造了一个CPU!"<<endl;
	}
	~CPU() {cout<<"析构了一个CPU!"<<endl;}
	CPU_Rank getrank() const {return rank;}
	int getfrequency() const {return frequency;}
	float getvoltage() const {return voltage;}

	void setrank(CPU_Rank r){rank = r;}
	void setfrequency(int f){frequency = f;}
	void setvoltage(float v){voltage = v;}

	void Run(){cout<<"CPU 开始运行！"<<endl;}
	void Stop(){cout<<"CPU 停止运行！"<<endl;}
};

int main(){
	CPU a(P6,300,2.8);
	a.Run();
	a.Stop();

	return 0;
}