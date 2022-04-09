#define CHUNKSIZE 80 // 用户自定义的块大小
typedef struct Chunk
{
    char ch[CHUNKSIZE];
    struct Chunk *next; // 指向下一块的指针
} Chunk;
typedef struct
{
    Chunk *head, *tail; // 串的头尾指针
    int length;         // 串的当前长度
} LString;
