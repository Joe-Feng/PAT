/*
1 double round(double x) :四舍五入函数，输入输出都是double类型
2 时间的输出格式，要考虑hh, mm, ss 为0的情况，格式为00
3 四舍五入的方法 两数相减，判断差值

*/
#include <cstdio>
#include <cmath>

const int clktic = 100;

int main()
{
    int c1, c2;
    scanf("%d%d", &c1, &c2);
    if(c1 < c2)
    {
        double clk= round((double)(c2- c1) /clktic);   //秒
        int hh = (int)(clk) /3600;
        int mm = (int)(clk) %3600 /60;
        int ss = (int)(clk) %60;
        printf("%02d:%02d:%02d", hh, mm, ss);

    }
    return 0;
}
