#include <cstdio>
#include <cstring>

char str[100];
char str1[100];
char str2[100];

char s[100][4], temp[4]; //s����������д��ĸ������β������һ����β��\0
int hashTable[26*26*26 +10];



//��A~Z��Ϊ0~25����26����д��ĸ��Ӧ��26����
int hashFunc(char s[], int len)
{//hash���������ַ���ת��Ϊ����
   int id = 0;
   for(int i = 0; i < len; i++)
   {
          id = id * 26 +(s[i] - 'A');
   }
   return id;
}


//��Сд��ĸ����a~z��Ϊ26~51,���52����
  int hashFunc1(char s[], int len)
{//hash���������ַ���ת��Ϊ����
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

//�����֣�0~9��Ϊ52~61,ת��Ϊ62����
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
