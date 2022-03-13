#include<iostream>
using namespace std;
int main()
{
    /*
    //三只小猪称重
    //创建三只小猪体重变量
    int a=0;
    int b=0;
    int c=0;
    //让用户输入三只小猪的体重
    cout<<"请输入小猪A的体重："<<endl;
    cin>>a;
    cout<<"请输入小猪B的体重："<<endl;
    cin>>b;
    cout<<"请输入小猪C的体重："<<endl;
    cin>>c;
    //判断最重小猪
    {
        if(a>b)
        {
            if(a>c)
                cout<<"小猪A最重"<<endl;
            else
                cout<<"小猪C最重"<<endl;
        }
        else if(a<b&&c<b)
            cout<<"小猪B最重"<<endl;
        else
            cout<<"小猪C最重"<<endl;
    }
    */

    //三目运算符 表达式1？表达式2：表达式3
    //判断1是否为真 是执行表达式2 否则执行表达式3
    //a和b作比较 大的赋值给c
    //c=(a>b?a:b)
    //c++中三目运算符返回的是变量 可以继续赋值

    //switch语句
    //switch(字符型/整型) case: bresk; default:
    system("pause");

    return 0;
}
