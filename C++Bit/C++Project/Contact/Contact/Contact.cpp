#include "Contact.h"

//��ʼ��ͨѶ¼
void InitContact(Contact* pcon){
	assert(pcon != NULL);
	pcon->count = 0;
	memset(pcon, 0, sizeof(pcon->data));
}

//�����ϵ��
void AddContact(Contact* pcon){
	assert(pcon!= NULL);
	//¼����ϵ�˵���Ϣ
	printf("����������:>");
	scanf("%s", &pcon->data[pcon->count].name);
	printf("����������:>");
	scanf("%d", &(pcon->data[pcon->count].age));
	printf("�������Ա�:>");
	scanf("%s", pcon->data[pcon->count].sex);
	printf("������绰:>");
	scanf("%s", pcon->data[pcon->count].tel);
	printf("�������ַ:>");
	scanf("%s", pcon->data[pcon->count].addr);
	pcon->count++;
	printf("��ϵ����Ϣ¼��ɹ���\n");
}

//���Ѿ�¼�����ϵ���У�����ָ��Ŀ��
static int FindByName(Contact* pcon, char name[]){
	assert(pcon != NULL);
	for (int i = 0; i < pcon->count; ++i){
		if (strcmp(pcon->data[i].name, name) == 0){
			return i;
		}
	}
	return -1;
}

//ɾ����ϵ��
void DelContact(Contact* pcon){
	assert(pcon);
	char name[MAX_NAME_SIZE];
	if (pcon->count == 0){
		printf("ͨѶ¼Ϊ�գ�����ɾ��\n");
		return;
	}
	printf("��������Ҫɾ����������>");
	scanf("%s", name);
	//ɾ��֮ǰ��Ҫ���Ҹ������Ƿ����
	int pos = FindByName(pcon, name);
	if (pos == -1){
		printf("����Ҫɾ������ϵ�˲����ڣ�\n");
	}
	for (int i = 0; i < pcon->count; ++i){
		pcon->data[i] = pcon->data[i + 1];
		printf("ɾ���ɹ�\n");
	}
}

void FindContact(Contact* pcon){
	assert(pcon);
	char name[MAX_NAME_SIZE];
	int pos = FindByName(pcon, name);
	if (pcon->count == 0){
		printf("��ϵ��Ϊ�գ�\n");
		return;
	}
	printf("��������Ҫ���ҵ�������>");
	scanf("%s", name);
	if (pos == -1){
		printf("�����ҵ���ϵ�˲����ڣ�\n");
	}
	printf("%15s\t%5d\t%5s\t%12s\t%20s\n", pcon->data[pos].name,
		pcon->data[pos].age,
		pcon->data[pos].sex,
		pcon->data[pos].tel,
		pcon->data[pos].addr);
}



void ModifyContact(Contact* pcon){
	int i = 0;
	char name[MAX_NAME_SIZE] = { 0 };
	int pos = 0;
	assert(pcon);

	if (pcon->count == 0) //�յľͲ�����
	{
		printf("ͨѶ¼�ѿգ��޷��޸���Ϣ\n");
		return;
	}
	//�޸�
	printf("������Ҫ�޸���Ŀ������:>");
	scanf("%s", name);
	//���ң��޸�֮ǰ��Ҫ�Ȳ��ң�
	pos = FindByName(pcon, name);
	if (pos == -1)
	{
		printf("Ҫ�޸ĵ���Ŀ������\n");
		return;
	}
	//ѯ��Ҫ��ʲô
	printf("������Ҫ�޸�ʲô��Ϣ��1-���֣�2-���䣬3-�Ա�4-�绰��5-סַ��:>");
	int msg;
	scanf("%d", &msg);
	switch (msg)
	{
	case 1:
		printf("�������µ�����:>");
		scanf("%s", pcon->data[pos].name);
		break;
	case 2:
		printf("�������µ�����:>");
		scanf("%d", &pcon->data[pos].age);
		break;
	case 3:
		printf("�������µ��Ա�:>");
		scanf("%s", pcon->data[pos].sex);
		break;
	case 4:
		printf("�������µĵ绰:>");
		scanf("%s", pcon->data[pos].tel);
		break;
	case 5:
		printf("�������µĵ�ַ:>");
		scanf("%s", pcon->data[pos].addr);
		break;
	default:
		printf("���������޸�ʧ��\n");
		return;
	}
	printf("�޸ĳɹ�\n");
}
void ShowContact(const Contact* pcon){
	assert(pcon != NULL);
	printf("**************************************************\n");
	printf("*%-10s%-8s%-8s%-12s%-30s\n", "����", "�Ա�", "����", "�绰", "סַ");
	for (int i = 0; i<pcon->count; ++i)
	{
		printf("*%-10s%-8s%-8d%-12s%-30s\n", pcon->data[i].name,
			pcon->data[i].sex,
			pcon->data[i].age,
			pcon->data[i].tel,
			pcon->data[i].addr);
	}
	printf("**************************************************\n");
}

void ClearContact(Contact* pcon){
	InitContact(pcon);
}
void SortContact(Contact* pcon){
	int i, j;
	PerInfo tmp;
	for (i = 0; i < pcon->count - 1; i++)
	{
		for (j = 0; j < pcon->count - 1 - i; j++)
		{
			if (0 < strcmp(pcon->data[j].name, pcon->data[j + 1].name))
			{
				tmp = pcon->data[j];
				pcon->data[j] = pcon->data[j + 1];
				pcon->data[j + 1] = tmp;
			}
		}
	}
}

