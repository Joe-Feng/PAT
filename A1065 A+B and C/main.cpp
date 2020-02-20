/*
考察：要考虑两数相加溢出的情况
溢出情况：两个同号的数相加，两个异号的数相减

两个long long相加正溢出：A+B<=2^64 -2 正溢出后值的区间为：[-2^63,-2]
负溢出值的区间：[0,2^63)
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

        if(A>0 && B>0 && sum < 0)  //正溢出
        {
           flag = true;
        }
        else if(A<0 && B<0&& sum >=0) //负溢出
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
