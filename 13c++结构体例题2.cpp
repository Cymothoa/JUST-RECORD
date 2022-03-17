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
        cout<<"Ӣ��������"<<arr[i].name<<" ���䣺"<<arr[i].age<<" �Ա�"<<arr[i].sex<<endl;
    }
}

int main()
{
    //1.���Ӣ�۽ṹ��
    //2.��������������Ӣ��
    struct Hero arr[5]=
    {
        {"�ŷ�",22,"��"},
        {"���",20,"��"},
        {"����",27,"��"},
        {"����",18,"Ů"},
        {"����",21,"��"},
    };
    int len=sizeof(arr)/sizeof(arr[0]);
    //3.��Ӣ������
    bubbleSort(arr,len);
    //4.��ӡ�������
    print(arr,len);

    system("pause");

    return 0;
}
