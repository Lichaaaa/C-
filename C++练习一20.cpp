#include<iostream>
#include<string>
using namespace std;
int m_length;
int m_width;
int m_heigth;


//�����������
class cube
{
public:

	void set_length(int len) //���ó�
	{
		m_length = len;
	}

	void set_width(int wid) //���ÿ�
	{
		m_width = wid;
	}

	void set_heigth(int hei) //���ø�
	{
		m_heigth = hei;
	}


	int get_length() //��ȡ��
	{
		return m_length;
	}

	int get_width() //��ȡ��
	{
		return m_width;
	}

	int get_heigth() //��ȡ��
	{
		return m_heigth;
	}

	int calculate_area()//��������������
	{
		return 2 * m_length * m_width + 2 * m_length * m_heigth + 2 * m_width * m_heigth;
	}

	int calculate_volume()//��������������
	{
		return m_length * m_width * m_heigth;
	}


	bool isSame(cube c)//��Ա����
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