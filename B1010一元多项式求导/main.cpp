/*
1 没有给出要读多少组数据，要用while...EOF

2 加空格的解决方法:在后边加空格的话必须判断是否是最后一个数，
但是这里输入多少数是不明确的，输出多少数也就不明确，放弃在后边加空格
先判断前边是否有输出，然后在前边加空格，可以避免不必要的空格

3 特殊情况的判断：一次都没输出

*/


#include <cstdio>

//int a[1000][2];

int main()
{
    int a, b, flag = 0;
    while(scanf("%d%d", &a, &b) != EOF)
    {
       if(b != 0){

         if (flag == 1)
                printf(" ");
        printf("%d %d", a*b, b-1);
        flag = 1;
       }


    }

    if(flag == 0)
        printf("0 0");
    return 0;
}
