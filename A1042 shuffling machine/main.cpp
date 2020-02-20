/*
错误：char类型只能存储一个字符，我却存了两个

正确做法：字母和位置要分离开


*/

 /*

#include <cstdio>


int main()
{
   char InitOrder[54]={S1,S2,S3,S4,S5,S6,S7,S8,S9,S10,S11,S12,S13,
                        H1,H2,H3,H4,H5,H6,H7,H8,H9,H10,H11,H12,H13,
                        C1,C2,C3,C4,C5,C6,C7,C8,C9,C10,C11,C12,C13,
                        D1,D2,D3,D4,D5,D6,D7,D8,D9,D10,D11,D12,D13,
                        J1,J2    };
    int n;
    scanf("%d", &n);
    int NumOrder[54]={0};
    char Out[54];
    for(int i=0; i<54; i++)
        scanf("%d", &NumOrder[i]);
    for(int i=0; i<n; i++)
    {
         for(int j=0; j<54; j++)
         {
              Out[NumOrder[j]] = InitOrder[j];
              InitOrder[j] = Out[j];
         }
    }

    for(int i=0; i<54; i++)
    {
        printf("%c", Out[i]);
        if(i < 53)
            printf(" ");
    }
    return 0;
}
*/


#include <cstdio>

const int n = 54;
char hs[5] = {'S', 'H', 'C', 'D', 'J'}; //花色
int start[n+1], num[n+1], out[n+1];

int main()
{
    int k;
    scanf("%d", &k);

    for(int i=1; i<=n; i++)
        start[i] = i;         //start[i]存放的为第i个位置存放的牌的序号

    for(int i=1; i<=n; i++)
        scanf("%d", &num[i]);

    for(int i=0; i<n; i++)
    {
        for(int j=1; j<55; j++)
            out[num[j]] = start[j];

        for(int k=1; k<55; k++)
            start[k] = out[k];
    }

    for(int i=0; i<=54; i++)
    {
        if(i!= 1)
            printf(" ");
        start[i]--;
        printf("%c%d", hs[start[i] / 13], start[i] %13 +1 );

    }


    return 0;


}
