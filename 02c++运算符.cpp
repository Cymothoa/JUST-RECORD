#include<iostream>
using namespace std;

int main()
{
    /*加减乘除
    int a=10;
    int b=3;
    int c=20;
    double d=3.1;
    cout<<a+b<<endl;
    cout<<a-b<<endl;
    cout<<a*b<<endl;
    cout<<a/b<<endl;    整型除整型结果仍然是整型
    cout<<a/c<<endl;
    cout<<a/d<<endl;*/

    /*取模运算
    int a=10;
    int b=3;
    int c=20;
    cout<<a%b<<endl;
    cout<<a%c<<endl;   当a<c时，取模结果为a
    两个小数不能做取模运算*/

    /*递增递减
    //1.前置递增
    int a=10;
    ++a;
    cout<<"a="<<a<<endl;
    //2.后置递增
    int b=10;
    b++;
    cout<<"b="<<b<<endl;
    //3.前后置的区别
    //前置先让变量+1 然后进行表达式运算
    int a1=10;
    int b1=++a1*10;
    cout<<"a1="<<a1<<endl;
    cout<<"b1="<<b1<<endl;
    //后置先表达式运算 再+1
    int a2=10;
    int b2=a2++*10;
    cout<<"a2="<<a2<<endl;
    cout<<"b2="<<b2<<endl;*/

    //赋值运算符 = += -= *= /= %=

    /*
    //比较运算符 == != > < >= <= 用于表达式比较 返回一个真值或假值
    int a=10;
    int b=20;
    cout<<(a==b)<<endl;     记得加()，优先级！！！
    */

    /*逻辑运算符 ! && ||
    int a=10;
    cout<<!a<<endl;   在c++中，除了0都为真
    cout<<!!a<<endl;

    int b=10;
    int c=0;
    cout<<(b&&c)<<endl;   同真才真

    int d=10;
    int e=0;
    cout<<(d||e)<<endl;   一真即真
    */
    system("pause");

    return 0;
}
