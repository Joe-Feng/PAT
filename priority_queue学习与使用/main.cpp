/*
priority_queue���õ����ݽṹΪ����ѣ�ÿ��push,�����Զ����е���

���ڽ��һЩ̰�����⣬Ҳ���Զ�dijikstra�����Ż�

1 ͷ�ļ�: #include <queue>   using namespace std;

2 ���壺priority_queue <typename> name;

3 ������Ԫ�صķ���: ֻ��ͨ��top()�������ʶ�ͷԪ�أ����Ѷ�Ԫ�أ�

4 ����
push(x)
pop() �Ѷ�Ԫ�س���
top()  ʹ��֮ǰ������empty()�п�
empty()
size()

5 ���ȼ����趨
������������
    Ĭ�ϰ�����Խ��char���ֵ�˳�򣩣����ȼ�Խ��
    priority_queue<int> q; �� priority_queue<int, vector(int), less<int>> q �ȼ�
    priority_queue<int, vector(int), greater<int>> q ����С���ȼ���

    less С->�� greater ��->С  ���ȼ����Ǵ���������

�ṹ��

    ����<


*/

#include <iostream>
#include <queue>
#include <string>
using namespace std;

struct fruit{
    string name;
    int price;
 //   friend bool operator < (fruit f1, fruit f2){//����< , ֻ������С�ںţ��������� >,
 //       return f1.price > f2.price; // <  ���ְ���С���ȡ���ұ�Ϊ������ȼ�
                                    // > ���ִӴ�С��ȡ�ұ�Ϊ������ȼ�
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

priority_queue<int, vector<int>, greater<int>> q1; //����С�����ȼ���
    q1.push(3);
    q1.push(2);
    q1.push(1);

    printf("%d\n", q1.top());


//    priority_queue<fruit> a;
priority_queue<fruit, vector<fruit>, cmp> a; //�������غ���ж����ߣ�ֻ�������ַ�������
    f1.name = "����";
    f1.price = 3;
    f2.name = "����";
    f2.price = 2;
    f3.name = "ƻ��";
    f3.price = 1;
    a.push(f1);
    a.push(f2);
    a.push(f3);

    cout << a.top().name << " " << a.top().price << endl;


    //������������Ҳ�����ýṹ�巽���������ȼ�
    priority_queue<int, vector<int>, cmp1> q2; //����С�����ȼ���
    q2.push(3);
    q2.push(2);
    q2.push(1);

    printf("%d\n", q2.top());
    return 0;
}
