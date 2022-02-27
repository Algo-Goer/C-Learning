/*
编写一个C++程序，它使用3个用户定义的函数（包括main( )），并生成输出
其中一个函数要调用两次，该函数生成前两行；另一个函数也被调用两次，并生成其余的输出。  
*/

#include <iostream>
using namespace std;
void print1();
void print2();
int main()
{
    print1();
    print1();
    print2();
    print2();
    return 0;
}
void print1()
{
    cout << "Three blind mice" << endl;
}
void print2()
{
    cout << "See how they run" << endl;
}