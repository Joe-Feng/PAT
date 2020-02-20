/*
short int  2个字节

int 2/4字节

long 4/8字节 %ld

long long 8字节  输出格式为%lld

在标准中，并没有规定long一定要比int长，也没有规定short要比int短。
标准是这么说的:长整型至少和整型一样长，整型至少和短整型一样长。
这个的规则同样适用于浮点型long double至少和double一样长，double至少和float一样长。
至于如何实现要看编译器厂商.

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
