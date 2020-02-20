/*
思路：利用逆置函数Reverse,先将数组整体逆置一次，然后将前m个数逆置一次，后n-m个数逆置一次

我的错误：没有修正m

m并没有给出最大值，并不能认为m<n，需要在读入N和M后令M=M%N这样可以保证M<N,使后面的操作更简便。
这样做的依据是：对一个长度为N的序列，右移N位之后的序列和当前序列是相同
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
