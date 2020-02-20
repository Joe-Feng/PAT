#include <cstdio>


int weight[17] = {7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
char M[15] = {'1','0','X','9','8','7','6','5','4','3','2'};  //char初始化要用单引号

int main()
{
    int n;
    scanf("%d", &n);
    char str[20];
    bool flag = true;
    for(int i = 0; i<n; i++)
    {
        scanf("%s", str);
        int j, sum = 0;
        for(j = 0; j<17; j++)
        {
            if(!(str[j] >= '0' && str[j] <= '9'))
                break;
            sum = sum + (str[j] - '0') * weight[j];
        }
        if(j<17){
            flag = false;
            printf("%s\n", str);
        }
        else{
            if(M[sum % 11] != str[17]){
                flag = false;
                printf("%s\n", str);
            }
        }

    }

    if(flag == true)
        printf("All passed\n");


    return 0;
}
