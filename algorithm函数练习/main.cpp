#include <iostream>
#include <algorithm> //必须有using namespace std;
#include <string>
using namespace std;

//cmp为比较函数，用来制定比较规则
bool cmp(int a, int b)
{
    return a>b;
}

int main()
{
    int a = -1, b = 2;
    double x = 2.1, y = -3.2, z = 5.3;

    //max(),min()参数必须是两个，可以为正数、浮点数
    //三个数的最大值的写法max(x,max(y,z))
    printf("%.1f  %.1f\n", max(x, max(y, z)), min(x, z));

    //abs()参数必须为正数， 浮点数的绝对值用math函数中的fabs()
    printf("%d  %d\n", abs(a), abs(b));


    //swap()中的参数可以为整数，也可以为浮点数
    swap(x, y);
    printf("%.1f %.1f\n", x, y); //若写为%f，输出格式为小数点后有六位数

    //reverse[it,it2]可以将数组指针在[it,it2)之间的元素或者容器的迭代器在[it, it2)范围内的元素进行反转
    int p[10]={1, 2, 3, 4, 5, 6};
    reverse(p, p+4); //反转a[0]~a[3],a+4表示指向尾数的后一个
    for(int i=0; i<6; i++)
        printf("%d  ", p[i]);
    printf("\n");

    //对容器中的元素进行反转
    string str = "abcdefghi";
    reverse(str.begin() + 2, str.begin() + 6);//对str[2]~str[5]反转
    for(int i = 0; i < str.length(); i++)
    {
        printf("%c", str[i]);
    }
    printf("\n");


    //next_permutation(it, it2)给出一个序列在全排列中的先有个序列
    //范围为[it,it2),不包括it2所指的数，it2指向尾数的下一个元素
    int q[10] = {1, 2, 3};
    do
    {
        printf("%d%d%d\n", q[0], q[1], q[2]);
    }while(next_permutation(q, q+3));

    //fill(it, it2)将[it,it2)范围内的数组或者容器赋值为相同值，可以是数组类型对应范围内的任意值
    //memset(arrayname, value, sizeof(arrayname))给数组中每个元素赋相同值，只建议赋值0，-1，其他的用fill，用的时候要加 #include <cstring>;
    int m[10] = {1,2,3,4,5};
    fill(m, m+5, 233); //将m[0]~m[4]均赋值为233
    for(int i = 0;i<5; i++)
    printf("%d ", m[i]);
    printf("\n");

    //sort(首元素地址（必填），尾元素地址的下一个地址（必填），比较函数（非必填）)
    //不写比较函数默认从小到大排序
    //对int, double, char均可以排序,对结构体，容器string,vector,deque可以用sort
    int n[6] = {9, 4, 2, 5, 6, -1};
    sort(n, n+6);//n[0]~a[3]从小到大排序
    for(int i=0; i<6; i++)
    printf("%d ", n[i]);
    printf("\n");

    int c[6] = {9, 4, 2, 5, 6, -1};
    sort(c, c+6, cmp);//n[0]~a[3]从小到大排序
    for(int i=0; i<6; i++)
    printf("%d ", c[i]);
    printf("\n");

    //low_bound和upper_bound只能用到有序数组或容器中
    //low_bound(first, last, val)寻找在数组或容器的[first，last)范围内的第一个  大于等于  val的元素的位置，如果是数组，返回该位置的指针，如果为容器，返回该位置的迭代器
    //upper_bound(first,last, val)寻找在数组或容器的[first，last)范围内的第一个  大于 val的元素的位置，如果是数组，返回该位置的指针，如果为容器，返回该位置的迭代器
    //如果找不到，则返回可以插入该元素的位置的指针或者迭代器

    int w[10] ={1, 2, 2, 3,3, 3, 5,5,5,5};
    //寻找-1
    int *lowerpos = lower_bound(w, w+10, -1);
    int *upperpos = upper_bound(w, w+10, -1);
    printf("%d, %d\n", lowerpos - w, upperpos - w);
    //3
    lowerpos = lower_bound(w, w+10, 3);
    upperpos = upper_bound(w, w+10, 3);
    printf("%d, %d\n", lowerpos - w, upperpos - w);  //返回的为数组下标，返回值-数组首地址=数组下标

    return 0;
}
