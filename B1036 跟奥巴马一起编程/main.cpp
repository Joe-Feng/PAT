/*
1 四舍五入：为了避免引入浮点数，再用round函数，可以直接判断奇偶来进行整数的四舍五入
2 %c是唯一一个可以吸收空格的，所以在用scanf时为scanf("%d %c", &col, &a)


*/


#include <cstdio>

int main()
{
    int row, col;
    char a;
    scanf("%d %c", &col, &a);

    if(col % 2 == 1)
        row = col / 2 + 1;
    else
        row = col / 2;

    for(int i=0; i<row; i++)
    {
        if(i == 0 ||  i == row -1)
        {
            for(int j=0; j<col; j++)
                printf("%c", a);
            if(i == 0)
                printf("\n");
        }
        else
        {
            printf("%c", a);
            for(int k=0; k<col-2; k++)
            {
                printf(" ");
            }
            printf("%c\n", a);
        }
    }

    return 0;
}
