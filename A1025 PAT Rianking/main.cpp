/*
1 思考结构体中应该记录什么值
2 sort的使用
3 排名的两种处理方法
4 数组大小应该设为多大
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
}stu[30010];  //题目中场次n<=100, 每场人数<=300, 则数组大小>=30000,否则UI有 段错误

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
    scanf("%d", &n);//n为考场数
    for(int i=1; i<=n; i++)
    {
        scanf("%d", &k); //k为考场人数
       for(int j=0; j<k; j++)
       {//每个考场考生信息都在一个数组中保存，因此这里下标为num
          scanf("%s %d", stu[num].id, &stu[num].score );
          stu[num].location_num = i;
          num++;
       }
       sort(stu + num - k, stu + num, cmp);
       //stu+num-k表示本考场第一个，stu+num表示最后一个人的后一个

       //排名处理方法一：将名次存储起来
       stu[num - k].location_rank = 1; //第一个人排名为本场第一
       for(int j=num - k + 1; j<num; j++)
       {
           if(stu[j].score == stu[j-1].score)
            stu[j].location_rank = stu[j-1].location_rank;
           else
            stu[j].location_rank = j - (num - k) + 1;//num-k表示本场前边有多少人
       }

    }

    printf("%d\n", num);
    sort(stu, stu + num, cmp);

   //排名的第二种处理方法：不存储名次，直接输出
    int r = 1;
    for(int i=0; i<num; i++)
    {
        if(i>0 && stu[i].score != stu[i-1].score)
            r = i + 1; //人数+1
        printf("%s ", stu[i].id);
        printf("%d %d %d\n", r, stu[i].location_num, stu[i].location_rank);
    }
    return 0;
}
