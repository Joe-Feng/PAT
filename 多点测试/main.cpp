#include <stdio.h>
#include <cstring>


/*
1 ϵͳ�ó�����ļ�����������ݣ�ֱ���ļ�ĩβ
while....EOF

2 �������ֵ��������ʱֹͣ����
while...break
���� ���ж�����д��scanf���ö��Ÿ���

3������������
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
            printf("\n"); //�����Զ���һ��
    }


    return 0;
}
