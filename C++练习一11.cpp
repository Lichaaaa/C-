#include<iostream>
using namespace std;
int main()
{

	cout << "��������ĳɼ�:" << endl;
	int grade = 0;
	cin >> grade;
	cout << "��ĳɼ���:" << grade << endl;

	switch (grade)
	{
	case 90:~100;
		cout << "��ĳɼ�Ϊ����" << endl;
		break;
	case 70:~89;
		cout << "��ĳɼ�Ϊ����" << endl;
		break;
	case 60:~69;
		cout << "��ĳɼ�Ϊ����" << endl;
		break;
	case 0:~59;
		cout << "��ĳɼ�Ϊ������" << endl;
		break;
	default:
		cout << "�������Ϊ��Ч�ɼ�" << endl;
		break;
	}
	system("pause");
	return 0;
}
	