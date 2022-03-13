#include<iostream>
using namespace std;
int main()
{
    //break
    //swtich语句 终结case并跳出switch
    //循环语句退出当前循环
    //嵌套循环 跳出最近的内层循环语句

    //continue
    //在循环语句中 跳过剩下未执行的语句 继续执行下一次循环
    /*for(int i=0;i<100;i++)
    {
        //输出奇数 不输出偶数
        if(i%2==0)
            continue;
        cout<<i<<endl;
    }*/

    //goto
    //无条件跳转语句

    cout<<"1....."<<endl;
    cout<<"2....."<<endl;
    goto flag;
    cout<<"3....."<<endl;
    cout<<"4....."<<endl;
    flag:      //标记"flag"后面是冒号！
    cout<<"5....."<<endl;
    system("pause");

    return 0;
}
