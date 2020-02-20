#include <cstdio>
#include <cstring>

char str[100];
char str1[100];
char str2[100];

char s[100][4], temp[4]; //s中有三个大写字母，但是尾部还有一个结尾符\0
int hashTable[26*26*26 +10];



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
    scanf("%s", str);
    int num = hashFunc(str, strlen(str));
    printf("num = %d\n", num);

    scanf("%s", str1);
    int num1 = hashFunc1(str, strlen(str));
    printf("num = %d\n", num1);

    scanf("%s", str2);
    int num2 = hashFunc2(str, strlen(str));
    printf("num = %d\n", num2);


    int n, m;
    scanf("%d%d", &n, &m);

    for(int i=0; i<n; i++)
    {
        scanf("%s", s[i]);
        int id = hashFunc(s[i], 3);
        hashTable[id]++;
    }


    for(int i=0; i<m; i++)
    {
        scanf("%s", temp);
        int id = hashFunc(temp, 3);
        printf("%d\n", hashTable[id]);
    }

    return 0;
}
