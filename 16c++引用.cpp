#include<iostream>

using namespace std;

#include<string>

void swap(int &a,int &b)
{
    int temp=a;
    a=b;
    b=temp;
}

int& test01()
{
    int a=10;//局部变量存放在四区中的栈区
    return a;
}

int& test02()
{
    static int a=10;
    return a;
}

void show(const int &val)
{
    // val=1000; 加const后报错
    cout<<"val="<<val<<endl;
}
int main()
{
    //引用
    //作用：给变量起别名
    //语法：数据类型 &别名=原名
    //注意事项：
    //①引用必须初始化   int &b;(错误 要初始化)
    //②引用在初始化后 不可以改变(别名)
    /*int a=10;
    int &b=a;
    int c=20;
    b=c;  //是赋值 b不能再成为c的别名
    cout<<"a="<<a<<endl;
    cout<<"b="<<b<<endl;
    cout<<"c="<<c<<endl;*/

    //引用做函数参数
    //作用：函数传参时 可以利用引用的技术让形参修饰实参
    //优点：可以简化指针修改实参
    /*int a=20;
    int b=10;
    swap(a,b);
    cout<<"a="<<a<<endl;
    cout<<"b="<<b<<endl;//引用传递 形参会修饰实参*/

    //引用做函数的返回值
    //作用：引用是可以作为函数的返回值存在的
    //注意：不要返回局部变量引用
    /*int &ref=test01();
    cout<<"ref="<<ref<<endl;//第一次正确系统保存 第二次错误 内存已释放*/
    //用法：函数调用作为左值
    int &ref=test02();
    cout<<"ref="<<ref<<endl;
    test02()=1000; //如果函数的返回值是引用 这个函数调用可以作为左值
    cout<<"ref="<<ref<<endl;

    //引用的本质
    //本质：引用的本质在c++内部实现是一个指针常量

    //常量引用
    //作用：常量引用主要用来修饰形参 防止误操作
    //int &a=10;//错误 引用必须引一块合法的内存空间
    const int & ref2=10;//加入const之后变为只读 不可以修改
    //在函数形参列表中 可以加const修饰形参 防止形参改变实参
    int a=100;
    show(a);
    system("pause");

    return 0;
}
