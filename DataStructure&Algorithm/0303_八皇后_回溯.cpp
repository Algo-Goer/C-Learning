int iCount = 0; // 全局变量
int WeiZhi[8];  // 全局数组

void EightQueen(int n) // 算法
{
    int i, j;
    int ct;     // 判断是否冲突
    if (n == 8) // 若8个皇后已放置完成
    {
        Output();
        return;
    }
    for (i = 1; i <= 8; ++i) // 试探
    {
        WeiZhi[n] = i; // 在该列的第i行放置
        // 判断第n个皇后是否与前面的冲突
        ct = 1;
        for (j = 0; j < n; ++j)
        {
            if (WeiZhi[j] == WeiZhi[n]) // 形成攻击
            {
                ct = 0;
            }
            else if (abs(WeiZhi[j] - WeiZhi[n]) == (n - j)) // 形成攻击
            {
                ct = 0;
            }
            else
            {
                continue;
            }
        }
        if (ct == 1)           // 没有冲突，就开始下一列的试探
            EightQueen(n + 1); // 递归调用
    }
}