/*
1 查询类题目类型：找出符合某一条件的信息（最大最小成绩对应的信息）

解法：不需要把对应信息全部存起来，只需要在找出对应条件时将对应信息保存下即可，
除了需要的结果对应的信息需要保留，其余信息可以随意覆盖

2 查询最大值时令初始 max = 最小值-1
令最小值初值为 min = 最大值 +1



*/


/*
#include <iostream>
#include <cstdio>
#include <string>

using namespace std;
string stu[105][2];  //这里数组设为100即可，因为学生成绩为0~100,且没有两个相同的成绩

int main()
{
    int n, score[105];
    string name, num;
    scanf("%d", &n);
    for(int i=0; i<n; i++)
    {

        cin>>name>>num;
        scanf("%d", &score[i]);
        stu[score[i]][0] = name;
        stu[score[i]][1] = num;
    }

    int maxs = score[0], mins = score[0];
    for(int i=0; i<n; i++)
    {
        if(maxs < score[i])
            maxs = score[i];

        if(mins > score[i])
            mins = score[i];
    }






    cout<<stu[maxs][0]<<" "<<stu[maxs][1]<<endl;
    cout<<stu[mins][0]<<" "<<stu[mins][1]<<endl;

    return 0;
}


*/


#include <iostream>
using namespace std;
int main() {
    int n, max = -1, min = 101, score;
    cin >> n;
    string maxname, minname, maxnum, minnum, name, num;
    for (int i = 0; i < n; i++) {
        cin >> name >> num >> score;
        if (max < score) {
            max = score;
            maxname = name;
            maxnum = num;
        }
        if (min > score) {
            min = score;
            minname = name;
            minnum = num;
        }
    }
    cout << maxname << " " << maxnum << endl << minname << " " << minnum;
    return 0;
}
