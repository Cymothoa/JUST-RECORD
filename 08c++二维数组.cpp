#include<iostream>
using namespace std;
#include<string>
int main()
{
    //��ά���鶨�巽ʽ
    //�������� ������[����][����];
    //�������� ������[����][����]={(data1,data2),(data3,data4)};
    /*int arr[2][3]=
    {
        {1,2,3},
        {4,5,6}
    };*/
    //�������� ������[][]={data1,data2};
    //�������� ������[][����]={data1,data2,data3};

    //��ά������
    //�鿴��ά������ռ�ռ�      ��cout<<sizeof(arr)<<endl;    һ��cout<<sizeof(arr[0])<<endl;
    //�鿴��ά�����׵�ַ      cout<<�׵�ַ<<arr<<endl;  cout<<��һ���׵�ַ<<arr[0]<<endl;     cout<<��һ��Ԫ���׵�ַ<<&arr[0][0]<<endl;

    //�ܷ�ͳ��
    int scores[3][3]=
    {
        {100,100,100},
        {90,50,100},
        {60,70,80}

    };
    string names[3]={"����","����","����"};
    for(int i=0;i<3;i++)
    {
        int sum=0;
        for(int j=0;j<3;j++)
        {
            sum+=scores[i][j];
        }
        cout<<names[i]<<"���ܷ�Ϊ��"<<sum<<endl;
    }
    system("pause");

    return 0;
}
