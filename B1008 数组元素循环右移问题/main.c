/*
˼·���������ú���Reverse,�Ƚ�������������һ�Σ�Ȼ��ǰm��������һ�Σ���n-m��������һ��

�ҵĴ���û������m

m��û�и������ֵ����������Ϊm<n����Ҫ�ڶ���N��M����M=M%N�������Ա�֤M<N,ʹ����Ĳ�������㡣
�������������ǣ���һ������ΪN�����У�����Nλ֮������к͵�ǰ��������ͬ
*/
#include <stdio.h>
#include <stdlib.h>

void reverse(int *array, int begin, int end)
{
    for(int i=begin,j=end; i<j; i++, j--)
    {
        int temp = array[i];
        array[i] = array[j];
        array[j] = temp;
    }

}

int main()
{
    int n,m;
    scanf("%d%d", &n, &m);
    int array[100] ={0};
    for(int i=0; i<n; i++)
        scanf("%d", &array[i]);
    reverse(array, 0, n-1);
    reverse(array, 0, m-1);
    reverse(array, m, n-1);
    for(int i=0; i<n; i++)
    {
        printf("%d", array[i]);
        if(i < n-1)
            printf(" ");
    }


    return 0;
}
