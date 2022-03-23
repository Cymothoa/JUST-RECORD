#include<iostream>

using namespace std;

#include<string>

//c++中 函数的形参列表中的形参是可以有默认值的
//函数默认参数
//语法：返回值类型 函数名（参数=默认值）{}
//若果自己传入数据 用自己的数据 若没有 用默认值
int func(int a,int b=20,int c=30)
{
    return a+b+c;
}
//注意事项
//①若某个位置已经有了默认参数 那么从这个位置从左向右 都必须有默认值
//②若函数声明有默认参数 函数实现就不能有默认参数---二义性 重定义
//即声明和实现只能有一个有默认参数
int func2(int a=10,int b=10);

int func2(int a,int b)
{
    return a+b;
}
//--------------------------------------------------------------------

//函数占位参数
//c++中函数的形参列表可以有占位参数 用来占位 调用函数时必须填补该位置
//语法：返回值类型 函数名（数据类型）{}
//目前阶段的占位参数 我们还用不到 后面课程会用到
void func3(int a,int)
{
    cout<<"this is func3"<<endl;
}
//占位参数可以有默认参数
int func4(int a,int=10)
{
    return a;
}
//-------------------------------------------------

//函数重载
//作用：函数名可以相同 提高复用性
//函数重载满足条件：
//1.同一个作用域下
//2.函数名称相同
//3.函数参数 类型不同/个数不同/顺序不同
//tips:函数的返回值不可以作为函数重载的条件
void func5()
{
    cout<<"this is func5"<<endl;
}
void func5(int a)
{
    cout<<"this is func5!"<<endl;
}
//注意事项：
//1.引用作为重载条件
void func6(int &a)  //int &a=10 不合法
{
    cout<<"func6(int &a)调用"<<endl;
}
void func6(const int &a)   //const int &a=10 合法
{
    cout<<"func6(const int &a)调用"<<endl;
}
//2.函数重载碰到函数默认参数
void func7(int a,int b/*=10*/)//出现二义性 报错
{
    cout<<"func7(int a,int b)调用"<<endl;
}
void func7(int a)
{
    cout<<"func7(int a)调用"<<endl;
}

int main()
{
    cout<<func(10,30)<<endl;

    cout<<func2(10,30)<<endl;

    //-----------------------------------------------

    func3(10,10);

    cout<<func4(10)<<endl;

    //---------------------------------
    int a=10;
    func6(a);
    func6(10);

    func7(10);

    system("pause");

    return 0;
}
