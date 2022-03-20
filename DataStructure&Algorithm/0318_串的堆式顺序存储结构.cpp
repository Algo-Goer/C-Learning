typedef struct
{
    char *ch;   // 若为非空串，则按串长分配存储区，否则ch为NULL
    int length; // 串当前长度
} HString;