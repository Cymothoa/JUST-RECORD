#include<iostream>
using namespace std;
#include<string>
int main()
{
    //二维数组定义方式
    //数据类型 数组名[行数][列数];
    //数据类型 数组名[行数][列数]={(data1,data2),(data3,data4)};
    /*int arr[2][3]=
    {
        {1,2,3},
        {4,5,6}
    };*/
    //数据类型 数组名[][]={data1,data2};
    //数据类型 数组名[][列数]={data1,data2,data3};

    //二维数组名
    //查看二维数组所占空间      总cout<<sizeof(arr)<<endl;    一行cout<<sizeof(arr[0])<<endl;
    //查看二维数组首地址      cout<<首地址<<arr<<endl;  cout<<第一行首地址<<arr[0]<<endl;     cout<<第一个元素首地址<<&arr[0][0]<<endl;

    //总分统计
    int scores[3][3]=
    {
        {100,100,100},
        {90,50,100},
        {60,70,80}

    };
    string names[3]={"张三","李四","王五"};
    for(int i=0;i<3;i++)
    {
        int sum=0;
        for(int j=0;j<3;j++)
        {
            sum+=scores[i][j];
        }
        cout<<names[i]<<"的总分为："<<sum<<endl;
    }
    system("pause");

    return 0;
}
