/*
˼����
1 ���ý�id��score��ϵ���������ս��ֻҪsum����ôֻҪ�����ѧУ�ĳɼ����ɣ�
2 ѧϰ��������ã������±������
3 ���Ĵ����ռ�ı���Ҫ������裬����߿��ܻᵼ��ϵͳ�ռ��þ���
4 c++����������ط��������cֻ���ڿ�ʼ��



*/
#include <cstdio>

const int maxsize = 10010;
int sum[maxsize]={0};

int main()
{
    int n, schId, score;
    scanf("%d", &n);
    for(int i=0; i<n; i++)
    {
        scanf("%d%d", &schId, &score);
        sum[schId] += score;
    }

    int k=1, max=-1;
    for(int i=1; i<=n; i++)
    {
        if(sum[i] > max)
        {
            max = sum[i];
            k = i;
        }
    }
    printf("%d %d", k, max);
    return 0;
}
