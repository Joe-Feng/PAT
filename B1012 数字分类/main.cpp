/*
1 书写要快，正确
2 设置的变量太多了，可以考虑用数组
3 求A5（最大值），不需要用求最大值的函数，直接两两比较就可以

*/

#include <cstdio>

/*int maxa5(int array[], int n, int &max)
{
    for(int i=0; i<n; i++ )
    {
        if(array[i] > max)
           max = array[i];
    }

    return max;
}
*/
int main()
{
    int n;
    scanf("%d", &n);
    int a[1000];
    for(int i=0; i<n; i++)
        scanf("%d", &a[i]);

    int A1=0,  A2=0, A3=0,  A5=-1;
    int count1=0, count4=0, sum4=0, count5=0;
 //   double A4;
 //   int a5[1000];

    for(int i=0; i<n; i++)
    {

        if( (a[i] % 5 == 0) && (a[i]%2 == 0 ))
            A1 += a[i];

        if(a[i] % 5 == 1)
        {
            count1++;
            if(count1 % 2 != 0)
                A2 += a[i];
            else
                A2 -= a[i];

        }

        if(a[i] % 5 == 2)
            A3++;

        if(a[i] % 5== 3)
        {
            count4++;
            sum4 += a[i];
        }

        if(a[i] %5 == 4)
        {
            if(a[i] > A5)
                A5 = a[i];
            count5++;
        }

    }

    if(A1 != 0)
        printf("%d ", A1);
    else
        printf("N ");

    if(count1 != 0)
        printf("%d ", A2);
    else
        printf("N ");

    if(A3 != 0)
        printf("%d ", A3);
    else
        printf("N ");

    if(count4 != 0)
        printf("%.1f ", (double)sum4 / count4);
    else
        printf("N ");

    if(count5 != 0)
        printf("%d", A5);
    else
        printf("N");

    return 0;
}
