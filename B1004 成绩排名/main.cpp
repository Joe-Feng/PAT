/*
1 ��ѯ����Ŀ���ͣ��ҳ�����ĳһ��������Ϣ�������С�ɼ���Ӧ����Ϣ��

�ⷨ������Ҫ�Ѷ�Ӧ��Ϣȫ����������ֻ��Ҫ���ҳ���Ӧ����ʱ����Ӧ��Ϣ�����¼��ɣ�
������Ҫ�Ľ����Ӧ����Ϣ��Ҫ������������Ϣ�������⸲��

2 ��ѯ���ֵʱ���ʼ max = ��Сֵ-1
����Сֵ��ֵΪ min = ���ֵ +1



*/


/*
#include <iostream>
#include <cstdio>
#include <string>

using namespace std;
string stu[105][2];  //����������Ϊ100���ɣ���Ϊѧ���ɼ�Ϊ0~100,��û��������ͬ�ĳɼ�

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
