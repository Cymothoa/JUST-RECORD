#include<iostream>
using namespace std;
int main()
{
    //�žų˷���
    int i=0;
    int j=0;
    for(i=1;i<10;i++)//��
    {
        for(j=1;j<=i;j++)//��
            cout<<j<<"*"<<i<<"="<<i*j<<"  ";   //��*��
        cout<<endl;
    }
    system("pause");

    return 0;
}
