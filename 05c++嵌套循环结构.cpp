#include<iostream>
using namespace std;
int main()
{
    //九九乘法表
    int i=0;
    int j=0;
    for(i=1;i<10;i++)//行
    {
        for(j=1;j<=i;j++)//列
            cout<<j<<"*"<<i<<"="<<i*j<<"  ";   //列*行
        cout<<endl;
    }
    system("pause");

    return 0;
}
