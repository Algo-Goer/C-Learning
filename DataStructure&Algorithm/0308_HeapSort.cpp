/*
算法基础：打开程序设计之门
大连理工大学ACM

堆排序算法：
设堆有n个元素，每一次调整堆，堆顶位置将得到堆最大值，然后将堆顶元素和最后一个元素互换，
对前n-1个元素继续调整，直到整个堆有序为止。
堆排序时间复杂度O(log2n)。
堆排序是不稳定排序

堆定义：
堆（Heap）是一棵完全二叉树。
应用场景：堆排序、优先队列等。
用数组存堆时，对于任意一个节点x，其左右子节点的标号分别为2x+1和2x+2。

建堆的核心内容是调整堆，使得二叉树满足堆的定义（每个节点值都不大于其父节点的值）。
调堆的过程应该从最后一个非叶子节点开始，一直调整到根节点。
*/
#include <cstdio> // <cstdio>表示C语言标准输入输出头文件

void heap_adjust(int arr[], int father, int n)
{
    // 调整为大顶堆
    int child = father * 2 + 1; // 左子节点
    int tmp = arr[father];
    while (child < n)
    {
        // 如果该节点有两个子节点，则取其中较大的一个，否则取左子节点
        if (child + 1 < n && arr[child] < arr[child + 1])
            child++;
        // 如果较大的子节点小于该节点，则不需要继续调整，退出
        if (arr[father] >= arr[child])
            break;
        arr[father] = arr[child]; // 否则交换该节点和较大子节点，继续向下调整
        father = child;
        child = father * 2 + 1;
        arr[father] = tmp;
    }
}

void build_heap(int arr[], int n)
{
    // 建堆时从非叶子节点开始调整
    for (int i = (n - 1) / 2; i >= 0; --i)
    {
        heap_adjust(arr, i, n);
    }
}

void heap_sort(int arr[], int beg, int end)
{
    // 堆排序，先建堆
    // 然后每一次交换未调整好的最后一个元素和第一个元素
    build_heap(arr + beg, end - beg);
    for (int tmp, i = end - 1; i > beg; --i)
    {
        tmp = arr[i];
        arr[i] = arr[0];
        arr[0] = tmp;
        heap_adjust(arr + beg, 0, i);
    }
}

int main()
{
    int arr[100];
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i)
        scanf("%d", &arr[i]);
    heap_sort(arr, 0, n);
    for (int i = 0; i < n; ++i)
        printf("%d", arr[i]);
    return 0;
}