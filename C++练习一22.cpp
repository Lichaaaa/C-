#include<iostream>
using namespace std;

class Person {
public:
	static void func()
	{
		m_a = 10;
		cout << "func��̬��Ա��������" << endl << m_a << endl;
	}

	static int m_a;
	int m_b;
};
int Person::m_a = 0;

void test()
{
	Person p;
	p.func();
}

void main()
{
	test();
}
