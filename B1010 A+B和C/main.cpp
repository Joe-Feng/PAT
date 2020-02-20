/*
这道题很受打击
1 输入类型：范围为[-2^31~2^31],int的范围为[-2^31~2^31-1]
long long的范围:[-2^63~2^63-1]，所以应该用long long

2 数组大小必须为常量，不能为变量

3 要注意输入输出的格式

4 考虑特殊情况，这里要求输入不超过10组

5 输出时要求为组数（从1开始），写的时候直接输出的是数组下标，差了1

6 能不用数组，尽量不用，常量的时间复杂度为o（1），数组为O（n）

7循环T次更简便的写法为while(T--)
*/

#include <cstdio>

int main()
{
    int n;
    long long array[10][3]={{0,0,0}};
    scanf("%d", &n);

     if(n<11)
     {
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<3; j++)
            {
                scanf("%lld", &array[i][j]);
            }
        }

        for(int i=0; i<n; i++)
        {
            if(array[i][0] + array[i][1] > array[i][2])
                printf("Case #%d: true\n", i+1);
            else
                printf("Case #%d: false\n", i+1);
        }
     }
    return 0;
}
