/*
���죺Ҫ�������������������
������������ͬ�ŵ�����ӣ�������ŵ������

����long long����������A+B<=2^64 -2 �������ֵ������Ϊ��[-2^63,-2]
�����ֵ�����䣺[0,2^63)
*/

#include <cstdio>

int main()
{
    int T;
    scanf("%d", &T);
    long long A, B, C, sum;
    for(int i=0; i<T; i++)
    {

        bool flag;
        scanf("%lld%lld%lld", &A, &B, &C);
        sum = A +B;

        if(A>0 && B>0 && sum < 0)  //�����
        {
           flag = true;
        }
        else if(A<0 && B<0&& sum >=0) //�����
        {
            flag = false;
        }
        else if(sum > C)
        {
           flag = true;
        }
        else
            flag = false;

        if(flag)
            printf("Case #%d: true\n", i+1);
        else
            printf("Case #%d: false\n", i+1);


    }
    return 0;
}
