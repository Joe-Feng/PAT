/*
1 double round(double x) :�������뺯���������������double����
2 ʱ��������ʽ��Ҫ����hh, mm, ss Ϊ0���������ʽΪ00
3 ��������ķ��� ����������жϲ�ֵ

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
        double clk= round((double)(c2- c1) /clktic);   //��
        int hh = (int)(clk) /3600;
        int mm = (int)(clk) %3600 /60;
        int ss = (int)(clk) %60;
        printf("%02d:%02d:%02d", hh, mm, ss);

    }
    return 0;
}
