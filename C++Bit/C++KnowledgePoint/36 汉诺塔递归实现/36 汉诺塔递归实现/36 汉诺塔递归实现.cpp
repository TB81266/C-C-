#include <fstream>
#include <iostream>

using namespace std;

void move(int n, char i ,char j){
	cout << "��" << n << "�Ŵ�" << i << "�ƶ���" << j << endl;
}

void Hannoi(int n, char a,char b,char c){
	if (n == 1){
		move(n,a, c);
	}
	else{
		Hannoi(n - 1, a, c, b);
		move(1, a, c);
		Hannoi(n - 1, b, a, c);
	}
}
int main(){
	cout << "������10�㺺ŵ�������⣺" << endl;
	Hannoi(3, 'a', 'b', 'c');
	ofstream close();
	cout << "��������over��" << endl;

	return 0;
}