#include<iostream>

using namespace std;

#include<string>

    //对象的初始化和清理
    //构造函数
/*class person
{
public:
    //语法：类名（）{}
    //①没有返回值也不写void
    //函数名与类名相同
    //构造函数可以有参数 因此可以发生重载
    //程序在调用对象时会自动调用构造 无需手动调用 而且只会调用一次
    person()
    {
        cout<<"person构造函数的调用"<<endl;
    }

    //析构函数
    //语法：~类名（）{}
    //①没有返回值也不写void
    //函数名与类名相同 在名称前面加符号~
    //构造函数不可以有参数 因此不可以发生重载
    //程序在对象销毁前会自动调用 无需手动调用 而且只会调用一次
    ~person()
    {
        cout<<"person的析构函数调用"<<endl;
    }
};

void test01()
{
    person p;//在栈上的数据 test01执行完毕 释放这个对象
}*/

//------------------------------------------------

//构造函数的分类及调用
//两种分类方式：
class person
{
public:
    //按参数：有参构造和无参构造（默认构造）
    person()
    {
        cout<<"person的无参构造函数调用"<<endl;
    }

    person(int a)
    {
        age=a;
        cout<<"person的有参构造函数调用"<<endl;
    }
    //按类型：普通构造和拷贝构造
    person(const person &p)
    {
        age=p.age;//将传入的人身上的所有属性拷贝到我身上
        cout<<"person的拷贝构造函数调用"<<endl;
    }
    ~person()
    {
        cout<<"person的析构函数调用"<<endl;
    }
    int age;
};
//三中调用方式：
//括号法 显示法 隐式转换法
void test01()
{
    //1.括号法
    /*person p1;//默认构造函数调用
    person p2(10);
    person p3(p2);//拷贝构造函数
    //注意事项1
    //调用默认构造函数时 不要加括号（）
    //因为下面这行代码 编译器会认为是一个函数的声明 不会认为在创建对象
    //person p1();
    cout<<"p2的年龄为："<<p2.age<<endl;
    cout<<"p3的年龄为："<<p3.age<<endl;*/

    //2.显示法
    person p1;
    person p2=person(10);//有参构造
    person p3=person(p2);
    /*person(10);// 匿名对象 特点：当前行执行结束后 系统会立即回收匿名对象
    cout<<"aaaa"<<endl;*/
    //注意事项2
    //不要利用拷贝构造函数 初始化匿名对象
    //编译器会认为person(p3)===person p3 对象声明 报错重定义
    //person(p3);

    //3.隐式转换法
    person p4=10;//相当于写了 person p4=person(10);
    person p5=p4;
}

int main()
{
    //test01();

    //person p;//没有析构 对象还未销毁
    //-----------------------------------------------------
    //构造函数的分类及调用
    test01();
    system("pause");

    return 0;
}
