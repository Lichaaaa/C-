#include<iostream>
using namespace std;
int main()
{
	int a = 5;
	int b = 20;
	int c;
	if (a && b)
	{
		cout << "Line 1 - Condition is true" << endl;
	}
	if (a || b)
	{
		cout << "Line 2 - Condition is true" << endl;
	}
	system("pause");
	return 0;
}