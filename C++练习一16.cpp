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
void delete_contacter(struct contacter* p, int* p1)
{
	string i;
	int j, k;
	cout << "请输入要删除的联系人的姓名：" << endl;
	cin >> i;
	for (j = 0; j < 1000; j++)
	{
		if ((p + j)->name == i)
		{
			(p + j)->name = (p + j)->gender = (p + j)->phone_number = (p + j)->address = " ";
			(p + j)->age = 0;
			for (k = j; k < *p1; k++)
			{
				(p + k)->name = (p + k + 1)->name;
				(p + k)->gender = (p + k + 1)->gender;
				(p + k)->age = (p + k + 1)->age;
				(p + k)->phone_number = (p + k + 1)->phone_number;
				(p + k)->address = (p + k + 1)->address;
			}
			*p1 = *p1 - 1;
			break;
		}
	}
}
