#include<iostream>
using namespace std;
class Phone
{
public:
	Phone(string name)
	{
		m_PhoneName = name;
		cout << "Phone����" << endl;
	}

	~Phone()
	{
		cout << "Phone����" << endl;
	}

	string m_PhoneName;

};


class Person
{
public:

	Person(string name, string pName) :m_Name(name), m_Phone(pName)
	{
		cout << "Person����" << endl;
	}

	~Person()
	{
		cout << "Person����" << endl;
	}

	void playGame()
	{
		cout << m_Name << " ʹ��" << m_Phone.m_PhoneName << " ���ֻ�! " << endl;
	}

	string m_Name;
	Phone m_Phone;

};
void test01()
{
	Person p("����", "ƻ��X");
	p.playGame();

}


int main() {

	test01();

	system("pause");

	return 0;
}

