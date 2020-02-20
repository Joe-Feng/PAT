#include <stdio.h>

struct studentifo
{
    int id;
    char gender;
    int grade;
    studentifo(){} //用以不初始化就定义结构体变量

    studentifo(char _gender)
    {//只初始化gender
        gender = _gender;
    }

    studentifo(int _id, char _gender)
    {
        id = _id;
        gender = _gender;
    }

    studentifo(int _id, char _gender, int _grade):id(_id), gender(_gender), grade(_grade){}





};

int main()
{
    studentifo xm, xh;
  //  scanf("id=%d,gender=%c,grade=%d", &xm.id, &xm.gender, &xm.grade);

    xm = studentifo(1000, 'm', 100);
    xh = studentifo(1001, 'f');
    printf("%d\t %c\t %d\n", xm.id, xm.gender, xm.grade);
    printf("%d\t %c\n", xh.id, xh.gender);
    return 0;
}
