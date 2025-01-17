#include<iostream>
using namespace std;
//函数模板不允许自动类型转化
//普通函数能够自动类型转化

/*
1、函数模板可以像普通函数一样被重载
2、c++编译器优先考虑普通函数
3、如果函数模板可以产生一个更好的匹配、那么选择模板
4、可以通过模板实参列表的语法限定编译器只通过模板匹配
*/

int Max(int a, int b){
	cout << "int Max(int a,int b)" << endl;
	return a > b ? a : b;
}
template <typename T>
T Max(T a, T b){
	cout << "T Max(T a, T b)" << endl;
	return a > b ? a : b; 
}

template <typename T>
T Max(T a,T b, T c){
	cout << "T Max(T a, T b,T c)" << endl;
	return Max (Max(a,b),c);
}

 int main(){
	int a = 1;
	int b = 2;

	cout << Max(a, b) << endl;//当函数模板和普通函数都符合调用的时候，优先选择普通函数
	cout << Max<>(a, b) << endl;//若显示的使用函数模板，则使用<>类型列表
	cout << Max(3.0, 4.0) << endl;//如果 函数模板产生更好的匹配， 使用函数模板
	cout << Max(5.0, 6.0, 7.0) << endl;//重载
	cout << Max('a', 100) << endl;//函数模板无法满足类型的要求，则调用普通函数，可以隐式类型转化
	return 0;
}