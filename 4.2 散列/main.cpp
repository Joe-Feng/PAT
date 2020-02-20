/*
Q1:
����N�����������ٸ�M������������������е�ÿ�����ֱ��Ƿ���N�������г��ֹ���
���ֹ����Σ�N��M<=10^5

���������
�ռ任ʱ�䣬ֱ�Ӱ����������Ϊ������±���������������ʽ���ͳ�ƣ���ѯ���Ӷ���O(1)

Q2������������ܴ󣬻��߲���������ô�죿
��ɢ�з�

keyΪ���������õ�ɢ�к�����
ֱ�Ӷ�ַ����H(key) = key;  H(key) = key * a + b;
����ȡ�෨
ƽ��ȡ�з�

�����ͻ�ķ�����
����̽�ⷨ
ƽ��̽�鷨
����ַ��


�ַ���hash��

*/

#include <cstdio>
#include <cstring>

const int maxn = 100000;
bool hashTable[maxn] = {false};
int hashTable1[maxn] = {0};
char str[100];
char str1[100];
char str2[100];
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
