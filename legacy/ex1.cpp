

#include <iostream>
#include <string>

using namespace std;

void swap(int &a, int &b) {
	int temp = a;
	a = b;
	b = temp;
}

int main() {
	int a[3][3];
	cout << "Please enter 9 numbers: "<<endl;
	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 3; j++)
			cin >> a[i][j];
	
	cout << "��ʼ����" << endl;
	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 3; j++)
			cout << a[i][j] << " ";
		cout << endl;
		for (int i = 0; i < 3; i++)
			for (int j = 0; j < 3; j++)
				swap(a[i][j], a[j][i]);
	
	cout << "ת�ú����" << endl;
	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 3; j++)
			cout << a[i][j] << " ";
		cout << endl;

	return 0;
}