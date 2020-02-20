/*
错误：保存整数的类型没有考虑清楚，题目要求<=1000位的数字，即使是longlong类型也达不到
只能由字符串来表示i

如何将字符转化为数字？
1= ‘1’ - ‘0’

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
