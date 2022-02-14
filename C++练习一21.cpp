#include <iostream>
#include <string>
using namespace std;

class Rider {
private:
    string name;

public:
    string getName() {
        return name;
    }

    Rider() {
        cout << "Rider���޲ι��캯������" << endl;
    }

    Rider(string name) {
        cout << "Rider���вι��캯������" << endl;
        this->name = name;
    }

    Rider(const Rider& rider) {
        cout << "Rider�࿽�����캯������" << endl;
        name = rider.name;
    }

    ~Rider() {
        cout << "Rider��������������" << endl;
    }
};

void func1(Rider rider);

Rider func2();

void test1() {
    Rider r1("zero one");
    Rider r2(r1);
}

/**
 * ������ֵ���ݵ���ʽ��Ϊ�����Ĳ���
 */
void test2() {
    Rider r1("thousand");
    func1(r1);
}

void test3() {
    Rider r1 = func2();
    cout << "Adderss of Rider r1 is " << (int)&r1 << endl;
}

Rider func2() {
    Rider r1 = (string)"thunder";
    cout << "Adderss of Rider r1 is " << (int)&r1 << endl;
    return r1;
}

void func1(Rider rider) {
    cout << "����func1����" << endl;
}

int main() {
    //    test1();
    //    test2();
    test3();
    system("pause");

    return 0;
}
