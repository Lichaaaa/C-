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
	std::cout << "立方体面积为：" << area << endl;
}

void Cube:: CubeVolume()
{
	int volume = 0;
	volume = m_l * m_h * m_w;
	cout << "立方体体积为：" << volume << endl;
}

int main() {
	Cube c1;
	int length, widh, high;

	cout << "请输入立方体长：" << endl;
	cin >> length;
	cout << "请输入立方体宽：" << endl;
	cin >> widh;
	cout << "请输入立方体高：" << endl;
	cin >> high;

	c1.m_l = length;
	c1.m_w = widh;
	c1.m_h = high;

	c1.CubeArea();
	c1.CubeVolume();

	system("pause");
	return 0;
}
