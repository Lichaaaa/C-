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
	cout << "局部变量a的地址：" << (int)&a << endl;
	cout << "全局变量g_a的地址：" << (int)&g_a << endl;

	static int s_a = 10;
	cout << "全局变量s_a的地址：" << (int)&s_a << endl;
	cout << "全局常量c_g_a的地址：" << (int)&c_g_a << endl;
	int c_l_a = 10;
	cout << "局部常量c_l_a的地址：" << (int)&c_l_a << endl;

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
