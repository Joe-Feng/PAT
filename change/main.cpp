#include <iostream>
#include <stdio.h>

using namespace std;

void change(int *p, int *q)
{
    int tempt =*p;

    *p = *q;

    *q = tempt;

}
int main()
{
    int a=3, b=4;

    int *p=&a, *q=&b;

    change(p, q);

    printf("a = %d b = %d", *p ,*q);

    return 0;
}


