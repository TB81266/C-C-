#include<iostream>
using namespace std;

void divide(int x, int y){
	if (y == 0){
		throw x;//�׳�int�����쳣
	}
	cout<<"divide:" << x / y << endl; 
}




int main(){
	try {
		divide(10, 8);
		divide(100, 0);
	}
	catch (int e){
		cout << e <<"�����"<< endl;
	}
	catch (...){
		cout << "����δ֪�����쳣" << endl; 
	}

	return 0;
}