#include<iostream>
using namespace std;
int main()
{
    //break
    //swtich��� �ս�case������switch
    //ѭ������˳���ǰѭ��
    //Ƕ��ѭ�� ����������ڲ�ѭ�����

    //continue
    //��ѭ������� ����ʣ��δִ�е���� ����ִ����һ��ѭ��
    /*for(int i=0;i<100;i++)
    {
        //������� �����ż��
        if(i%2==0)
            continue;
        cout<<i<<endl;
    }*/

    //goto
    //��������ת���

    cout<<"1....."<<endl;
    cout<<"2....."<<endl;
    goto flag;
    cout<<"3....."<<endl;
    cout<<"4....."<<endl;
    flag:      //���"flag"������ð�ţ�
    cout<<"5....."<<endl;
    system("pause");

    return 0;
}
