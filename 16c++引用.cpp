#include<iostream>

using namespace std;

#include<string>

void swap(int &a,int &b)
{
    int temp=a;
    a=b;
    b=temp;
}

int& test01()
{
    int a=10;//�ֲ���������������е�ջ��
    return a;
}

int& test02()
{
    static int a=10;
    return a;
}

void show(const int &val)
{
    // val=1000; ��const�󱨴�
    cout<<"val="<<val<<endl;
}
int main()
{
    //����
    //���ã������������
    //�﷨���������� &����=ԭ��
    //ע�����
    //�����ñ����ʼ��   int &b;(���� Ҫ��ʼ��)
    //�������ڳ�ʼ���� �����Ըı�(����)
    /*int a=10;
    int &b=a;
    int c=20;
    b=c;  //�Ǹ�ֵ b�����ٳ�Ϊc�ı���
    cout<<"a="<<a<<endl;
    cout<<"b="<<b<<endl;
    cout<<"c="<<c<<endl;*/

    //��������������
    //���ã���������ʱ �����������õļ������β�����ʵ��
    //�ŵ㣺���Լ�ָ���޸�ʵ��
    /*int a=20;
    int b=10;
    swap(a,b);
    cout<<"a="<<a<<endl;
    cout<<"b="<<b<<endl;//���ô��� �βλ�����ʵ��*/

    //�����������ķ���ֵ
    //���ã������ǿ�����Ϊ�����ķ���ֵ���ڵ�
    //ע�⣺��Ҫ���ؾֲ���������
    /*int &ref=test01();
    cout<<"ref="<<ref<<endl;//��һ����ȷϵͳ���� �ڶ��δ��� �ڴ����ͷ�*/
    //�÷�������������Ϊ��ֵ
    int &ref=test02();
    cout<<"ref="<<ref<<endl;
    test02()=1000; //��������ķ���ֵ������ ����������ÿ�����Ϊ��ֵ
    cout<<"ref="<<ref<<endl;

    //���õı���
    //���ʣ����õı�����c++�ڲ�ʵ����һ��ָ�볣��

    //��������
    //���ã�����������Ҫ���������β� ��ֹ�����
    //int &a=10;//���� ���ñ�����һ��Ϸ����ڴ�ռ�
    const int & ref2=10;//����const֮���Ϊֻ�� �������޸�
    //�ں����β��б��� ���Լ�const�����β� ��ֹ�βθı�ʵ��
    int a=100;
    show(a);
    system("pause");

    return 0;
}
