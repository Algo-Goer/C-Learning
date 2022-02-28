#include <iostream>
#include <cmath>
using namespace std;
class CFindRoot // 使用关键字class声明一个类，类名为CFindRoot
{
public:                                     // 以下是公有成员函数
    void SetData(float x, float y, float z) // 设置一元二次方程的系数
    {
        ...
    }
    void Find() // 求方程的根
    {
        ...
    }
    void Display() // 显示方程的根
    {
        ...
    }

private:           // 以下是私有成员
    float a, b, c; // a,b,c表示一元二次方程的系数，delta用来判断方程根的情况
    double x1, x2; // x1,x2表示方程的根
} obj1, obj2, obj3;