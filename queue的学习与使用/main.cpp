/*
1 queue的头文件 #include <queue>  using namespace std;

2 定义： queue<typename> name; typename可以是任意基本数据类型或容器

3 queue容器内元素的访问：只能通过front()访问队头，back()访问队尾

4函数：
front()
back()
push(x) 将x入队
pop() 将队头元素出队，在出队前要先判空
empty() 判空，空返回true，非空返回false
size() 返回队列中元素个数





*/
#include <iostream>
#include <queue>
#include <cstdio>

using namespace std;

int main()
{
    queue<int> q;
    if(q.empty() == true)
        printf("Empty\n");

    for(int i=1; i<=5; i++ )
    {
        q.push(i);
    }

    printf("%d %d\n", q.front(), q.back());

    for(int i=1; i<=3; i++)
    {
        if(!(q.empty()))
            q.pop();

    }

    printf("%d\n", q.front());

    printf("%d\n", q.size());

    return 0;
}
