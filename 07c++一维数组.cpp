#include<iostream>
using namespace std;

int main()
{
    //1.数据类型 数组名[数组长度]
    //2.数据类型 数组名[数组长度]={值1.值2.值3.....}
    //3.数据类型 数组名[]={值1.值2.值3.....}

    //数组名的用途
    //可以统计整个数组在内存中的长度     sizeof(arr)
    //可以获取数组在内存中的首地址      cout<<arr<<endl;
    //即第一个元素地址                  cout<<&arr[0]

    //冒牌排序
    //创建数组>排前>排：趟循环>每趟>每趟的相邻元素两两对比>拍后
    int arr[]={2,1,7,6,5,8,9,4,0,3};
    int x=sizeof(arr)/sizeof(arr[0]);
    //
    for(int i=0;i<x;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    //
    for(int i=0;i<x-1;i++)     //元素数-1
    {
        for(int j=0;j<x-i-1;j++)     //元素数-趟数-1
        {
            if(arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    //
    for(int i=0;i<x;i++)
    {
        cout<<arr[i]<<" ";
    }
    system("pause");

    return 0;
}
