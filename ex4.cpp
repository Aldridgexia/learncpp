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

enum  RAM_Type {DDR2=2,DDR3,DDR4};
class RAM{
private:
	enum RAM_Type type;
	unsigned int frequency;
	unsigned int size;
public:
	RAM(RAM_Type t, unsigned int f, unsigned int s){
		type = t;
		frequency = f;
		size = s;
		cout<<"构造了一个RAM!"<<endl;
	}
	~RAM() {cout<<"析构了一个RAM!"<<endl;}

	RAM_Type getType() const {return type;}
	unsigned int getFrequency() const {return frequency;}
	unsigned int getSize() const {return size;}

	void setType(RAM_Type t) {type = t;}
	void setFrequency(unsigned int f) {frequency = f;}
	void setSize(unsigned int s) {size = s;}

	void Run() {cout<<"RAM 开始运行！"<<endl;}
	void Stop() {cout<<"RAM 停止运行！"<<endl;}

};

enum CDROM_Interface {SATA, USB};
enum CDROM_Install_type {external, built_in};
class CDROM{
private:
	enum CDROM_Interface interface_type;
	unsigned int cache_size;
	enum CDROM_Install_type install_type;

public:
	CDROM(CDROM_Interface i, unsigned int s, CDROM_Install_type it){
		interface_type = i;
		cache_size = s;
		install_type = it;
		cout<<"构造了一个CDROM!"<<endl;
	}
	~CDROM() {cout<<"析构了一个CDROM!"<<endl;}

	CDROM_Interface getInterfaceType() {return interface_type;}
	unsigned int getCacheSize() {return cache_size;}
	CDROM_Install_type getInstallType() {return install_type;}

	void setInterfaceType(CDROM_Interface i) {interface_type = i;}
	void setCacheSize(unsigned int s) {cache_size = s;}
	void setInstallType(CDROM_Install_type it) {install_type = it;}

	void Run() {cout<<"CDROM 开始运行！"<<endl;}
	void Stop() {cout<<"CDROM 停止运行！"<<endl;}
};

class COMPUTER{
private:
	CPU my_cpu;
	RAM my_ram;
	CDROM my_cdrom;
	unsigned int storage_size;
	unsigned int bandwidth;

public:
	COMPUTER(CPU c, RAM r, CDROM cd, unsigned int s, unsigned int b);
	~COMPUTER() {cout<<"析构了一个COMPUTER!"<<endl;}

	void Run(){
		my_cpu.Run();
		my_ram.Run();
		my_cdrom.Run();
		cout<<"COMPUTER 开始运行！"<<endl;
	}
	void Stop(){
		my_cpu.Stop();
		my_ram.Stop();
		my_cdrom.Stop();
		cout<<"COMPUTER 停止运行！"<<endl;
	}
};

COMPUTER::COMPUTER(CPU c, RAM r, CDROM cd, unsigned int s, unsigned int b):my_cpu(c),my_ram(r),my_cdrom(cd){
	storage_size = s;
	bandwidth = b;
	cout<<"构造了一个COMPUTER!"<<endl;
};

int main(){
	CPU a(P6,300,2.8);
	a.Run();
	a.Stop();
	cout<<"*********************\n";

	RAM b(DDR3,1600,8);
	b.Run();
	b.Stop();
	cout<<"*********************\n";

	CDROM c(SATA,2,built_in);
	c.Run();
	c.Stop();
	cout<<"*********************\n";

	COMPUTER my_computer(a,b,c,128,10);
	cout<<"*********************\n";

	my_computer.Run();
	my_computer.Stop();
	cout<<"*********************\n";

	return 0;
}