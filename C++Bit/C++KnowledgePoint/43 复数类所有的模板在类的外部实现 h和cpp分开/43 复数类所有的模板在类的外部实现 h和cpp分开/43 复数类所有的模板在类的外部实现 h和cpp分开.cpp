#include"Complex.cpp"//��ģ��ĺ������Ƶ������������  .cpp�����ҵ�������


int main(){
	//��Ҫ��ģ������о��廯�Ժ�,���ܶ������,C++������Ҫ�����ڴ�
	Complex<int> c1(10, 30);
	Complex<int> c2(20, 30);
	Complex<int> c3 = c1 + c2;

	cout << "c3: " << c3 << endl;
	c3.ComplexShow();
	return 0;
}