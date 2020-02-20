/*
1 没有想到另外一个路径长度用sum-sum1;

2 错误：当数组设小时为段错误（爆栈了），但数组设大时超时

数组大小要设置为题目给出的最大值

3 要解决超时问题一定不能用两层循环嵌套，外层循环一定没法消
只能改进内层循环；
如何改进:要预先保存要用到的数据，而不是在用的时候再循环计算，
预先处理以后时间复杂度为O(1),不处理的话为O（n）


*/



#include <stdio.h>

const int maxn = 100000;  //N (in [3,10^5]),
int distance[maxn], A[maxn]; //A[i]表示从1顺时针到i的下一个点的距离

int main()
{
    int n, sum = 0;
    scanf("%d", &n);
    for(int i=1; i<=n; i++)
    {
        scanf("%d", &distance[i]);  //distance[i] 表示出口i到出口i+1的距离
        sum += distance[i];
        A[i] = sum;
    }



    int k;//出口对数
    scanf("%d", &k);
    for(int i=0; i<k; i++)
    {
        int exit1, exit2;
        int sum1=0, sum2=0;
        scanf("%d%d", &exit1, &exit2);
        if(exit1 < exit2)
        {
         //   for(int i=exit1; i<exit2; i++)
         //       sum1 += distance[i];

            sum1 =A[exit2-1] - A[exit1-1];
            sum2 = sum -sum1;

            if(sum1 > sum2)
                printf("%d\n", sum2);
            else
                printf("%d\n", sum1);
        }

        if(exit1 > exit2)
        {
           //  for(int i=exit2; i>=exit1; i++)
           //     sum1 += distance[i];
            sum1 =A[exit1-1] - A[exit2-1];
            sum2 = sum -sum1;

            if(sum1 > sum2)
                printf("%d\n", sum2);
            else
                printf("%d\n", sum1);
        }

        if(exit1 == exit2)
            printf("0\n");



    }

    return 0;
}


