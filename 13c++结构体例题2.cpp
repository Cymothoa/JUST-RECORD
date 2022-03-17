#include<iostream>

using namespace std;

#include<string>

struct Hero
{
    string name;
    int age;
    string sex;
};

void bubbleSort(struct Hero arr[],int len)
{
    for(int i=0;i<len-1;i++)
    {
        for(int j=0;j<len-i-1;j++)
        {
            if(arr[j].age>arr[j+1].age)
            {
                struct Hero temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}

void print(struct Hero arr[],int len)
{
    for(int i=0;i<len;i++)
    {
        cout<<"英雄姓名："<<arr[i].name<<" 年龄："<<arr[i].age<<" 性别："<<arr[i].sex<<endl;
    }
}

int main()
{
    //1.设计英雄结构体
    //2.创建数组存放五名英雄
    struct Hero arr[5]=
    {
        {"张飞",22,"男"},
        {"周瑜",20,"男"},
        {"刘备",27,"男"},
        {"貂蝉",18,"女"},
        {"赵云",21,"男"},
    };
    int len=sizeof(arr)/sizeof(arr[0]);
    //3.对英雄排序
    bubbleSort(arr,len);
    //4.打印排序后结果
    print(arr,len);

    system("pause");

    return 0;
}
