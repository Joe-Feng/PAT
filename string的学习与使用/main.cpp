
/*
1 string�Ķ��壺��������������һ����ֱ�Ӷ��弴��

2 string�ķ��ʣ�ͨ�������±���� ��
                ֱ����������ַ�������cin��cout(cin,coutҪ��ͷ�ļ�<iostream>);
                ͨ������������;

3 string�ĳ��ú���----ʹ�ú�������ʽ���ַ���.����
    1 operator+= ��������string��������

    2 compare operator:string���Ϳ����ֽ�ʹ��==����=�� < <= > >=�Ƚϴ�С���ȽϹ������ֵ���

    3 length()/size() :����string���ַ���

    4 insert():insert(pos, string) :��pos��λ�ò����ַ���string
               insert(it, it2, it3)   it,it2,it3��Ϊ��������itΪԭ�ַ�����������λ�õĵ�������it2,it3Ϊ�������ַ�������β������,��ʾ�ַ���[it2, it3)��������itλ��

    5 erase(): ɾ������Ԫ��: erase(it) itΪ��Ҫɾ��Ԫ�صĵ�����
               ɾ��һ�������ڵ�Ԫ�أ�erase(first, last)  ɾ��[first, last)��firstΪɾ��������ʼ��������lastΪ����β����������һ����ַ

    6 clear(): ���string�е����� str.clear()                                erase(pos,length) ɾ����0��λ���length���ַ�


    7 substr(pos, len): ����pos��λ��ʼ������Ϊlen���Ӵ�

    8 string::pos :����������ֵΪ-1��Ҳ����Ϊ��unsigned�����ֵ4294967295��Ҳ����Ϊfind����ʵ��ʱ�ķ���ֵ

    9 str.find(str2):��str2��str���Ӵ�����������str�е�һ�γ��ֵ�λ�ã���������Ӵ�������string::npos

    10 replace(): str.replace(pos, len, str2) ��str��posλ��ʼ����Ϊlen���Ӵ��滻Ϊstr2
                  str.replace(it1, it2, str2) ��str2�ĵ�����[it1, it2)��Χ���Ӵ��滻Ϊstr2


*/
#include <iostream>
#include <string> //ʹ��string�����ͷ�ļ�<string>   ,ע�⣺<string>��<cstring>��ͬ

using namespace std; //��string��������

int main()
{
    string str = "abcd"; //string�Ķ�������������������ͬ��Ҫ��˫����
    for(int i=0; i<str.length(); i++)
    {
        printf("%c", str[i]); //string�ķ��ʣ�ͨ���±����
    }
    printf("\n");

    printf("%s\n", str.c_str());//c_str()���Խ�sring��ת��Ϊ�ַ�����

    for(string::iterator it = str.begin(); it != str.end(); it++){
        printf("%c", *it);
    }//����Ҫʹ���Ե�����Ϊ�����ĺ���ʱ����Ҫ��string������
    printf("\n");


    string str1 = "abc", str2 = "def", str3;
    str3 = str1 + str2; //��str1��str2ƴ�ӣ���ֵ��str3
    str1 += str2; //��str2ֱ��ƴ�ӵ�str1��
    cout<<str1<<endl;
    cout<<str3<<endl;

    if(str1 == str3) printf("ok1\n");
    if(str1 < str2 ) printf("ok2\n");

    printf("%d %d\n", str1.length(), str1.size());

    string str4 = "abcxyz", str5 = "opq", str6 = "123";
    str4.insert(3,str5); //��str4[3]������str5,str5λ��Ҳ����ֱ��д�ַ�����opq��
    cout<<str4<<endl;
    str5.insert(str5.begin()+1, str6.begin(), str6.end()); //��str5��һ��λ�ã�str5[1]������str6
    cout<<str5<<endl;

    str4.erase(str4.begin() + 3); //ɾ��3��λ,��str4[3]
    cout<<str4<<endl;

    str5.erase(str5.begin() + 2, str5.end() - 1);//ɾ��2��λ��ĩβ�ַ�ǰһλ
    cout<<str5<<endl;

    str6.erase(0,2); //ɾ������0��λ��������ַ�
    cout<<str6<<endl;

    str6.clear();
    cout<<str6.length()<<endl; //str6���ȱ�Ϊ0

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
