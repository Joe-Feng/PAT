/*
1 queue��ͷ�ļ� #include <queue>  using namespace std;

2 ���壺 queue<typename> name; typename��������������������ͻ�����

3 queue������Ԫ�صķ��ʣ�ֻ��ͨ��front()���ʶ�ͷ��back()���ʶ�β

4������
front()
back()
push(x) ��x���
pop() ����ͷԪ�س��ӣ��ڳ���ǰҪ���п�
empty() �пգ��շ���true���ǿշ���false
size() ���ض�����Ԫ�ظ���





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
