/*
1 û���뵽����һ��·��������sum-sum1;

2 ���󣺵�������СʱΪ�δ��󣨱�ջ�ˣ������������ʱ��ʱ

�����СҪ����Ϊ��Ŀ���������ֵ

3 Ҫ�����ʱ����һ������������ѭ��Ƕ�ף����ѭ��һ��û����
ֻ�ܸĽ��ڲ�ѭ����
��θĽ�:ҪԤ�ȱ���Ҫ�õ������ݣ����������õ�ʱ����ѭ�����㣬
Ԥ�ȴ����Ժ�ʱ�临�Ӷ�ΪO(1),������Ļ�ΪO��n��


*/



#include <stdio.h>

const int maxn = 100000;  //N (in [3,10^5]),
int distance[maxn], A[maxn]; //A[i]��ʾ��1˳ʱ�뵽i����һ����ľ���

int main()
{
    int n, sum = 0;
    scanf("%d", &n);
    for(int i=1; i<=n; i++)
    {
        scanf("%d", &distance[i]);  //distance[i] ��ʾ����i������i+1�ľ���
        sum += distance[i];
        A[i] = sum;
    }



    int k;//���ڶ���
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


