
#include <iostream>
#include <string>
using namespace std;

// 英雄结构体
struct Hero
{
    // 姓名
    string name;
    int age;
    //性别
    string sex;
};
// 冒泡排序
void bubbleSort(struct Hero heroarray[], int len)
{
    for (int i = 0; i < len - 1; i++)
    {
        for (int j = 0; j < len - i - 1; j++)
        {
            if (heroarray[j].age > heroarray[j + 1].age)
            {
                struct Hero temp = heroarray[j];
                heroarray[j] = heroarray[j + 1];
                heroarray[j + 1] = temp;


            }
        }
    }
};
// 打印信息
void printHero(struct Hero heroarray[], int len)
{
    for (int i = 0; i < len; i++)
    {
        cout << "name " << heroarray[i].name << " age " << heroarray[i].age << " sex " << heroarray[i].sex << endl;
    }
}


int main()

{
    // 设计英雄结构体
    struct Hero heroarray[5] =
    {
        {"liubei",23,"boy"},
        {"guanyu",22,"boy"},
        {"zhangfei",20,"boy"},
        {"zhaoyun",21,"boy"},
        {"diaochan",19,"girl"},
    };
    int len = sizeof(heroarray) / sizeof(heroarray[0]);
    // 打印初始值
    printHero(heroarray, len);





    //对数组进行排序
    bubbleSort(heroarray, len);

    // 打印排序后的值
    printHero(heroarray, len);



    system("pause");
    return 0;
}
