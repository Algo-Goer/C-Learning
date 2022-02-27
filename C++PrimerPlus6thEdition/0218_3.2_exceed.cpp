// exceed.cpp -- exceeding some integer limits
#include <iostream>
#define ZERO 0        // makes ZERO symbol for 0 values
#include <climits>    // defines INT_MAX as largest int value
int main()
{
    using namespace std;
    short sam = SHRT_MAX;    // SHRT_MAX常量是在climits标头中定义的宏常量,用于获取short int对象的最大值,它返回short int对象可以存储的最大值,即32767
    unsigned short sue = sam; //okay if variable sam already defined

    cout << "Sam has " << sam << " dollars and Sue has " << sue;
    cout << " dollars deposited." << endl
         << "Add $1 to each account." << endl << "Now ";
    sam = sam + 1;
    sue = sue + 1;
    cout << "Sam has " << sam << " dollars and Sue has " << sue;
    cout << " dollars deposited.\nPoor Sam!" << endl;
    sam = ZERO;
    sue = ZERO;
    cout << "Sam has " << sam << " dollars and Sue has " << sue;
    cout << " dollars deposited." << endl;
    cout << "Take $1 from each account." << endl << "Now ";
    sam = sam - 1;
    sue = sue - 1;
    cout << "Sam has " << sam << " dollars and Sue has " << sue;
    cout << " dollars deposited." << endl << "Lucky Sue!" << endl;
    return 0;
}