/*
1 学习查询技巧：将查询关键字作为数组下标，数组中存储查询信息，
可以直接利用数组下标输出查询信息

2 string函数：
使用string类，要在开头加：
#include <string> //string 与string.h不同
using namespace std;

输入输出整个字符串只能用cin,cout

3 利用字符串存储查询信息比较方便，结构体就比较麻烦了

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
