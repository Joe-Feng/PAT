/*
priority_queue利用的数据结构为大根堆，每次push,都会自动进行调整

用于解决一些贪心问题，也可以对dijikstra进行优化

1 头文件: #include <queue>   using namespace std;

2 定义：priority_queue <typename> name;

3 容器内元素的访问: 只能通过top()函数访问队头元素（即堆顶元素）

4 函数
push(x)
pop() 堆顶元素出队
top()  使用之前必须用empty()判空
empty()
size()

5 优先级的设定
基本数据类型
    默认按数字越大（char是字典顺序），优先级越高
    priority_queue<int> q; 与 priority_queue<int, vector(int), less<int>> q 等价
    priority_queue<int, vector(int), greater<int>> q 数字小优先级大

    less 小->大 greater 大->小  优先级都是从左到右升高

结构体

    重载<


*/

#include <iostream>
#include <queue>
#include <string>
using namespace std;

struct fruit{
    string name;
    int price;
 //   friend bool operator < (fruit f1, fruit f2){//重载< , 只能重载小于号，不能重载 >,
 //       return f1.price > f2.price; // <  数字按从小到达，取最右边为最高优先级
                                    // > 数字从大到小，取右边为最高优先级
//    }
}f1, f2, f3;


struct cmp{
    bool operator () (fruit f1, fruit f2){
        return f1.price > f2.price;
    }

};

struct cmp1{
    bool operator () (int f1, int f2){
        return f1 > f2;
    }

};

int main()
{
   priority_queue<char> q;
   if(q.empty() == true)
    printf("Empty\n");

   q.push('a');
   q.push('b');
   q.push('c');

   printf("%d\n", q.size());
   printf("%c\n", q.top());

   q.pop();
   printf("%c\n", q.top());

priority_queue<int, vector<int>, greater<int>> q1; //数字小的优先级大
    q1.push(3);
    q1.push(2);
    q1.push(1);

    printf("%d\n", q1.top());


//    priority_queue<fruit> a;
priority_queue<fruit, vector<fruit>, cmp> a; //当把重载函数卸载外边，只能用这种方法定义
    f1.name = "桃子";
    f1.price = 3;
    f2.name = "梨子";
    f2.price = 2;
    f3.name = "苹果";
    f3.price = 1;
    a.push(f1);
    a.push(f2);
    a.push(f3);

    cout << a.top().name << " " << a.top().price << endl;


    //基本数据类型也可以用结构体方法定义优先级
    priority_queue<int, vector<int>, cmp1> q2; //数字小的优先级大
    q2.push(3);
    q2.push(2);
    q2.push(1);

    printf("%d\n", q2.top());
    return 0;
}
