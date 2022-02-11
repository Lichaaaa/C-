#include <iostream>
float temp;
float fn1(float r);
float& fn2(float r);
float fn1(float r)
{
	temp = (float)(r * r * 3.14);
	return temp;
}
float& fn2(float r)
{
	temp = (float)(r * r * 3.14);
	return temp;
}
void main()
{
	float a = fn1(10.0);
	float& b = fn1(10.0);
	float c = fn2(10.0);
	float& d = fn2(10.0);
	cout << a << c << d;
}
