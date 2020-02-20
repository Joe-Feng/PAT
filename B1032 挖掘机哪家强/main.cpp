/*
思考：
1 不用将id与score联系起来，最终结果只要sum，那么只要求出各学校的成绩即可；
2 学习数组的运用，数组下标的作用
3 消耗大量空间的变量要在外边设，在里边可能会导致系统空间用尽；
4 c++可以在任意地方设变量，c只能在开始设



*/
#include <cstdio>

const int maxsize = 10010;
int sum[maxsize]={0};

int main()
{
    int n, schId, score;
    scanf("%d", &n);
    for(int i=0; i<n; i++)
    {
        scanf("%d%d", &schId, &score);
        sum[schId] += score;
    }

    int k=1, max=-1;
    for(int i=1; i<=n; i++)
    {
        if(sum[i] > max)
        {
            max = sum[i];
            k = i;
        }
    }
    printf("%d %d", k, max);
    return 0;
}
