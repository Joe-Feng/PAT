/*
栈主要用于模拟递归
1 头文件 #include <stack> using namespace std;

2 定义: stack<typename> name;

3函数：
push(x)
pop()  出栈前要判空
top() 读栈顶元素
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
