#include <stdio.h>
#include <cmath>

const double pi = acos(-1.0);
const double eps = 1e-8;

#define Equ(a,b) ((fabs((a)-(b)))<(eps))
#define More(a,b) (((a)-(b))>(eps))
#define Less(a,b) (((a)-(b))<(eps))
#define MoreEqu(a,b) (((a)-(b))>(-eps))
#define LessEqu(a,b) (((a)-(b))<(-eps))
int main()
{
    double db = 1.26000008;
    if(MoreEqu(db, 1.26000007))
    {
        printf("true");
    }
    else
        printf("false");

    return 0;
}
