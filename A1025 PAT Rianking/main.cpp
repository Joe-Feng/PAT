/*
1 ˼���ṹ����Ӧ�ü�¼ʲôֵ
2 sort��ʹ��
3 ���������ִ�����
4 �����СӦ����Ϊ���
*/
#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>

using namespace std;

struct student
{
    char id[15];
    int score;
    int location_num;
    int location_rank;
}stu[30010];  //��Ŀ�г���n<=100, ÿ������<=300, �������С>=30000,����UI�� �δ���

bool cmp(student a, student b)
{
    if(a.score != b.score)
        return a.score > b.score;
    else
        return strcmp(a.id, b.id) < 0;
}
int main()
{
    int n, k, num = 0;
    scanf("%d", &n);//nΪ������
    for(int i=1; i<=n; i++)
    {
        scanf("%d", &k); //kΪ��������
       for(int j=0; j<k; j++)
       {//ÿ������������Ϣ����һ�������б��棬��������±�Ϊnum
          scanf("%s %d", stu[num].id, &stu[num].score );
          stu[num].location_num = i;
          num++;
       }
       sort(stu + num - k, stu + num, cmp);
       //stu+num-k��ʾ��������һ����stu+num��ʾ���һ���˵ĺ�һ��

       //����������һ�������δ洢����
       stu[num - k].location_rank = 1; //��һ��������Ϊ������һ
       for(int j=num - k + 1; j<num; j++)
       {
           if(stu[j].score == stu[j-1].score)
            stu[j].location_rank = stu[j-1].location_rank;
           else
            stu[j].location_rank = j - (num - k) + 1;//num-k��ʾ����ǰ���ж�����
       }

    }

    printf("%d\n", num);
    sort(stu, stu + num, cmp);

   //�����ĵڶ��ִ����������洢���Σ�ֱ�����
    int r = 1;
    for(int i=0; i<num; i++)
    {
        if(i>0 && stu[i].score != stu[i-1].score)
            r = i + 1; //����+1
        printf("%s ", stu[i].id);
        printf("%d %d %d\n", r, stu[i].location_num, stu[i].location_rank);
    }
    return 0;
}
