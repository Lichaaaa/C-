
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
	cout << "请输入要添加的联系人的姓名：" << endl;
	cin >> (p + *p1)->name;
	cout << "请输入要添加的联系人的性别：" << endl;
	cin >> (p + *p1)->gender;
	cout << "请输入要添加的联系人的年龄：" << endl;
	cin >> (p + *p1)->age;
	cout << "请输入要添加的联系人的联系电话：" << endl;
	cin >> (p + *p1)->phone_number;
	cout << "请输入要添加的联系人的家庭住址：" << endl;
	cin >> (p + *p1)->address;
	find_end(p, p1);
theend:cout << "再见！" << endl;
	return ;
}

