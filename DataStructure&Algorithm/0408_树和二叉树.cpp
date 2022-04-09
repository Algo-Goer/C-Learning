ADT Tree{
    数据对象D : D是具有相同特性的数据元素的集合
    数据关系R : ...
    基本操作P :
        InitTree(&T)           // 构造空树T
    DestroyTree(&T)            // 销毁树T
    CreateTree(&T, definition) // 按定义构造树
    ClearTree(&T)              // 将树T清为空树
    TreeEmpty(T)               // 若T为空树返回true,否则false
    TreeDepth(T)               // 返回T深度
    Root(T)                    // 返回T的根
    Value(T, cur_e)            // 树T存在,cur_e是T中某个结点,返回cur_e的值
    Assign(T, cur_e, value)    // 结点cur_e赋值为value
    Parent(T, cur_e)           // 若cur_e是T的非根结点,则返回它的双亲,否则函数值为“空”
    LeftChild(T, cur_e)        // 若cur_e是T的非叶子结点,则返回它的最左孩子,否则返回“空”
    RightSibling(T, cur_e)     // 若cur_e有右兄弟,则返回它的右兄弟,否则函数值为“空”
    InsertChild(&T, p, i, c)   // 初始条件:树T存在,p指向T中某个结点,1<=i<=p所指结点的度+1,非空树c与T不相交
    // 操作结果:插入c为T中p所指结点的第i棵子树
    DeleteChild(&T, p, i) // 删除T中p所指结点的第i棵子树
    TraverseTree(T)       // 按某种次序对T中的每个结点访问一次
} ADT Tree

            ADT BinaryTree{
                数据对象D : ...
                数据关系R : ...
                基本操作P :
                    InitBiTree(&T)           // 构造空二叉树T
                DestroyBiTree(&T)            // 销毁二叉树T
                CreateBiTree(&T, definition) // 按定义构造二叉树树T
                ClearBiTree(&T)              // 将二叉树T清为空树
                BiTreeEmpty(T)               // 若T为空二叉树返回true,否则false
                BiTreeDepth(T)               // 返回T深度
                Root(T)                      // 返回T的根
                Value(T, e)                  // 返回e的值
                Assign(T, &e, value)         // 结点e赋值为value
                Parent(T, e)                 // 若e是T的非根结点,则返回它的双亲,否则函数值为“空”
                LeftChild(T, e)              // 返回e的左孩子,若无则返回“空”
                RightChile(T, e)             // 返回e的右孩子,若无则返回“空”
                LeftSibling(T, e)            // 返回e的左兄弟,若e是T的左孩子或无左兄弟,则返回“空”
                RightSibling(T, e)           // 返回e的右兄弟,若e是T的右孩子或无右兄弟,则返回“空”
                InsertChild(&T, p, LR, c)    // 初始条件:二叉树T存在,p指向T中某个结点,LR为0或1,非空二叉树c与T不相交且右子树为空
                // 操作结果:根据LR为0或1,插入c为T中p所指结点的左或右子树。p所指结点的原有左或右子树则成为c的右子树
                DeleteChild(&T, p, LR) // 根据LR为0或1,删除T中p所指结点的左或右子树
                PreOrderTraverse(T)    // 先序遍历T,对每个结点访问一次
                InOrderTraverse(T)     // 中序遍历T,对每个结点访问一次
                PostOrderTraverse(T)   // 后序遍历T,对每个结点访问一次
                LevelOrderTraverse(T)  // 层序遍历T,对每个结点访问一次
            } ADT BinaryTree

// 二叉树顺序存储表示
#define MAXTSIZE 100                      // 二叉树的最大结点数
    typedef TElemType SqBiTree[MAXTSIZE]; // 0号单元存储根结点
SqBiTree bt;

// 二叉树的二叉链表存储表示
typedef struct BiTNode
{
    TElemType data;                  // 结点数据域
    struct BiTNode *lchild, *rchild; // 左右孩子指针
} BiTNode, *BiTree;

// 中序遍历的递归算法 算法描述
void InOrderTraverse(BiTree T)
{
    // 中序遍历二叉树T的递归算法
    if (T) // 若二叉树非空
    {
        InOrderTraverse(T->lchild); // 中序遍历左子树
        cout << T->data;            // 访问根结点
        InOrderTraverse(T->rchild); // 中序遍历右子树
    }
}

// 中序遍历的非递归算法描述
void InOrderTraverse(BiTree T)
{
    // 中序遍历二叉树T的非递归算法
    InitStack(S);
    p = T;
    q = new BiTNode;
    while (p || !StackEmpty(S))
    {
        if (p) // p非空
        {
            Push(S, p);    // 根指针入栈
            p = p->lchild; // 根指针入栈，遍历左子树
        }
        else // p为空
        {
            Pop(S, q);       // 退栈
            cout << q->data; // 访问根结点
            p = q->rchild;   // 遍历右子树
        }
    }
}

void CreateBiTree(BiTree &T)
{
    // 按先序次序输入二叉树中结点的值（一个字符），创建二叉链表表示的二叉树T
    cin >> ch;
    if (ch == '#')
        T = NULL; // 递归结束，建空树
    else          // 递归创建二叉树
    {
        T = new BiTNode;         // 生成根结点
        T->data = ch;            // 根结点数据域置为ch
        CreateBiTree(T->lchild); // 递归创建左子树
        CreateBiTree(T->rchild); // 递归创建右子树
    }                            // else
}

void Copy(BiTree T, BiTree &NewT)
{
    // 复制一棵和T完全相同的二叉树
    if (T == NULL) // 如果是空树，递归结束
    {
        NewT = NULL;
        return;
    }
    else
    {
        NewT = new BiTNode;
        NewT->data = T->data;          // 复制根结点
        Copy(T->lchild, NewT->lchild); // 递归复制左子树
        Copy(T->rchild, NewT->rchild); // 递归复制右子树
    }
}