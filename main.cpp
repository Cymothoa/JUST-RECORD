#include <iostream>

using namespace std;

void swap(int *p1,int *p2)
{
    int temp=*p1;
    *p1=*p2;
    *p2=temp;
}

//冒泡排序函数 参数1 数组的首地址 参数2 数组长度
void bubble(int *arr,int len)
{
    for(int i=0;i<len-1;i++)
    {
        for(int j=0;j<len-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}

//打印数组
void print(int *arr,int len)
{
    for(int i=0;i<len;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    /*
    //1.定义一个指针
    int a=10;
    //指针定义的语法：数据类型*指针变量名;
    int *p;
    //让指针记录变量a的地址;
    p=&a;
    cout<<"a的地址为:"<<&a<<endl;
    cout<<"指针p为:"<<p<<endl;

    //2.使用指针
    //可以通过解引用的方式来找到指针指向的内存
    //指针前加*代表解引用，找到指针指向的内存中的数值
    *p=1000;
    cout<<"a="<<a<<endl;
    cout<<"*p="<<*p<<endl;
    */
    //-------------------------------------------------------------------------------------------------
    //空指针：指针变量指向内存中编号为0的空间
    //用途：初始化指针变量
    //int *p=NULL;
    //注意：空指针指向的内存是不可以访问的  eg:*p=100; ---->报错 0-255系统占用 不可以访问；

    //野指针：指针变量名指向非法的内存空间
    //int *p=(int*)0x1100;
    //cout<<*p<<endl;  --->报错    在程序中尽量避免野指针
    //------------------------------------------------------------------------------------------------
    //const修饰指针
    //int a=10;
    //int b=10;
    //int *p=&a;
    //1.const修饰指针--常量(const)指针(*)       特点：指针的指向可以修改 但是指针指向的值不能修改
    //const int *p=&a;          *p=20;(错误)     p=&b;(正确)
    //2.const修饰常量--指针常量       特点：指针的指向不能修改 但是指针指向的值可以修改
    //int * const p=&a;         *p=20;(正确)     p=&b;(错误)
    //3.const既修饰指针 又修饰常量    特点：指针的指向和指向的值都不能改
    //const int * const p=&a    *p=20;(错误)     p=&b;(错误)
    //-------------------------------------------------------------------------------
    //指针和数组
    //利用指针访问数组中的元素
    /*
    int arr[10]={0,1,2,3,4,5,6,7,8,9};
    cout<<"第一个元素为："<<arr[0]<<endl;
    int *p=arr;       //arr就是数组首地址
    cout<<"利用指针访问第一个元素："<<*p<<endl;
    p++;      //让指针向后偏移4个字节（数据类型int-->4个字节）
    cout<<"利用指针访问第二个元素："<<*p<<endl;
    cout<<"利用指针遍历数组"<<endl;
    int *p2=arr;
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++)
    {
        cout<<"第"<<i+1<<"个元素为："<<*p2<<endl;
        p2++;
    }
    */
    //-------------------------------------------------------------
    //指针和函数
    //1.值传递   int a=0; int b=10; swap(a,b);--->a b不发生改变
    //2.地址传递
    /*int a=10;
    int b=20;
    swap(&a,&b);
    cout<<"a="<<a<<endl;
    cout<<"b="<<b<<endl;*/
    //---------------------------------------
    //封装一个函数 利用冒泡排序 实现对整型数组的升序排列
    //1.创建数组
    int arr[10]={4,3,6,9,1,2,10,8,7,5};
    //数组长度
    int len=sizeof(arr)/sizeof(arr[0]);
    //2.创建函数 实现冒泡排序
    bubble(arr,len);
    //3.打印排序后的数组
    print(arr,len);
    system("pause");

    return 0;
}
