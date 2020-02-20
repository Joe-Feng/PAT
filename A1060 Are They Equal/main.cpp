#include <iostream>
#include <string>
#include <cstdio>

using namespace std;

int main()
{
    int n;
    string str1, str2;
    cin >> n >> str1 >> str2;
    if(str1.substr(0, n) == str2.substr(0, n))
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}
