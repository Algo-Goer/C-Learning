/**
 * BreadthFirstSearch_BFS.c
 * BFS遍历类似于树的按层次遍历过程，过程如下：
 * 1、从图中某个顶点v出发，访问v
 * 2、依次访问v的各个未曾访问过的邻接点
 * 3、分别从这些邻接点出发依次访问它们的邻接点，并使“先被访问的顶点的邻接点”
 * 先于“后被访问的顶点的邻接点”被访问。
 * 
 * 广度优先搜索遍历的特点是：
 * 尽可能先对横向进行搜索。
 * 
 * 由于先访问的顶点其邻接点亦先被访问。
 * 为此，算法实现时需引进队列保存已被访问过的顶点。
 * 
 * 在遍历过程中，BFS也需要一个访问标志数组。
 * 
 * 算法步骤：
 * 1、从图中某个顶点v出发，访问v，并置visited[v]值为true，然后将v进队
 * 2、只要队列不空，则重复下述操作：
 * - 队头顶点u出队；
 * - 依次检查u的所有邻接点w，如果visited[w]的值为false，则访问w，并置visited[w]值为true，然后将w进队
 */

void BFS(Graph G, int v)
{
    // 按广度优先非递归遍历连通图G
    cout << v; visited[v] = true;   // 访问第v个顶点，并置访问标志数组相应分量值为true
    InitQueue(Q);                   // 辅助队列Q初始化，置空

    EnQueue(Q, v);                  // v进队
    while(!QueueEmpty(Q))           // 队列非空
    {
        DeQueue(Q, u);              // 队头元素出队并置为u
        for(w = FirstAdjVex(G, u); w >= 0; w = NextAdjVex(G, u, w))
        // 依次检查u的所有邻接点w， FirstAdjVex(G, u)表示u的第一个邻接点
        // NextAdjVex(G, u, w)表示u相对于w的下一个邻接点， w>=0表示存在邻接点
            if (!visited[w])        // w为u的尚未访问的邻接顶点
            {
                cout << w; visited[w] = true; // 访问w，并置访问标志数组相应分量值为true
                EnQueue(Q, w);                // w进队
            }                                 // if
    }                                         // while
}

/**
 * 若是非连通图，上述遍历过程执行后，图中一定还有顶点未被访问，
 * 需要从图中另选一个未被访问的顶点作为起始点，重复上述BFS过程，
 * 直到图中所有顶点均被访问过为止。
 * 
 */