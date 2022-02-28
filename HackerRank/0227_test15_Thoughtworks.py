# 找出唯一共同元素
# 输出的数列中包含array1和array2里都有的整数,且该整数在返回数列中只能出现一次
# 如果没有公共元素,则返回一个空列表
# 输出的数列应该有序排列

def FindCommonElements(array1, array2):
    # 比较array1和array2中的元素,如果array1和array2中都有该元素,则将该元素放入结果列表
    ans = []
    for i in array1:
        for j in array2:
            if i == j:
                ans.append(i)
    # 对结果列排序
    ans.sort()
    # 去重
    ans = list(set(ans))
    return ans
