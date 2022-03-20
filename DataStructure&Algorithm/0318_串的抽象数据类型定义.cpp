ADT String
{
    数据对象:D = {ai | ai ∈ CharacterSet, i = 1, 2, ..., n, n >= 0}
    数据关系:R1 = {<ai-1, ai> | ai-1, ai ∈ D, i = 2, ..., n}
    基本操作:
        StrAssign(&T, chars)  // 字符串赋值
            初始条件:chars是字符串常量
            操作结果:生成一个其值等于chars的串T
        StrCopy(&T, S) // 串拷贝
            初始条件:串S存在
            操作结果:由串S复制得串T
        StrEmpty(S)   // 判空
            初始条件:串S存在
            操作结果:若S为空串,则返回true,否则返回false
        StrCompare(S, T)  // 字符串比较
            初始条件:串S和T存在
            操作结果:若S>T,则返回值>0;若S=T,则返回值=0;若S<T,则返回值<0
        StrLength(S)  // 串长度
            初始条件:串S存在
            操作结果:返回S的元素个数,称为串的长度
        ClearString(S) // 清空串
            初始条件:串S存在
            操作结果:将S清为空串
        Concat(&T, S1, S2) // 串连接
            初始条件:串S1和S2存在
            操作结果:用T返回由S1和S2联接而成的新串
        SubString(&Sub, S, pos, len)  // 串截取
            初始条件:串S存在,1<=pos<=StrLength(S) && 0<=len<=StrLength(S)-pos+1 // StrLength(S)-pos+1 表示从pos开始选取的长度
            操作结果:用Sub返回串的第pos个字符起长度为len的子串
        Index(S, T, pos)  // 串查找
            初始条件:串S和T存在,T是非空串, 1<=pos<=StrLength(S)
            操作结果:若主串S中存在和串T值相同的子串,则返回它在主串S中第pos个字符之后第一次出现的位置;否则函数值为0
        Replace(&S, T, V)   // 串替换
            初始条件:串S,T和V存在,T是非空串
            操作结果:用V替换主串S中出现的所有与T相等的不重叠的子串
        StrInsert(&S, pos, T)  // 串插入
            初始条件:串S和T存在, 1<=pos<=StrLength(S)+1
            操作结果:在串S的第pos个字符之前插入串T
        StrDelete(&S, pos, len) // 串删除
            初始条件:串S存在, 1<=pos<=StrLength(S)-len+1  // StrLength(S)-len+1 表示串S中第pos个字符之后的字符个数
            操作结果:从串S中删除第pos个字符起长度为len的子串
        DestroyString(&S)   // 销毁串
            初始条件:串S存在
            操作结果:串S被销毁        
}ADT String

