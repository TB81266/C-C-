#include<iostream>
#include"vector"
#include"list"
#include"queue"
#include"deque"
#include"set"
#include"algorithm"
#include"functional"
#include"numeric"
#include"iterator"
#include"string"
#include"map"
using namespace std;

class Speaker{
public:
	string m_name;
	int m_score[3];
protected:
private:
};

//����ѡ��
int GenSpeaker(map<int, Speaker> &mapSpeaker, vector<int> &v){
	string str = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";//�������ֵĴ���
	random_shuffle(str.begin(),str.end());
	//forѭ��ʵ��ѡ��+����   ÿһλѡ��ʵ�ֱ�ż����ִ���
	for (int i = 0; i < 24; i++){
		Speaker tmp;
		tmp.m_name = "ѡ��";
		tmp.m_name = tmp.m_name + str[i]; 
		mapSpeaker.insert(pair<int, Speaker>(100+i, tmp));
	}
	//��24λѡ�ַ���v������
	for (int i = 0; i < 24; i++){
		v.push_back(100 + i);//�μӱ�������Ա	
	}
	return 0;
}

//ѡ�ֳ�ǩ
int speech_contest_draw(vector<int> v){
	random_shuffle(v.begin(), v.end());
	return 0;
}

//��һ��������ʾ�ڼ��֣�v1��ʾ����������������������ʾ�����ĵ÷���������ĸ�������ʾ���
int speech_contest(int index, vector<int> &v1, map<int, Speaker> &mapSpeaker, vector<int> &v2){
	//����ģ��
	//С��ı����÷� ��¼���� ���ǰ���� ������
	//С��÷ֿ������ظ���
	multimap<int, int, greater<int>> multimapGroup;//С��ɼ�
	int tmpCount = 0;
	for (vector<int>::iterator it = v1.begin(); it != v1.end(); it++){
		tmpCount++;
		//���
			{
				deque<int> dscore;
				//10����ί���
				for (int j = 0; j < 10; j++){
					int score = 50 + rand() % 50;
					dscore.push_back(score);
				 } 
				sort(dscore.begin(), dscore.end());//����
				//ȥ����ͷ� ��߷� 
				dscore.pop_front();
				dscore.pop_back();

				//��ƽ����
				int scorenum = accumulate(dscore.begin(), dscore.end(), 0);
				int scoreaverage = scorenum / dscore.size();
				mapSpeaker[*it].m_score[index] = scoreaverage;//ѡ�ֵ÷ִ���������
				multimapGroup.insert(pair<int, int>(scoreaverage, *it));
			}
		//�������
		if (tmpCount % 6 == 0){
			cout << "С��ı����ɼ�" << endl;
			for (multimap<int, int,greater<int>>::iterator mit = multimapGroup.begin(); mit != multimapGroup.end(); mit++){
				//  ���  ���� �÷�
				cout << mit->second << "\t" << mapSpeaker[mit->second].m_name << "\t" << mit->first << endl;
			}
			//ǰ��������
			while (multimapGroup.size() > 3){
				multimap<int, int, greater<int>>::iterator it1 = multimapGroup.begin();
				v2.push_back(it1->second);//��ǰ��������V2�У�v2Ϊ��������һ������
				multimapGroup.erase(it1);
			}
			multimapGroup.clear();//��ձ�С��ı����ɼ�
		}
	}
	return 0;
}

//�鿴�������
int speech_contest_print(int index, vector<int> &v, map<int, Speaker> &mapSpeaker){
	printf("��%d �ֽ�������\n", index + 1);
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++){
		cout << "������ţ�" << *it << "\t" << mapSpeaker[*it].m_name << "\t" << mapSpeaker[*it].m_score[index] << endl;
	}
	return 0;
}
int main(){
	//���������
	map<int, Speaker> mapSpeaker;//�μӱ�����ѡ�� 
	vector<int>  v1;//��һ���ݽ�����������
	vector<int>  v2;//�ڶ����ݽ�����������
	vector<int>  v3;//�������ݽ�����������
	vector<int>  v4;//�������ݽ�����������

	//����ѡ�� �õ���һ�ֱ���������
	GenSpeaker(mapSpeaker, v1);
	
	//��һ��ѡ�ֳ�ǩ��ѡ�ֱ������鿴�������
	cout << " \n\n\n���������ʼ��1�ֱ���" << endl;
	cin.get();
	speech_contest_draw(v1);
	speech_contest(0, v1, mapSpeaker, v2);
	speech_contest_print(0, v2, mapSpeaker);//�鿴�������
	//�ڶ���ѡ�ֳ�ǩ��ѡ�ֱ������鿴�������
	cout << " \n\n\n���������ʼ��2�ֱ���" << endl;
	cin.get();
	speech_contest_draw(v2);
	speech_contest(1, v2, mapSpeaker, v3);
	speech_contest_print(1, v3, mapSpeaker);//�鿴�������
	//������ѡ�ֳ�ǩ��ѡ�ֱ������鿴�������
	cout << " \n\n\n���������ʼ��3�ֱ���" << endl;
	cin.get();
	speech_contest_draw(v3);
	speech_contest(2, v3, mapSpeaker, v4);
	speech_contest_print(2, v4, mapSpeaker);//�鿴�������

	return 0;
}


