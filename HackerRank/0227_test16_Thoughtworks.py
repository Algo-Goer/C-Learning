# 去掉奇数，留下偶数并排序，并将0放在数组最后，返回新数组
def even_and_odds(numbers):
    ans = []
    zeros= []
    for i in numbers:
        if i % 2 == 0:
            ans.append(i)
    # 如果ans中有0，就把0放在一个新数组中
    for j in ans:
        if j == 0:
            zeros.append(j)
    # 删除ans中所有0
    for k in zeros:
        ans.remove(k)
    # 对ans排序
    ans.sort()
    # 将zeros数组拼接在ans数组后面，形成新数组
    ans.extend(zeros)
    return ans

