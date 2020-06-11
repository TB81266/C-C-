#include<iostream>
#include<list>
using namespace std;

void traverse(list<int>& obj){
	list<int>::iterator it = obj.begin();
	while (it != obj.end()){
		cout << *it << " ";
		it++;
	}
	cout << endl;
}

int main01(){
	//����Ĺ���
	list<int> li1;
	list<int> li2(10);
	list<int> li3(10, 8);
	for (const auto& e:li1){
		cout << e << " ";
	}
	cout << endl;

	for (const auto& e : li2){
		cout << e << " ";
	}
	cout << endl;

	for (const auto& e : li3){
		cout << e << " ";
	}
	cout << endl;

	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	list<int> li4(arr, arr + 10);
	for (const auto& e : li4){
		cout << e << " ";
	}
	cout << endl;

	list<int> li5(li4.begin(), li4.end());
	for (const auto& e:li5){
		cout << e << " ";
	}
	cout << endl;


	return 0;
}

int main02(){
	list<int> li1 = { 1, 2, 3, 4, 5, 6, 8, 9, 10 };
	//������ķ��� C+11 ��for ���溬��begin()  end()
	//���õ������ķ�ʽ����
	list<int>::iterator it = li1.begin();
	while (it != li1.end()){
		cout << *it << " ";
		it++;
	}
	cout << endl;
	//����auto�Զ��Ƶ�����
	auto it1 = li1.begin();
	while (it1 != li1.end()){
		cout << *it1 << " ";
		it1++;
	}
	cout << endl;
	//�����������ʹ��,��Ϊ��˫������ ���п���ʵ��  ��������ʾ����������ʵ�ֵ�
	list<int>::reverse_iterator it2 = li1.rbegin();
	while (it2 != li1.rend()){
		cout << *it2 << " ";
		it2++;
	}
	cout << endl;
	//����ʵ�ֵķ��� 2 ����������� �ǵ�һ�ַ���ʵ�ֵ�ԭ��
	auto it3 = li1.end();
	--it3;
	while (it3 != li1.begin()){
		cout << *it3 << " ";
		--it3;
	}
	cout << *it3;
	

	cout<< endl;
	return 0;
}

int main03(){
	list<int> li1 = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	//��Ԫ�صĸ���
	cout << "size = " << li1.size() << endl;
	//���������еĵ�һ���ڵ��ֵ
	cout << "�����е�һ��Ԫ�ص�ֵ��" << li1.front() << endl;
	//�������������һ���ڵ��ֵ
	cout << "���������һ��Ԫ�ص�ֵ��" << li1.back() << endl;
	//�ж��Ƿ�Ϊ��
	if (li1.empty()){
		cout << "list is empty" << endl;
	}
	else{
		cout << "���������" << endl;
		for (list<int>::reverse_iterator rit = li1.rbegin(); rit != li1.rend(); ++rit){
			cout << *rit << " ";
		}
		cout << endl;
		cout << "˳�������" << endl;
		list<int>::iterator it = li1.begin();
		while (it != li1.end()){
			cout << *it << " ";
			it++;
		}
		cout << endl;
	}
	cout << "�����ͷ�塢β�� ʵ��:" << endl;
	li1.push_front(0);
	li1.push_back(11);
	li1.insert(li1.begin(), 0);
	li1.insert(li1.end(), 22);
	traverse(li1);
	cout << "�������е�λ�ò��룺" << endl;
	auto pos = find(li1.begin(), li1.end(), 8);//����find ���ҵ���ص�λ�� Ȼ���ڸ�λ�õ�ǰ���������Ҫ���������
	li1.insert(pos, 77);
	traverse(li1);
	cout << "�����ͷɾβ��ɾ����ʵ�֣�" << endl;
	li1.pop_front();
	li1.pop_back();
	traverse(li1);
	cout << "ɾ���м��ֵ��" << endl;
	auto poss = find(li1.begin(), li1.end(), 77);
	li1.erase(poss);
	li1.erase(li1.begin());
	li1.erase(--li1.end());
	traverse(li1);
	return 0;
}


int main04(){
	list<int> li1 = { 1, 2, 3, 4};
	list<int> li2 = { 5, 6, 7, 8, 9, 10 };
	li1.swap(li2);//������������
	traverse(li1);
	traverse(li2);

	li1.clear();
	traverse(li1);

	return 0;
}

