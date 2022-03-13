#include<iostream>
using namespace std;
int main()
{
    /*
    //猜数字
    int num=rand()%4+1;
    cout<<"请输入猜测数字："<<endl;
    int in=0;
    int flag=1;
    while(flag)
    {
        cin>>in;
        if(in>num)
            cout<<"猜大了 请重来"<<endl;
        else if(in<num)
            cout<<"猜小了 请重来"<<endl;
        else
            {
                cout<<"恭喜你猜对了"<<endl;
                flag=0;
            }
    }
    */

    //敲七
    int a=0;
    int b=0;
    int i=0;
    for(i=1;i<=100;i++)
    {
        a=i%10;
        b=i/10;
        if(i==7)
            cout<<"敲桌子"<<endl;
        else if(a==7||b==7||i%7==0)
            cout<<"敲桌子"<<endl;
        else
            cout<<i<<endl;
    }
    system("pause");

    return 0;
}
