#include<iostream>
#include<string>
using namespace std;
int m_length;
int m_width;
int m_heigth;


//设计立方体类
class cube
{
public:

	void set_length(int len) //设置长
	{
		m_length = len;
	}

	void set_width(int wid) //设置宽
	{
		m_width = wid;
	}

	void set_heigth(int hei) //设置高
	{
		m_heigth = hei;
	}


	int get_length() //获取长
	{
		return m_length;
	}

	int get_width() //获取宽
	{
		return m_width;
	}

	int get_heigth() //获取高
	{
		return m_heigth;
	}

	int calculate_area()//计算立方体的面积
	{
		return 2 * m_length * m_width + 2 * m_length * m_heigth + 2 * m_width * m_heigth;
	}

	int calculate_volume()//计算立方体的体积
	{
		return m_length * m_width * m_heigth;
	}


	bool isSame(cube c)//成员函数
	{
		if ((m_length == c.get_length()) && (m_width == c.get_width()) && (m_heigth == c.get_heigth()))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
};