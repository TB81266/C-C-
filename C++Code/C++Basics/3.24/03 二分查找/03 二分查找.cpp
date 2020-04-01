#include<iostream>
using namespace std;

int binary_search(int* arr,int k,int len ){
	int left = 0;
	int right =len-1;

	while (left <= right){
		int mid = (right + left) / 2;
		if (k < arr[mid]){
			 right = mid - 1;
		}
		else if (k > arr[mid]){
			 left = mid + 1;
		}
		else {
			return mid;
		}
	}

	return -1;
}

int main(){
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 ,10};
	int k = 0;
	//���������׵�ַ������ĳ����Լ���ЧԪ�صĸ��������ģ��׵�ַ�ǿ��Դ��ݵģ������ǲ��ܴ��ݵ�
	int len = sizeof(arr) / sizeof(arr[0]);//��Ҫ�ں�����ʹ������ĳ��ȣ�ֻ�����������м����֮���ٴ����βΣ��ں��������޷���������ĳ��ȵ�

	scanf_s("%d", &k);
	int result = binary_search(arr, k, len);
	if (result == -1){
		cout << "û���ҵ���" << endl;
	}
	else{
		cout << "result = " << result << endl;
	}
	return 0;
}