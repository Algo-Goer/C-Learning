/*
分治典型应用2：快速排序
1、设k=a[0]，将k挪到适当位置，使得比k小的元素都在k左边，比k大的元素都在k右边，和k相等的，在k左右出现均可
第一步O(n)时间完成
2、把k左边部分快速排序
3、把k右边部分快速排序
*/
#include <iostream>
using namespace std;
void swap(int & a, int & b) // 交换变量a和b, &表示引用
{
    int tmp = a;
    a = b;
    b = tmp;
}
void QuickSort(int a[], int s, int e)
{
    if (s >= e)
        return;
    int k = a[s];
    int i = s, j = e;
    while (i != j)
    {
        while (j > i && a[j] >= k)
            --j;
        swap(a[i], a[j]);
        while (i < j && a[i] <= k)
            ++i;
        swap(a[i], a[j]);
    }
}
