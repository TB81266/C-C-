#include<iostream>
using namespace std;
#include"set";

void multiset01(){
	multiset<int> s1;
	int tmp = 0;
	cout << "������multiset�ļ��ϵ�ֵ:" ;
	scanf("%d", &tmp);
	while (tmp != 0){
		s1.insert(tmp);
		cout << "������multiset�ļ��ϵ�ֵ:" ;
		scanf("%d", &tmp);
	} 
	for (multiset<int>::iterator it = s1.begin(); it != s1.end(); it++){
		cout << *it << " ";
	}
	cout << endl;
	while (s1.empty()){
		multiset<int>::iterator it  = s1.begin();
		cout << *it << " ";
		s1.erase(it);
	}
}
int main(){
	multiset01();


	return 0;
}