#include<iostream>
using namespace std;

int main()
{
    //1.�������� ������[���鳤��]
    //2.�������� ������[���鳤��]={ֵ1.ֵ2.ֵ3.....}
    //3.�������� ������[]={ֵ1.ֵ2.ֵ3.....}

    //����������;
    //����ͳ�������������ڴ��еĳ���     sizeof(arr)
    //���Ի�ȡ�������ڴ��е��׵�ַ      cout<<arr<<endl;
    //����һ��Ԫ�ص�ַ                  cout<<&arr[0]

    //ð������
    //��������>��ǰ>�ţ���ѭ��>ÿ��>ÿ�˵�����Ԫ�������Ա�>�ĺ�
    int arr[]={2,1,7,6,5,8,9,4,0,3};
    int x=sizeof(arr)/sizeof(arr[0]);
    //
    for(int i=0;i<x;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    //
    for(int i=0;i<x-1;i++)     //Ԫ����-1
    {
        for(int j=0;j<x-i-1;j++)     //Ԫ����-����-1
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
