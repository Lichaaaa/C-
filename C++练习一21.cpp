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
        cout << "Rider类无参构造函数调用" << endl;
    }

    Rider(string name) {
        cout << "Rider类有参构造函数调用" << endl;
        this->name = name;
    }

    Rider(const Rider& rider) {
        cout << "Rider类拷贝构造函数调用" << endl;
        name = rider.name;
    }

    ~Rider() {
        cout << "Rider类析构函数调用" << endl;
    }
};

void func1(Rider rider);

Rider func2();

void test1() {
    Rider r1("zero one");
    Rider r2(r1);
}

/**
 * 对象以值传递的形式作为函数的参数
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
    cout << "函数func1调用" << endl;
}

int main() {
    //    test1();
    //    test2();
    test3();
    system("pause");

    return 0;
}
