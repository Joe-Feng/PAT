/*
1 ѧϰ��ѯ���ɣ�����ѯ�ؼ�����Ϊ�����±꣬�����д洢��ѯ��Ϣ��
����ֱ�����������±������ѯ��Ϣ

2 string������
ʹ��string�࣬Ҫ�ڿ�ͷ�ӣ�
#include <string> //string ��string.h��ͬ
using namespace std;

������������ַ���ֻ����cin,cout

3 �����ַ����洢��ѯ��Ϣ�ȽϷ��㣬�ṹ��ͱȽ��鷳��

*/


#include <iostream>
#include <cstdio>
#include <string>

using namespace std;

const int maxn = 1005;

string stu[maxn][2];

/*
long long stuifo[maxn][3], sjnum[maxn];
int main()
{
    int n, m;
    scanf("%d", &n);
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<3; j++)
        {
            scanf("%lld", &stuifo[i][j]);
        }
    }
    scanf("%d", &m);
    for(int i=0; i<m; i++)
    {
        scanf("%lld", &sjnum[i]);
    }
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(sjnum[i] == stuifo[j][1])
                printf("%lld %lld\n", stuifo[j][0], stuifo[j][2]);
        }
    }


    return 0;
}
*/




int main()
{
    int n, m, sjseat;
    string  stunum, ksseat;
    scanf("%d", &n);
    for(int i=0; i<n; i++)
    {
       cin>>stunum>>sjseat>>ksseat;
        stu[sjseat][0] = stunum;
        stu[sjseat][1] = ksseat;
    }

    scanf("%d", &m);
    for(int i=0; i<m; i++)
    {
        scanf("%d",&sjseat);
       cout<<stu[sjseat][0]<<" "<<stu[sjseat][1]<<endl;
    }
    return 0;
}
