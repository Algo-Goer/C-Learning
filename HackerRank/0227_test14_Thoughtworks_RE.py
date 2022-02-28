# 交换相邻数字
# 将给定的整型数组中2个相邻元素进行交换,返回新数组
def swapAdjacent(array):
    new_array = array.copy()
    for i in range(len(array) - 1):
        if i % 2 == 0 and i < len(array) - 1:
            new_array[i], new_array[i + 1] = array[i + 1], array[i]
        # 最后一个元素如果下标为奇数，就直接加到新数组
        elif i == len(array) - 1 and i % 2 != 0:
            new_array.append(array[i])
    # 最后一个元素如果下标为偶数，就直接加到新数组
    return new_array

# RE