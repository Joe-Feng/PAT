
*/
#include <cstdio>
#include <algorithm>

using namespace std;

struct student{
    char name[10];
    char id[10];
    int score;
    int r;
};stu[10010];

bool cmp(student a, student b)
{
    if(a.score != b.score)
        return a.score > b.score;
    else
        return strcmp(a.name, b.name)<0;
}
//��ѡ������
void SlectSort(int a[], int n)
{
    for(int i=0; i<n-1; i++)
    {//ÿ�δ�δ�����������ѡ����С���󣩣���Ҫ����n-1�ˣ����ֻʣ��һ��Ԫ�أ��������ţ�
        int k = i;
        for(int j=i; j<n; j++)
        {//��[i,n-1]ѡ����Сֵ��С�±�Ϊk
            if(a[j] < a[k])
                k = j;
        }
        //����a[k]��a[i]
        int temp = a[i];
        a[i] = a[k];
        a[k] = temp;

    }
}


//�򵥲�������
void insertSort(int a[], int n)
{
    for(int i=1; i<n; i++)
    {//�ӵڶ�������ʼ����Ҫ����n-1��
        int temp = a[i], j = i;
        while(a[j-1] > temp  && j > 0)
        {//a[j-1]>temp ˵��tempС��ǰһ��Ԫ�أ�j>0˵��jֻ�ܵ��ڶ���Ԫ�أ���ֹԽ��
            a[j] = a[j-1]; //��a[j-1]����һλ��a[j]
            j--;
        }
        a[j] = temp;
    }
}
int main()
{
   int n, a[10]={0};
   scanf("%d", &n);

   for(int i=0; i<n; i++)
   {
       scanf("%d", &a[i]);
   }
//   printf("\n");

   SlectSort(a, n);
   for(int i=0; i<n; i++)
        printf("%d ", a[i]);
   printf("\n");

   insertSort(a, n);
   for(int i=0; i<n; i++)
        printf("%d ", a[i]);
   printf("\n");



    return 0;
}
