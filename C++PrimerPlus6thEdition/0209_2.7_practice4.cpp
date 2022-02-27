// 编写一个程序，让用户输入其年龄，然后显示该年龄包含多少个月

#include <iostream>
using namespace std;
int convert(int);
int main()
{
    int age;
    cout << "Enter your age:";
    cin >> age;
    cout << "It contains " << convert(age) << " months." << endl;

}
int convert(int age)
{
    return 12 * age;
}