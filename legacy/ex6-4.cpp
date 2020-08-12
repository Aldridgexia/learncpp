#include <iostream>
#include "employee.h"
using namespace std;

int main() {
	Employee emp[5] = {
		Employee("Zhang San","Haidian","Beijing","100084"),
		Employee("Li Si", "Xuanwu", "Beijing", "100031"),
		Employee("Wang Wu", "Nanfu", "Shanghai", "012345"),
		Employee("Zhu Ge","Wuhou", "Chengdu", "543210"),
		Employee("Sun Ying","Zhifu", "Yantai", "264000")
	};
	for(int i=0;i<5;i++) {
		cout<<"Number "<<i<<":"<<endl;
		emp[i].display();
		cout<<endl;
	}

	return 0;
}