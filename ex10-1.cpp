#include <deque>
#include <iostream>
using namespace std;

int main() {
	deque <int> iDeque;
	iDeque.push_back(3);
	iDeque.push_back(1);
	iDeque.push_back(4);
	iDeque.push_back(8);
	iDeque.push_back(6);
	while(!iDeque.empty()) {
		cout<<"取出元素"<<iDeque.front()<<endl;
		iDeque.pop_front();
	}

	return 0;
}