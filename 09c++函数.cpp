#include<iostream>
using namespace std;

/*  ֵ����
    void swap(int num1,int num2)
    {
        cout<<"beforeswap:"<<endl;
        cout<<"num1="<<num1<<endl;
        cout<<"num2="<<num2<<endl;
        int temp=num1;
        num1=num2;
        num2=temp;
        cout<<"afterswap:"<<endl;
        cout<<"num1="<<num1<<endl;
        cout<<"num2="<<num2<<endl;
    }

int main()
{
    //ֵ���� ��������ʱʵ�λὫ��ֵ������β�
    //ֵ����ʱ ����βη����ı� ����Ӱ��ʵ��
    //�������Ҫ����ֵ ����ʱ����дvoid ���Բ�дreturn
    int a=10;
    int b=20;
    swap(a,b);
    cout<<"a="<<a<<endl;
    cout<<"b="<<b<<endl;

    system("pause");

    return 0;
}*/

//�����ķ��ļ���д
//1.����xxxx.hͷ�ļ�
//2.����xxxx.cppԴ�ļ�
//3.��ͷ�ļ���д����������   #include<iostream>  using namespace std;
//4.��Դ�ļ���д�����Ķ���    #include "swap.h"
//����������
void swap(int num1,int num2);
//�����Ķ���
void swap(int num1,int num2)
{
    cout<<"beforeswap:"<<endl;
    cout<<"num1="<<num1<<endl;
    cout<<"num2="<<num2<<endl;
    int temp=num1;
    num1=num2;
    num2=temp;
    cout<<"afterswap:"<<endl;
    cout<<"num1="<<num1<<endl;
    cout<<"num2="<<num2<<endl;
}

int main()
{
    int a=10;
    int b=20;
    swap(a,b);
    system("pause");

    return 0;
}
