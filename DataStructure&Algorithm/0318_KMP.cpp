int Index_KMP(SString S, SString T, int pos)
{
    // 利用模式串T的next函数求T在主串S中第pos个字符后的位置
    // 其中，T非空，1<=pos<=S.length
    i = pos;
    j = 1;
    while (i <= S.length && j <= S.length) // 两个串均未比较到串尾
    {
        if (j == 0 || S[i] == T[j]) // 字符相同或j为0
        {
            i++;
            j++; // 继续比较后续字符
        }
        else
            j = next[j]; // 模式串向右移动
    }
    if (j > T[0])        // j > T[0] 表示模式串匹配成功
        return i - T[0]; // i - T.length表示模式串在主串中的位置
    else
        return 0; 
}