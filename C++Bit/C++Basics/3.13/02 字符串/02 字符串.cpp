#include <iostream>
using namespace std;


int main01(){
	"abc" //ֱ��д�������ַ����������ַ���
		"";//���ַ���
	char arr1[] = "abc";
	char arr2[] = { 'a', 'c','v','\0' };
	char arr3[] = { 'a', 'c', 'v' };
	//���ַ����ĳ��� strlen();
	int len = strlen(arr1);
	int len2 = strlen(arr2);
	int len3 = strlen(arr3);
	printf("%s\n", arr1);
	printf("%s\n", arr2);
	cout << len << endl;
	cout << len2 << endl;
	cout << len3 << endl;//���ֵ
	return 0;
}

int main(){
	char arr[] = { "c:\test\32\test.c" };
	int len = strlen(arr);
	cout << len << endl;
	//ת���ַ� ת���ַ�����˼  /t��ˮƽ�Ʊ�� table��
	printf("c:\test\32\test.c");//��ӡ��ᷢ��ʲô��
	printf("\a\a\a\a\a\a\a");//\a ��һ�������ַ�
	return 0;
}