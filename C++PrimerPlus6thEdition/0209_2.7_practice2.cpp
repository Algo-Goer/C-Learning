// 编写一个C++程序，它要求用户输入一个以long为单位的距离，然后将它转换为码（一long等于220码）

#include <iostream>
using namespace std;
int convert(int);
int main()
{
    int distance;
    cout << "Enter a distance, in longs:";
    cin >> distance;
    int yards = convert(distance);
    cout << distance << " longs = " << yards << " yards." << endl;
}
int convert(int longs)
{
    return 220 * longs;
}