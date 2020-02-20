#include <stdio.h>


int main()
{
    int n;
    int count = 0;
    scanf("%d", &n);
    if(n > 1000)
        return 1;
    while(n != 1)
    {
        if(n % 2 == 0)
            n /= 2;
        else
            n =(3 * n + 1) / 2;
        count++;
    }
    printf("%d", count);
    return 0;
}
