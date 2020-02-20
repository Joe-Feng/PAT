/*
学习输出的一种格式：当满足某种条件时退出   while..break

*/
#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int n, x;
    int flag = 0;
    scanf("%d", &n);
    int a[200];
    for(int i=0; i<n; i++)
    {
    scanf("%d", &a[i]);
    }

    scanf("%d", &x);
    for(int i=0; i<n; i++)
        if(a[i] == x)
        {
            printf("%d", i);
            flag  = 1;
        }

    if(flag == 0)
        printf("-1");


    return 0;
}
