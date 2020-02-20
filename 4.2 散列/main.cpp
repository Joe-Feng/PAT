/*
Q1:
给出N个正整数，再给M个正整数，问这个数中的每个数分别是否在N个数字中出现过，
出现过几次，N，M<=10^5

解决方法：
空间换时间，直接把输入的数作为数组的下标来对这个数的性质进行统计，查询复杂度是O(1)

Q2：若输入的数很大，或者不是数字怎么办？
用散列法

key为整数，常用的散列函数：
直接定址法：H(key) = key;  H(key) = key * a + b;
除留取余法
平法取中法

解决冲突的方法：
线性探测法
平方探查法
链地址法


字符串hash：

*/

#include <cstdio>
#include <cstring>

const int maxn = 100000;
bool hashTable[maxn] = {false};
int hashTable1[maxn] = {0};
char str[100];
char str1[100];
char str2[100];
//把A~Z视为0~25，把26个大写字母对应到26进制

int hashFunc(char s[], int len)
{//hash函数，将字符串转化为整数
   int id = 0;
   for(int i = 0; i < len; i++)
   {
          id = id * 26 +(s[i] - 'A');
   }
   return id;
}


//由小写字母，把a~z视为26~51,变成52进制
  int hashFunc1(char s[], int len)
{//hash函数，将字符串转化为整数
   int id = 0;
   for(int i = 0; i < len; i++)
   {
       if(s[i] >= 'A' && s[i] <= 'Z')
       {
           id = id * 52 +(s[i] - 'A');
       }
       else if(s[i] >= 'a' && s[i] <= 'z')
       {
           id = id * 52 + (s[i] - 'a') + 26;
       }

   }
   return id;
}

//有数字，0~9视为52~61,转化为62进制
int hashFunc2(char s[], int len)
{
    int id = 0;
    for(int i = 0; i < len; i++)
   {
       if(s[i] >= 'A' && s[i] <= 'Z')
       {
           id = id * 62 +(s[i] - 'A');
       }
       else if(s[i] >= 'a' && s[i] <= 'z')
       {
           id = id * 62 + (s[i] - 'a') + 26;
       }
       else if(s[i] >= '0' && s[i] <= '9')
       {
           id = id * 62 + (s[i] - '0') + 52;
       }

   }
   return id;
}









int main()
{
    int n, m, x;
    scanf("%d%d", &n, &m);
    for(int i=0; i<n; i++)
    {
        scanf("%d", &x);
        hashTable[x] = true;
        hashTable1[x]++;
    }

    for(int i=0; i<m; i++)
    {
        scanf("%d", &x);
        if(hashTable[x] == true)
        {
             printf("YES %d\n", hashTable1[x]);
        }

        else
            printf("NO\n");
    }


    scanf("%s", str);
    int num = hashFunc(str, strlen(str));
    printf("num = %d\n", num);

    scanf("%s", str1);
    int num1 = hashFunc1(str, strlen(str));
    printf("num = %d\n", num1);

    scanf("%s", str2);
    int num2 = hashFunc2(str, strlen(str));
    printf("num = %d\n", num2);



    return 0;
}
