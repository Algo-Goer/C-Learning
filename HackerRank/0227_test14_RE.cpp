/*
交换相邻数字
将给定的整型数组中2个相邻元素进行交换,返回新数组
*/
vector<int> swapAdjacent(vector<int> array) 
{
    // 建立新数组
    vector<int> newArray;
    // 循环遍历原数组
    
    for (int i = 0; i < array.size(); ++i)
    {
        // 将偶数下标的数字和后一位数字交换，并加入到新数组
        if (i % 2 == 0 && i > 1)
            newArray.push_back(array[i + 1]);
        else
            newArray.push_back(array[i - 1]);
    }
    return newArray;
}
