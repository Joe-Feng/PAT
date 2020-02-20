/*
思路：主要是解决将计算结果转化为拼音，可以用一个二维数组，将数字对应的拼音
存储起来


*/

#include <iostream>
#include <cstdio>
#include <string>
#include <iostream>
using namespace std;



int main()
{
    int sum = 0;
    string str;
    cin>>str;
    for(int i=0; i<str.length(); i++)
    {
        sum = sum + (str[i] - '0');
    }

    printf("%d\n", sum);

    int j=0;
    int a[10];
    while(sum != 0)
    {
        a[j++] = sum % 10;
        sum /= 10;
    }

 //   for(int i=j-1; i>=0; i--)
 //       printf("%d", a[i]);
char b[10][5] =  {"ling", "yi", "er", "san", "si", "wu", "liu", "qi", "ba", "jiu"};

    for(int i=j-1; i>=0; i--)
    {
        printf("%s", b[a[i]]);
        if(i != 0)
            printf(" ");
    }

    return 0;
}
