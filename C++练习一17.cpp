#include <iostream>
using namespace std;
int g_a = 10;
const int c_g_a = 10;

int* func()
{
	int a = 10;
	return &a;
}

int* fun()
{
	int* p = new int(10);
	return p;
}

void test01()
{
	int* p = fun();
	cout << *p << endl;
	cout << *p << endl;
	cout << *p << endl;
	delete p;
}

void test02()
{
	int* arr = new int[10];
	for (int i = 0; i < 10; i++)
	{
		arr[i] = i + 100;
	}
	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << endl;
	}
	delete[] arr;
}

int main()
{
	int a = 10;
	cout << "�ֲ�����a�ĵ�ַ��" << (int)&a << endl;
	cout << "ȫ�ֱ���g_a�ĵ�ַ��" << (int)&g_a << endl;

	static int s_a = 10;
	cout << "ȫ�ֱ���s_a�ĵ�ַ��" << (int)&s_a << endl;
	cout << "ȫ�ֳ���c_g_a�ĵ�ַ��" << (int)&c_g_a << endl;
	int c_l_a = 10;
	cout << "�ֲ�����c_l_a�ĵ�ַ��" << (int)&c_l_a << endl;

	int* p = func();
	cout << *p << endl;
	cout << *p << endl;
	int* p1 = fun();
	cout << *p1 << endl;
	cout << *p1 << endl;
	cout << *p1 << endl;
	cout << *p1 << endl;

	test01();
	test02();

	system("pause");
	return 0;
}
