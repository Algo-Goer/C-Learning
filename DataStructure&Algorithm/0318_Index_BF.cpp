// SString表示定长顺序存储结构
int Index_BF(SString S, SString T, int pos)
{
    // 返回模式串T在主串S中第pos个字符开始第一次出现的位置。若不存在，则返回0
    // 其中，T非空，1<=pos<=S.length
    i = pos;
    j = 1;                                 // 初始化
    while (i <= S.length && j <= T.length) // 两个串均未比较到串尾
    {
        if (S[i].ch == T[j].ch) // 字符相同
        {
            i++;
            j++; // 继续比较后续字符
        }
        else
        {
            i = i - j + 2;
            j = 1; // 指针后退重新开始匹配
        }
        if (j > T.length)        // 模式串匹配成功
            return i - T.length; // i - T.length表示模式串在主串中的位置
        else
            return 0; // 匹配失败
    }
}