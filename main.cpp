#include <iostream>

using namespace std;

void swap(int *p1,int *p2)
{
    int temp=*p1;
    *p1=*p2;
    *p2=temp;
}

//ð�������� ����1 ������׵�ַ ����2 ���鳤��
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

//��ӡ����
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
    //1.����һ��ָ��
    int a=10;
    //ָ�붨����﷨����������*ָ�������;
    int *p;
    //��ָ���¼����a�ĵ�ַ;
    p=&a;
    cout<<"a�ĵ�ַΪ:"<<&a<<endl;
    cout<<"ָ��pΪ:"<<p<<endl;

    //2.ʹ��ָ��
    //����ͨ�������õķ�ʽ���ҵ�ָ��ָ����ڴ�
    //ָ��ǰ��*���������ã��ҵ�ָ��ָ����ڴ��е���ֵ
    *p=1000;
    cout<<"a="<<a<<endl;
    cout<<"*p="<<*p<<endl;
    */
    //-------------------------------------------------------------------------------------------------
    //��ָ�룺ָ�����ָ���ڴ��б��Ϊ0�Ŀռ�
    //��;����ʼ��ָ�����
    //int *p=NULL;
    //ע�⣺��ָ��ָ����ڴ��ǲ����Է��ʵ�  eg:*p=100; ---->���� 0-255ϵͳռ�� �����Է��ʣ�

    //Ұָ�룺ָ�������ָ��Ƿ����ڴ�ռ�
    //int *p=(int*)0x1100;
    //cout<<*p<<endl;  --->����    �ڳ����о�������Ұָ��
    //------------------------------------------------------------------------------------------------
    //const����ָ��
    //int a=10;
    //int b=10;
    //int *p=&a;
    //1.const����ָ��--����(const)ָ��(*)       �ص㣺ָ���ָ������޸� ����ָ��ָ���ֵ�����޸�
    //const int *p=&a;          *p=20;(����)     p=&b;(��ȷ)
    //2.const���γ���--ָ�볣��       �ص㣺ָ���ָ�����޸� ����ָ��ָ���ֵ�����޸�
    //int * const p=&a;         *p=20;(��ȷ)     p=&b;(����)
    //3.const������ָ�� �����γ���    �ص㣺ָ���ָ���ָ���ֵ�����ܸ�
    //const int * const p=&a    *p=20;(����)     p=&b;(����)
    //-------------------------------------------------------------------------------
    //ָ�������
    //����ָ����������е�Ԫ��
    /*
    int arr[10]={0,1,2,3,4,5,6,7,8,9};
    cout<<"��һ��Ԫ��Ϊ��"<<arr[0]<<endl;
    int *p=arr;       //arr���������׵�ַ
    cout<<"����ָ����ʵ�һ��Ԫ�أ�"<<*p<<endl;
    p++;      //��ָ�����ƫ��4���ֽڣ���������int-->4���ֽڣ�
    cout<<"����ָ����ʵڶ���Ԫ�أ�"<<*p<<endl;
    cout<<"����ָ���������"<<endl;
    int *p2=arr;
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++)
    {
        cout<<"��"<<i+1<<"��Ԫ��Ϊ��"<<*p2<<endl;
        p2++;
    }
    */
    //-------------------------------------------------------------
    //ָ��ͺ���
    //1.ֵ����   int a=0; int b=10; swap(a,b);--->a b�������ı�
    //2.��ַ����
    /*int a=10;
    int b=20;
    swap(&a,&b);
    cout<<"a="<<a<<endl;
    cout<<"b="<<b<<endl;*/
    //---------------------------------------
    //��װһ������ ����ð������ ʵ�ֶ������������������
    //1.��������
    int arr[10]={4,3,6,9,1,2,10,8,7,5};
    //���鳤��
    int len=sizeof(arr)/sizeof(arr[0]);
    //2.�������� ʵ��ð������
    bubble(arr,len);
    //3.��ӡ����������
    print(arr,len);
    system("pause");

    return 0;
}