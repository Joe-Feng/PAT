/*
д���鷳��

*/

#include <stdio.h>


int main()
{
    int n;
    scanf("%d", &n);
    int a1, a2, b1, b2;
    int cup1 = 0, cup2 = 0;
    for(int i=0; i<n; i++)
    {
        scanf("%d%d%d%d", &a1, &a2, &b1, &b2);
    /*    if((a2 == a1+b1 && b2 == a1+b1) || (a2 != a1+b1 && b2 != a1+b1)) //����ͬӮͬ��
            continue;
        else if(a2 == a1+b1) //��Ӯ
            cup2++;
        else  //��Ӯ
            cup1++;
    */

        if(a2 == a1+b1 && b2 != a1+b1)
            cup2++;
        else if(b2 == a1+b1 && a2 != a1+b1)
            cup1++;
    }
    printf("%d %d", cup1, cup2);
    return 0;
}
