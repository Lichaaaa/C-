
#include<iostream>
using namespace std;
#include<string>

struct contacter
{
	string name;
	string gender;
	int age;
	string phone_number;
	string address;
};
void find_end(contacter* p, int* p1)
{
	int i;
	for (i = 0; i < 1000; i++)
	{
		if ((p + i)->age == 0)
			break;
	}
	*p1 = i;
}
void addcontacter(contacter* p, int* p1)
{
	cout << "������Ҫ��ӵ���ϵ�˵�������" << endl;
	cin >> (p + *p1)->name;
	cout << "������Ҫ��ӵ���ϵ�˵��Ա�" << endl;
	cin >> (p + *p1)->gender;
	cout << "������Ҫ��ӵ���ϵ�˵����䣺" << endl;
	cin >> (p + *p1)->age;
	cout << "������Ҫ��ӵ���ϵ�˵���ϵ�绰��" << endl;
	cin >> (p + *p1)->phone_number;
	cout << "������Ҫ��ӵ���ϵ�˵ļ�ͥסַ��" << endl;
	cin >> (p + *p1)->address;
	find_end(p, p1);
theend:cout << "�ټ���" << endl;
	return ;
}

