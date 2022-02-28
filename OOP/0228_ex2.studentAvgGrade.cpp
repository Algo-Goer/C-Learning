// CStudent.h 这是头文件,在此文件中进行类的声明
using namespace std;
#include <string>
class CStudent // 类声明
{
public:
    void setinfo(string, int, char, int);
    void setgrad(float, float, float);
    float avg();
    void display();

private:
    string name;
    int id;
    char sex;
    int age;
    float grade[3];
};

// CStudent.cpp 在此文件中进行函数定义
#include <iostream>
using namespace std;
#include "CStudent.h"
void CStudent::setinfo(string na, int i, char s, int a)
{
    name = na;
    id = i;
    sex = s;
    age = a;
}
void CStudent::setgrad(float a, float b, float c)
{
    grade[0] = a;
    grade[1] = b;
    grade[2] = c;
}
float CStudent::avg()
{
    return (grade[0] + grade[1] + grade[2]) / 3;
}
void CStudent::display()
{
    cout << "id:" << id << endl;
    cout << "name:" << name << endl;
    cout << "sex:" << sex << endl;
    cout << "age:" << age << endl;
}

// main.cpp 主函数模块
#include <iostream>
#include "CStudent.h" // 将类声明头文件包含进来
int main()
{
    CStudent stud1;   // 定义对象
    stud1.setinfo("Sam", 2006102, 'm', 18);
    stud1.setgrad(79, 98, 87);
    stud1.display();
    cout << "Average Score: " << stud1.avg();
    return 0;
}