#include<iostream>
using namespace std;
int main()
{

	cout << "请输入你的成绩:" << endl;
	int grade = 0;
	cin >> grade;
	cout << "你的成绩是:" << grade << endl;

	switch (grade)
	{
	case 90:~100;
		cout << "你的成绩为优秀" << endl;
		break;
	case 70:~89;
		cout << "你的成绩为良好" << endl;
		break;
	case 60:~69;
		cout << "你的成绩为及格" << endl;
		break;
	case 0:~59;
		cout << "你的成绩为不及格" << endl;
		break;
	default:
		cout << "你输入的为无效成绩" << endl;
		break;
	}
	system("pause");
	return 0;
}
	