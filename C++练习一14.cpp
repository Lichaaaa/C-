
#include <iostream>
#include <string>
using namespace std;

// Ӣ�۽ṹ��
struct Hero
{
    // ����
    string name;
    int age;
    //�Ա�
    string sex;
};
// ð������
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
// ��ӡ��Ϣ
void printHero(struct Hero heroarray[], int len)
{
    for (int i = 0; i < len; i++)
    {
        cout << "name " << heroarray[i].name << " age " << heroarray[i].age << " sex " << heroarray[i].sex << endl;
    }
}


int main()

{
    // ���Ӣ�۽ṹ��
    struct Hero heroarray[5] =
    {
        {"liubei",23,"boy"},
        {"guanyu",22,"boy"},
        {"zhangfei",20,"boy"},
        {"zhaoyun",21,"boy"},
        {"diaochan",19,"girl"},
    };
    int len = sizeof(heroarray) / sizeof(heroarray[0]);
    // ��ӡ��ʼֵ
    printHero(heroarray, len);





    //�������������
    bubbleSort(heroarray, len);

    // ��ӡ������ֵ
    printHero(heroarray, len);



    system("pause");
    return 0;
}
