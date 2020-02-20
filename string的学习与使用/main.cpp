
/*
1 string的定义：与其他数据类型一样，直接定义即可

2 string的访问：通过数组下标访问 ；
                直接输入输出字符串，用cin和cout(cin,cout要加头文件<iostream>);
                通过迭代器访问;

3 string的常用函数----使用函数的形式：字符串.函数
    1 operator+= ：将两个string连接起来

    2 compare operator:string类型可以字节使用==、！=、 < <= > >=比较大小，比较规则是字典序

    3 length()/size() :返回string的字符数

    4 insert():insert(pos, string) :在pos号位置插入字符串string
               insert(it, it2, it3)   it,it2,it3均为迭代器，it为原字符串的欲插入位置的迭代器，it2,it3为待插入字符串的首尾迭代器,表示字符串[it2, it3)将被插在it位置

    5 erase(): 删除单个元素: erase(it) it为需要删除元素的迭代器
               删除一个区间内的元素：erase(first, last)  删除[first, last)，first为删除区间起始迭代器，last为区间尾迭代器的下一个地址

    6 clear(): 清除string中的数据 str.clear()                                erase(pos,length) 删除从0号位起的length个字符


    7 substr(pos, len): 返回pos号位开始、长度为len的子串

    8 string::pos :常数，本身值为-1，也可认为是unsigned的最大值4294967295，也可作为find函数实配时的返回值

    9 str.find(str2):若str2是str的子串，返回其在str中第一次出现的位置；如果不是子串，返回string::npos

    10 replace(): str.replace(pos, len, str2) 把str从pos位开始长度为len的子串替换为str2
                  str.replace(it1, it2, str2) 把str2的迭代器[it1, it2)范围的子串替换为str2


*/
#include <iostream>
#include <string> //使用string必须加头文件<string>   ,注意：<string>与<cstring>不同

using namespace std; //用string必须加这句

int main()
{
    string str = "abcd"; //string的定义与其他数据类型相同，要加双引号
    for(int i=0; i<str.length(); i++)
    {
        printf("%c", str[i]); //string的访问：通过下标访问
    }
    printf("\n");

    printf("%s\n", str.c_str());//c_str()可以将sring类转换为字符数组

    for(string::iterator it = str.begin(); it != str.end(); it++){
        printf("%c", *it);
    }//当需要使用以迭代器为参数的函数时才需要用string迭代器
    printf("\n");


    string str1 = "abc", str2 = "def", str3;
    str3 = str1 + str2; //将str1和str2拼接，赋值给str3
    str1 += str2; //将str2直接拼接到str1上
    cout<<str1<<endl;
    cout<<str3<<endl;

    if(str1 == str3) printf("ok1\n");
    if(str1 < str2 ) printf("ok2\n");

    printf("%d %d\n", str1.length(), str1.size());

    string str4 = "abcxyz", str5 = "opq", str6 = "123";
    str4.insert(3,str5); //在str4[3]处插入str5,str5位置也可以直接写字符串“opq”
    cout<<str4<<endl;
    str5.insert(str5.begin()+1, str6.begin(), str6.end()); //在str5的一号位置（str5[1]）插入str6
    cout<<str5<<endl;

    str4.erase(str4.begin() + 3); //删除3号位,及str4[3]
    cout<<str4<<endl;

    str5.erase(str5.begin() + 2, str5.end() - 1);//删除2号位到末尾字符前一位
    cout<<str5<<endl;

    str6.erase(0,2); //删除区间0号位起的两个字符
    cout<<str6<<endl;

    str6.clear();
    cout<<str6.length()<<endl; //str6长度变为0

    string str7 = "thank you for your smile.";
    cout<<str7.substr(0, 5) <<endl;

    string str8 = "you", str9 = "me";
    if(str7.find(str8) != string::npos)
    {
        cout<<str7.find(str8) << endl;

    }
    if(str7.find(str9) == string::npos)
    {
        cout<<"I don't know"<<endl;
    }

    string stri = "wo shi xiao ke ai";
    string stri1 = "bu shi", stri2 = "surly";
    cout<<stri.replace(3, 3 , stri1)<<endl;
    cout<<stri.replace(stri.begin() + 3, stri.begin() +6, stri2)<<endl;

    return 0;
}
