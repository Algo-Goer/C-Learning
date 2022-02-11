// 5.编写一个程序，其中的main( )调用一个用户定义的函数（以摄氏温度值为参数，并返回相应的华氏温度值）。
// 下面是转换公式：华氏温度 = 1.8×摄氏温度 + 32.0
#include <iostream>
using namespace std;
double celsius_to_fahrenheit(double);
int main()
{
    double celsius;
    cout << "Please enter a Celsius value:";
    cin >> celsius;
    cout << celsius << " degrees Celsius is " << celsius_to_fahrenheit(celsius) << " degrees Fahrenheit." << endl;
    return 0;
}
double celsius_to_fahrenheit(double celsius)
{
    return 1.8 * celsius + 32.0;
}