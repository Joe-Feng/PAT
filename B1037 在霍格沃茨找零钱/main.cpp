/*
1 我的思路是按减法规则算的，不能完全通过，太复杂了

2 正确的思路：将所有单位转换为最小单位，然后相减，再转换为要求格式



*/


/*


#include <cstdio>
#include <algorithm>

using namespace std;

int main()
{
    int p1, p2, p3;
    int a1, a2, a3;
    int g,s,k;
    int flag= 0, flag1 = 0, flag2 = 0;
    scanf("%d.%d.%d", &p1, &p2, &p3);
    scanf("%d.%d.%d", &a1, &a2, &a3);

    if((p1> a1) || (p1 == a1 && p2 > a2) || (p1 == a1 && p2 == a2 || p3 > a3))
    {
        swap(p1, a1);
        swap(p2, a2);
        swap(p3, a3);
        flag = 1;
    }

    if(a3 - p3 >0)
        k = a3 -p3;
    else
    {
        k = 29 + a3 - p3;
            flag1 = 1; //说明向前借位了
    }

    if(flag1 == 1)
    {
        if(a2 - p2 - 1 < 0)
        {
            s = 17 + a2 - p2 -1;
            flag2 = 1;
        }
        else
            s = a2 - p2 -1;

    }
    else
    {
        if(a2 - p2 < 0)
        {
            s = 17 + a2 - p2;
            flag2 = 1;
        }
        else
            s = a2 -p2;
    }

    if(flag2 == 1)
        g = a1 -p1 -1;
    else
        g = a1 - p1;

if(flag == 0)
    printf("%d.%d.%d", g, s, k);
else
{
    printf("-");
    printf("%d.%d.%d", g, s, k);
}



    return 0;
}
*/



#include <cstdio>

const int Galleon = 17 * 29;
const int Sickle = 29;

int main()
{
    int p1, p2, p3;
    int a1, a2, a3;
    int k1, k2;

    scanf("%d.%d.%d", &p1, &p2, &p3);
    scanf("%d.%d.%d", &a1, &a2, &a3);

    k1 = p1 * Galleon + p2 * Sickle + p3;
    k2 = a1 * Galleon + a2 * Sickle + a3;

    int change = k2 - k1;
    if(change < 0)
    {
        printf("-");
        change= -change;
    }
    printf("%d.%d.%d", change /Galleon, change %Galleon /Sickle, change %Sickle );


}
