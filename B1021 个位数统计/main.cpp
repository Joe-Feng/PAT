/*
���󣺱�������������û�п����������ĿҪ��<=1000λ�����֣���ʹ��longlong����Ҳ�ﲻ��
ֻ�����ַ�������ʾi

��ν��ַ�ת��Ϊ���֣�
1= ��1�� - ��0��

*/



#include <cstdio>
#include <string>
#include <iostream>
using namespace std;



int main()
{
//    long long  n;
//    scanf("%lld", &n);

    string str;
    cin>>str;

    int count[10]={0};
 //   while(n != 0)
 //   {
  //      count[n%10]++;
  //      n /= 10;
  //  }

  for(int i=0; i< str.length(); i++)
  {
      count[str[i] - '0'] ++;
  }

    for(int i=0; i<10; i++)
    {
        if(count[i] != 0)
        {
            printf("%d:%d\n", i, count[i] );
        }
    }
    return 0;
}
