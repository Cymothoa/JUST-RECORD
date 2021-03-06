#include<iostream>

using namespace std;

#include<string>

//c++面向对象的三大特性：封装、继承、多态

//封装
//封装的意义：
//1.将属性和行为作为一个整体 表现生活中的事物
//语法：claaa 类名{访问权限：属性、行为};
//类中的属性和成员统称为 成员
//属性   成员属性 成员变量
//行为   成员函数 成员方法

//2.将属性和行为加以权限控制
//三种访问权限：
//public       类内可以访问 类外可以访问
//protected    类内可以访问 类外不可以访问
//private      类内可以访问 类外不可以访问

//struct 和 class 区别
//c++中 唯一区别在于 默认的访问权限不同
//struct 默认权限为公共
//class 默认权限为私有

//成员属性设置为私有
//优点1：将所有成员属性设置为私有 可以自己控制读写权限
//优点2：对于写权限 我们可以检测数据的有效性
int main()
{
    system("pause");

    return 0;
}
