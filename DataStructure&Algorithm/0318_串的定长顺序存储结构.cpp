#define MAXLEN 255 // 串最大长度
typedef struct
{
    char ch[MAXLEN + 1]; // 串存储空间，存储串的一维数组
    int length;          // 串当前长度
} SString;