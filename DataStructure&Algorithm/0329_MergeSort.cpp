/*
分治的典型应用：归并排序-递归实现
1、把前一半排序
2、把后一半排序
3、把两半归并到一个新的有序数组，然后再拷贝回原数组，排序完成
*/

#include <iostream>
using namespace std;
void Merge(int a[], int s, int m, int e, int tmp[])
{
    // 将数组a的局部a[s, m]和a[m+1, e]合并到tmp，并保证tmp有序，然后再拷贝回a[s, m]
    // 归并排序的时间复杂度为O(e-m+1)即O(n)
    int pb = 0; // 指针
    int p1 = s, p2 = m + 1;
    while (p1 <= m && p2 <= e)
    {
        if (a[p1] < a[p2])
        {
            tmp[pb++] = a[p1++]; // 拷贝到tmp中
        }
        else
            tmp[pb++] = a[p2++];
    }
    while (p1 <= m)
    {
        tmp[pb++] = a[p1++];
    }
    while (p2 <= e)
    {
        tmp[pb++] = a[p2++];
    }
    for (int i = 0; i < e - s + 1; ++i)
    {
        a[s + i] = tmp[i]; // 拷贝回原数组
    }
}
void MergeSort(int a[], int s, int e, int tmp[])
{
    if (s < e)
    {
        int m = s + (e - s) / 2;     // 取中间位置
        MergeSort(a, s, m, tmp);     // 对左半边排序
        MergeSort(a, m + 1, e, tmp); // 对左半边排序
        Merge(a, s, m, e, tmp);      // 合并两个有序数组
    }
}
int a[10] = {13, 27, 19, 2, 8, 12, 2, 8, 30, 89};
int b[10];
int main()
{
    int size = sizeof(a) / sizeof(int); // 数组长度
    MergeSort(a, 0, size - 1, b);       // 归并排序
    for (int i = 0; i < size; ++i)
    {
        cout << a[i] << ",";
    }
    cout << endl;
    return 0;
}