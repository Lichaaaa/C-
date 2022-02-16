#include<iostream>
using  namespace std;

class Person
{
public:
	void showClassName()
	{
		cout << "this is Person ClassName" << endl;
	}
	void showPersonAge()
	{
		cout << "age" << this->m_Age << endl;
	}
	int m_Age;
};

void test1()
{
	Person* p = NULL;
	p->showClassName();
	p->showPersonAge();
}

int main()
{
	test1();
	system("pause");
	return 0;
}
