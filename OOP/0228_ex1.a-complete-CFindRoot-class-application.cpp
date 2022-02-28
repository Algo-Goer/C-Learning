// FindRoot.h在头文件中声明一元二次方程类
class CFindRoot
{
public:
    void SetData(float x, float y, float z);
    void Find();
    void Display();

private:
    float a, b, c, delta;
    double x1, x2;
};

// FindRoot.cpp在与类定义头文件同名的.cpp文件中定义成员函数实现部分
#include <iostream>
#include <cmath>
#include "FindRoot.h"
using namespace std;
void CFindRoot::SetData(float x, float y, float z)
{
    a = x;
    b = y;
    c = z;
    delta = b * b - 4 * a * c;
}
void CFindRoot::Find()
{
    if (delta > 0)
    {
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
        return;
    }
    else if (delta == 0)
    {
        x1 = x2 = (-b) / (2 * a);
        return;
    }
    else
    {
        x1 = (-b) / (2 * a);
        x2 = sqrt(-delta) / (2 * a);
    }
}
void CFindRoot::Display()
{
    if (delta > 0)
    {
        cout << "x1 = " << x1 << "\nx2 = " << x2 << endl;
        return;
    }
    else if (delta == 0)
    {
        cout << "x1 = x2 = " << x1 << endl;
        return;
    }
    else
    {
        cout << "x1 = " << x1 << "+" << x2 << "i" << endl;
        cout << "x1 = " << x1 << "-" << x2 << "i" << endl;
    }
}

// main.cpp 主函数
#include <iostream>
#include "FindRoot.h"
using namespace std;
int main()
{
    CFindRoot obj1, obj2, obj3, *p; // 定义了类对象
    CFindRoot &obj4 = obj3;         // 定义了对象指针，obj4是obj3的应用，所以obj4与obj3占同样的内存空间
    p = &obj2;                      // 定义了对象的引用，指针p指向obj2
    obj1.SetData(1, 3, 2);
    obj1.Find();
    obj1.Display(); // 用对象调用类的共有成员函数SetData(),给对象的数据成员初始化
    p->SetData(1, 4, -5);
    p->Find();
    p->Display(); // 用对象指针p调用...
    obj4.SetData(1, 2, 5);
    obj3.Find();
    obj3.Display(); // 用对象引用调用...
    return 0;
}
