#include <stdio.h>
#include <cstring>


/*
1 系统让程序读文件里的输入数据，直到文件末尾
while....EOF

2 当输入的值满足条件时停止输入
while...break
或者 将判断条件写在scanf后，用逗号隔开

3给出测试组数
while(T--)



*/
//while...EOF
int main()
{
  int a, b, T;
//char str[10];
  /*  while(scanf("%d%d", &a, &b) != EOF)
    {
        printf("%d\n", a + b);
    }
*/

/*
    while(scanf("%s", str) != EOF)
    {
        printf("%s", str);
    }
*/
 /*
    while(gets(str) != NULL)
    {
        printf("%s", str);
    }
 */

/*    while(scanf("%d%d", &a, &b) != EOF)
    {
        if(a==0 && b==0) break;

        printf("%d",a+b);
    }
*/

 /* while(scanf("%d%d", &a, &b),a || b)
    {

        printf("%d",a+b);
    }
*/
    scanf("%d", &T);
    while(T--)
    {
        scanf("%d%d2", &a, &b);
        printf("%d\n", a+b);
        if(T > 0)
            printf("\n"); //最后会自动空一行
    }


    return 0;
}
