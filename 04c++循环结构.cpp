#include<iostream>
using namespace std;
int main()
{
    /*
    //������
    int num=rand()%4+1;
    cout<<"������²����֣�"<<endl;
    int in=0;
    int flag=1;
    while(flag)
    {
        cin>>in;
        if(in>num)
            cout<<"�´��� ������"<<endl;
        else if(in<num)
            cout<<"��С�� ������"<<endl;
        else
            {
                cout<<"��ϲ��¶���"<<endl;
                flag=0;
            }
    }
    */

    //����
    int a=0;
    int b=0;
    int i=0;
    for(i=1;i<=100;i++)
    {
        a=i%10;
        b=i/10;
        if(i==7)
            cout<<"������"<<endl;
        else if(a==7||b==7||i%7==0)
            cout<<"������"<<endl;
        else
            cout<<i<<endl;
    }
    system("pause");

    return 0;
}
