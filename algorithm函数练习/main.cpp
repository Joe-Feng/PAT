#include <iostream>
#include <algorithm> //������using namespace std;
#include <string>
using namespace std;

//cmpΪ�ȽϺ����������ƶ��ȽϹ���
bool cmp(int a, int b)
{
    return a>b;
}

int main()
{
    int a = -1, b = 2;
    double x = 2.1, y = -3.2, z = 5.3;

    //max(),min()��������������������Ϊ������������
    //�����������ֵ��д��max(x,max(y,z))
    printf("%.1f  %.1f\n", max(x, max(y, z)), min(x, z));

    //abs()��������Ϊ������ �������ľ���ֵ��math�����е�fabs()
    printf("%d  %d\n", abs(a), abs(b));


    //swap()�еĲ�������Ϊ������Ҳ����Ϊ������
    swap(x, y);
    printf("%.1f %.1f\n", x, y); //��дΪ%f�������ʽΪС���������λ��

    //reverse[it,it2]���Խ�����ָ����[it,it2)֮���Ԫ�ػ��������ĵ�������[it, it2)��Χ�ڵ�Ԫ�ؽ��з�ת
    int p[10]={1, 2, 3, 4, 5, 6};
    reverse(p, p+4); //��תa[0]~a[3],a+4��ʾָ��β���ĺ�һ��
    for(int i=0; i<6; i++)
        printf("%d  ", p[i]);
    printf("\n");

    //�������е�Ԫ�ؽ��з�ת
    string str = "abcdefghi";
    reverse(str.begin() + 2, str.begin() + 6);//��str[2]~str[5]��ת
    for(int i = 0; i < str.length(); i++)
    {
        printf("%c", str[i]);
    }
    printf("\n");


    //next_permutation(it, it2)����һ��������ȫ�����е����и�����
    //��ΧΪ[it,it2),������it2��ָ������it2ָ��β������һ��Ԫ��
    int q[10] = {1, 2, 3};
    do
    {
        printf("%d%d%d\n", q[0], q[1], q[2]);
    }while(next_permutation(q, q+3));

    //fill(it, it2)��[it,it2)��Χ�ڵ��������������ֵΪ��ֵͬ���������������Ͷ�Ӧ��Χ�ڵ�����ֵ
    //memset(arrayname, value, sizeof(arrayname))��������ÿ��Ԫ�ظ���ֵͬ��ֻ���鸳ֵ0��-1����������fill���õ�ʱ��Ҫ�� #include <cstring>;
    int m[10] = {1,2,3,4,5};
    fill(m, m+5, 233); //��m[0]~m[4]����ֵΪ233
    for(int i = 0;i<5; i++)
    printf("%d ", m[i]);
    printf("\n");

    //sort(��Ԫ�ص�ַ�������βԪ�ص�ַ����һ����ַ��������ȽϺ������Ǳ��)
    //��д�ȽϺ���Ĭ�ϴ�С��������
    //��int, double, char����������,�Խṹ�壬����string,vector,deque������sort
    int n[6] = {9, 4, 2, 5, 6, -1};
    sort(n, n+6);//n[0]~a[3]��С��������
    for(int i=0; i<6; i++)
    printf("%d ", n[i]);
    printf("\n");

    int c[6] = {9, 4, 2, 5, 6, -1};
    sort(c, c+6, cmp);//n[0]~a[3]��С��������
    for(int i=0; i<6; i++)
    printf("%d ", c[i]);
    printf("\n");

    //low_bound��upper_boundֻ���õ����������������
    //low_bound(first, last, val)Ѱ���������������[first��last)��Χ�ڵĵ�һ��  ���ڵ���  val��Ԫ�ص�λ�ã���������飬���ظ�λ�õ�ָ�룬���Ϊ���������ظ�λ�õĵ�����
    //upper_bound(first,last, val)Ѱ���������������[first��last)��Χ�ڵĵ�һ��  ���� val��Ԫ�ص�λ�ã���������飬���ظ�λ�õ�ָ�룬���Ϊ���������ظ�λ�õĵ�����
    //����Ҳ������򷵻ؿ��Բ����Ԫ�ص�λ�õ�ָ����ߵ�����

    int w[10] ={1, 2, 2, 3,3, 3, 5,5,5,5};
    //Ѱ��-1
    int *lowerpos = lower_bound(w, w+10, -1);
    int *upperpos = upper_bound(w, w+10, -1);
    printf("%d, %d\n", lowerpos - w, upperpos - w);
    //3
    lowerpos = lower_bound(w, w+10, 3);
    upperpos = upper_bound(w, w+10, 3);
    printf("%d, %d\n", lowerpos - w, upperpos - w);  //���ص�Ϊ�����±꣬����ֵ-�����׵�ַ=�����±�

    return 0;
}
