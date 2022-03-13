#include<iostream>
using namespace std;
#include<string>      //用c++风格的字符串要引用这个头文件

//#define M 12

int main()
{
    //cout<<"hello world"<<endl;   输出

    /*变量创建：数据类型 变量名=初始值
    int a=10;
    cout<<"a="<<a<<endl;*/

    /* 常量
    const int day=7;
    cout<<"一周有 "<<day<<" 天"<<endl;
    cout<<"一年有 "<<M<<" 个月"<<endl;*/

    //-----------------数据类型

    /*short num1=10;
    cout<<"short所占内存空间为："<<sizeof(num1)<<endl;   2
    cout<<"short所占内存空间为："<<sizeof(short)<<endl;  2*/

    /*float f1=3.1415926f;   float 7位有效数字
    double d1=3.1415926;     double 15-16位有效数字
    cout<<"f1="<<f1<<endl;  3.14159
    cout<<"d1="<<d1<<endl;  3.14159
    cpp中小数点前也算有效数字 默认情况下，输出一个小数，显示6位有效数字*/

    /*科学计数法
    float f1=3e2;            3*10^2
    cout<<"f1="<<f1<<endl;   300
    float f2=3e-2;           3*0.1^2
    cout<<"f2="<<f2<<endl;   0.03*/

    /*字符串
    char str1[]="hello world";
    cout<<str1<<endl;
    string str2="hello world";
    cout<<str2<<endl;*/

    /*布尔类型 代表真假
    bool flag=true;
    cout<<flag<<endl;    1
    flag=false;
    cout<<flag<<endl;    0
    bool类型占1个字节大小*/

    /*数据的输入
    int a=0;
    cout<<"请给整型a赋值"<<endl;
    cin>>a;
    cout<<"a:"<<a<<endl;

    string str="hello";
    cout<<"请给字符串str赋值"<<endl;
    cin>>str;
    cout<<"str："<<str<<endl;

    bool flag=false;
    cout<<"请给bool类型的flag赋值"<<endl;
    cin>>flag;
    cout<<"flag："<<flag<<endl;*/


    system("pause");
    return 0;
}
