#include <stdio.h>

void change(int &a, int &b)
{
    int temp =a;
    a = b;
    b = temp;
}

int main()
{
    int p = 2, q = 3;
 //   int *a = &p, *b = &q;
    change(p, q);
    printf("p = %d, q = %d", p, q);

    return 0;
}


