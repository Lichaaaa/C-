#include<iostream>
using namespace std;

int main()
{
	int a = 21;
	int b = 10;
	int c;
	c = a + b;
	cout << "c =" << c << endl;
	c = a - b;
	cout << "c =" << c << endl;
	c = a * b;
	cout << "c =" << c << endl;
	c = a / b;
	cout << "c =" << c << endl;
	c = a % b;
	cout << "c =" << c << endl;

	int d = 10;
	c = d++;
	cout << "c =" << c << endl;
	c = c--;
	cout << "c =" << c << endl;
	system("pause");
	return 0;
}