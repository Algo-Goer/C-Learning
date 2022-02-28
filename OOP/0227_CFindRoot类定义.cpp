#include <iostream>
#include <cmath>
using namespace std;
class CFindRoot // 使用关键字class声明一个类，类名是CFindRoot
{
public:
    // 以下是公有成员函数
    void SetData(float x, float y, float z) // 设置一元二次方程的系数,用3个参数初始化类的3个数据成员a,b,c
    {
        a = x;
        b = y;
        c = z;
        delta = b * b - 4 * a * c;
    }
    void Find() // 求方程的根
    {
        if (delta > 0)
        {
            x1 = (-b + sqrt(delta)) / (2 * a);
            x2 = (-b - sqrt(delta)) / (2 * a);
            return;
        }
        else if (delta == 0)
        {
            x1 = x2 = -b / (2 * a);
            return;
        }
        else // delta小于0，复数
        {
            x1 = (-b) / (2 * a);
            x2 = sqrt(-delta) / (2 * a);
        }
    }
    void Display() // 输出方程根
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

private:                  // 以下是私有成员
    float a, b, c, delta; // a,b,c表示一元二次方程系数，delta用来判断方程根的情况
    double x1, x2;        // x1,x2表示方程的根
};