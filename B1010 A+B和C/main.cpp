/*
�������ܴ��
1 �������ͣ���ΧΪ[-2^31~2^31],int�ķ�ΧΪ[-2^31~2^31-1]
long long�ķ�Χ:[-2^63~2^63-1]������Ӧ����long long

2 �����С����Ϊ����������Ϊ����

3 Ҫע����������ĸ�ʽ

4 �����������������Ҫ�����벻����10��

5 ���ʱҪ��Ϊ��������1��ʼ����д��ʱ��ֱ��������������±꣬����1

6 �ܲ������飬�������ã�������ʱ�临�Ӷ�Ϊo��1��������ΪO��n��

7ѭ��T�θ�����д��Ϊwhile(T--)
*/

#include <cstdio>

int main()
{
    int n;
    long long array[10][3]={{0,0,0}};
    scanf("%d", &n);

     if(n<11)
     {
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<3; j++)
            {
                scanf("%lld", &array[i][j]);
            }
        }

        for(int i=0; i<n; i++)
        {
            if(array[i][0] + array[i][1] > array[i][2])
                printf("Case #%d: true\n", i+1);
            else
                printf("Case #%d: false\n", i+1);
        }
     }
    return 0;
}