int main05(){
	list<int> li1 = { 1, 2, 3, 4 ,5,6,7,8,9,11,44,33,66};
	li1.remove(4);//ֱ���Ƴ� ����Ҫ�ҵ���������λ��
	li1.remove(2);
	//li1.remove_if(1);//����ɾ�� ��Ҫ���� �Ժ�����
	traverse(li1);
	cout << "�����ʵ�֣�" << endl;
	li1.sort();
	traverse(li1);
	list<int> li2 = { 88, 99, 100, 111 };
	cout << "�ϲ���ʵ�֣��ϲ�֮ǰ��������������ģ����򣩣�:" << endl;
	li1.merge(li2);
	traverse(li1);
	auto pos = find(li1.begin(), li1.end(), 100);
	cout << *pos << endl;
	li1.erase(pos);
	traverse(li1);
	//cout << *pos << endl; error ���ڶԵ�������posλ�õĽڵ����ɾ����ɾ����ڵ㲻���ڣ��ٴη��ʸýڵ㣬����ɵ������ڵ�ʧЧ
	//��α��������ĵ������ڵ�ʧЧ������� �Ǿ��ǽ�ɾ����ڵ��λ�÷���
	auto poss = find(li1.begin(), li1.end(), 111);
	poss = li1.erase(poss);
	//cout << *poss << endl;
	traverse(li1);
	return 0;
}

namespace bit{
	template<class T>
	class list;//����list�� 

	template<class T>
	class ListIterator;//����listIterator
	
	//����һ���ڵ�
	template<class T>
	class ListNode{
		friend class list<T>;//����Ϊ��Ԫ�� 
		friend class ListIterator<T>;
	public:
		ListNode(T data = T()) :next(nullptr), prev(nullptr), value(data){
		}
		~ListNode(){
		}
	private:
		ListNode *next;
		ListNode *prev;
		T         value;
	};
	
	//���������
	template<class T>
	class ListIterator{
	public:
		typedef ListNode<T>* PNode;
		typedef ListIterator<T> slef;
	public:
		ListIterator(PNode _P) : _Ptr(_P){
		}
		PNode Mynode()const{
			return _Ptr;
		}
	public:
		T& operator*()const{
			return _Ptr->value;
		}
		slef& operator++(){
			_Ptr = _Ptr->next;
			return *this;
		}
		slef& operator--(){
			_Ptr = _Ptr->prev;
			return *this;
		}
		bool operator!=(const slef &lt){
			return _Ptr != lt._Ptr;
		}
		bool operator==(const slef &lt){
			return _Ptr == lt._Ptr;
		}
	private:
		PNode _Ptr;
	};

	template<class T>
	class list{
	public:
		typedef ListNode<T>* PNode;
		typedef ListIterator<T> iterator;
	public:
		list(){
			CreateHead();
		}
		list(int n, const T &v = T()){
			CreateHead();
			for (int i = 0; i<n; ++i)
				push_back(v);
		}
		template<class _It>
		list(_It first, _It last){
			CreateHead();
			while (first != last){
				push_back(*first);
				++first;
			}
		}
		list(initializer_list<T> il){
			CreateHead();
			for (const auto &e : il)
				push_back(e);
		}
		list(list<T> &lt){
			CreateHead();
			list tmp_list(lt.begin(), lt.end());
			swap(tmp_list);
		}
		~list(){
			clear();
			delete _pHead;
			_pHead = nullptr;
		}
	public:
		void push_back(const T&x){
			insert(end(), x);
		}
		void push_front(const T&x){
			insert(begin(), x);
		}
		void pop_back(){
			erase(--end());
		}
		void pop_front(){
			erase(begin());
		}
		void swap(list<T> &lt){
			std::swap(_pHead, lt._pHead);
		}
		void clear(){
			erase(begin(), end());
		}
	public:
		iterator begin(){
			return iterator(_pHead->next);
		}
		iterator end(){
			return iterator(_pHead);
		}
	public:
		iterator insert(iterator pos, const T &x){
			PNode s = new ListNode<T>(x);
			PNode p = pos.Mynode();
			s->next = p;
			s->prev = p->prev;
			s->prev->next = s;
			s->next->prev = s;
			return iterator(s);
		}
		void erase(iterator first, iterator last){
			while (first != last){
				first = erase(first);
			}
		}
		iterator erase(iterator pos){
			PNode p = pos.Mynode();
			PNode q = p->next;
			p->prev->next = p->next;
			p->next->prev = p->prev;
			delete p;
			return iterator(q);
		}
	protected:
		void CreateHead(){
			_pHead = new ListNode<T>;
			_pHead->next = _pHead->prev = _pHead;
		}
	private:
		PNode _pHead;
	};
};

void main(){
	bit::list<int> lt1 = { 1, 2, 3, 4, 5, 6};
	cout << "lt1 = ";
	for (const auto &e : lt1)   //begin()  end()   ++
		cout << e << " ";
	cout << endl;

	//bit::list<int> lt2 = lt1;
	//lt1.erase(lt1.begin());
	//lt1.pop_front();
	//lt1.pop_back();

	lt1.clear();
	cout << "lt1 = ";
	for (const auto &e : lt1)  
		cout << e << " ";
	cout << endl;
}

