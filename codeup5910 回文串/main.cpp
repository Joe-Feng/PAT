#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str;
    cin>>str;
    int flag = 0;
    for(int i=0, j=str.length()-1; i<j; i++, j-- )
    {
        if(str[i] != str[j])
            flag = 1;

    }
    if(flag == 1)
        printf("NO");
    else
        printf("YES");
    return 0;
}
