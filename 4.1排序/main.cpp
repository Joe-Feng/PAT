
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
//简单选择排序
void SlectSort(int a[], int n)
{
    for(int i=0; i<n-1; i++)
    {//每次从未排序的序列中选出最小（大），需要进行n-1趟（最后只剩下一个元素，不用再排）
        int k = i;
        for(int j=i; j<n; j++)
        {//从[i,n-1]选出最小值，小下标为k
            if(a[j] < a[k])
                k = j;
        }
        //交换a[k]与a[i]
        int temp = a[i];
        a[i] = a[k];
        a[k] = temp;

    }
}


//简单插入排序
void insertSort(int a[], int n)
{
    for(int i=1; i<n; i++)
    {//从第二个数开始，需要插入n-1次
        int temp = a[i], j = i;
        while(a[j-1] > temp  && j > 0)
        {//a[j-1]>temp 说明temp小于前一个元素，j>0说明j只能到第二个元素，防止越界
            a[j] = a[j-1]; //把a[j-1]后移一位至a[j]
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
