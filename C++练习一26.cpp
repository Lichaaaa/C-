#include<iostream>
using namespace std;

class Shape
{
public:
    int x, y;
public:
    void set(int x, int y)
    {
        this->x = x;
        this->y = y;
    }
    virtual void S() = 0;
};

class Cirle :public Shape
{
public:
    void S()
    {
        cout << "x+y" << x + y << endl;
    }
};

class Pirle :public Shape
{
public:
    void S()
    {
        cout << "x-y" << x - y << endl;
    }
};

class Dirle :public Shape
{
public:
    void S()
    {
        cout << "x*y" << x * y << endl;
    }
};

int main()
{
    //声明父类的指针
    Shape* p;
    Cirle c; c.set(1, 2);

    Pirle x; x.set(8, 6);

    Dirle d; d.set(8, 5);

    p = &c; p->S();
    p = &x; p->S();
    p = &d; p->S();

    return 0;
}
