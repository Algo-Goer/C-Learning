void get_next(SString T, int next[])
{
    // 求模式串T的next函数值并存入数组next
    i = 1;
    next[1] = 0;
    j = 0; // 初始化
    while (i < T.length)
    {
        if (j == 0 || T.ch[i] == T.ch[j])
        {
            ++i;
            ++j;
            next[i] = j;
        }
        else
            j = next[j];
    }
}