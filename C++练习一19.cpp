#include<iostream>
#include<string>
#include<ctime>
using namespace std;

class Cube
{
public:
	int m_l, m_w, m_h;
	void CubeArea();
	void CubeVolume();
};

void Cube::CubeArea()
{
	int area = 0;
	area = 2 * m_l * m_h + 2 * m_l * m_w + 2 * m_h * m_w;
	std::cout << "���������Ϊ��" << area << endl;
}

void Cube:: CubeVolume()
{
	int volume = 0;
	volume = m_l * m_h * m_w;
	cout << "���������Ϊ��" << volume << endl;
}

int main() {
	Cube c1;
	int length, widh, high;

	cout << "�����������峤��" << endl;
	cin >> length;
	cout << "�������������" << endl;
	cin >> widh;
	cout << "������������ߣ�" << endl;
	cin >> high;

	c1.m_l = length;
	c1.m_w = widh;
	c1.m_h = high;

	c1.CubeArea();
	c1.CubeVolume();

	system("pause");
	return 0;
}
