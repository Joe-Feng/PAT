/*
short int  2���ֽ�

int 2/4�ֽ�

long 4/8�ֽ� %ld

long long 8�ֽ�  �����ʽΪ%lld

�ڱ�׼�У���û�й涨longһ��Ҫ��int����Ҳû�й涨shortҪ��int�̡�
��׼����ô˵��:���������ٺ�����һ�������������ٺͶ�����һ������
����Ĺ���ͬ�������ڸ�����long double���ٺ�doubleһ������double���ٺ�floatһ������
�������ʵ��Ҫ������������.

*/
#include <cstdio>

int main()
{
    long long  A,B;  //0<A, B <10^10
    int DA, DB;
    int PA = 0, PB = 0;
    scanf("%lld%d%lld%d", &A, &DA, &B, &DB);
    if(DA<10 || DB<10)
    {

  // printf("%ld         %d         %ld          %d\n", A, DA, B, DB);
        while(A != 0)
        {
            if(A%10 == DA)
                PA = PA * 10 + DA;
            A /= 10;
        }

 //       printf("%d\n", PA);

        while(B)
        {
            if(B%10 == DB)
                PB = PB * 10 + DB;
            B /= 10;
        }
  //      printf("%d\n", PB);

        printf("%d", PA + PB);
    }
    return 0;
}
