/*
ջ��Ҫ����ģ��ݹ�
1 ͷ�ļ� #include <stack> using namespace std;

2 ����: stack<typename> name;

3������
push(x)
pop()  ��ջǰҪ�п�
top() ��ջ��Ԫ��
empty()
size()


*/




#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<int> s;
    if(s.empty() ==  true)
        printf("Empty\n");
    for(int i=1; i<=5; i++)
        s.push(i);
    printf("%d\n", s.top());

    for(int i=1; i<=3; i++)
        s.pop();
    printf("%d\n", s.top());
    printf("%d\n", s.size());

    return 0;
}
