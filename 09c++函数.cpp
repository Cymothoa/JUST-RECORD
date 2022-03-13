#include<iostream>
using namespace std;

/*  值传递
    void swap(int num1,int num2)
    {
        cout<<"beforeswap:"<<endl;
        cout<<"num1="<<num1<<endl;
        cout<<"num2="<<num2<<endl;
        int temp=num1;
        num1=num2;
        num2=temp;
        cout<<"afterswap:"<<endl;
        cout<<"num1="<<num1<<endl;
        cout<<"num2="<<num2<<endl;
    }

int main()
{
    //值传递 函数调用时实参会将数值传入给形参
    //值传递时 如果形参发生改变 不会影响实参
    //如果不需要返回值 声明时可以写void 可以不写return
    int a=10;
    int b=20;
    swap(a,b);
    cout<<"a="<<a<<endl;
    cout<<"b="<<b<<endl;

    system("pause");

    return 0;
}*/

//函数的分文件编写
//1.创建xxxx.h头文件
//2.创建xxxx.cpp源文件
//3.在头文件中写函数的声明   #include<iostream>  using namespace std;
//4.在源文件中写函数的定义    #include "swap.h"
//函数的声明
void swap(int num1,int num2);
//函数的定义
void swap(int num1,int num2)
{
    cout<<"beforeswap:"<<endl;
    cout<<"num1="<<num1<<endl;
    cout<<"num2="<<num2<<endl;
    int temp=num1;
    num1=num2;
    num2=temp;
    cout<<"afterswap:"<<endl;
    cout<<"num1="<<num1<<endl;
    cout<<"num2="<<num2<<endl;
}

int main()
{
    int a=10;
    int b=20;
    swap(a,b);
    system("pause");

    return 0;
}
