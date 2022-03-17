#include<iostream>

using namespace std;

#include<string>

#include<ctime>

struct student
{
    string name;
    int score;
};

struct teacher
{
    string name;
    struct student s[5];
};

void allocate(struct teacher t[],int len)
{
    string nameSeed="ABCDE";
    for(int i=0;i<len;i++)
    {
        t[i].name="teacher_";
        t[i].name+=nameSeed[i];
        for(int j=0;j<5;j++)
        {
            t[i].s[j].name="student_";
            t[i].s[j].name+=nameSeed[j];
            int random=rand()%41+60;//�ɼ�ȡ�����
            t[i].s[j].score=random;
        }
    }
}

void print(struct teacher t[],int len)
{
    for(int i=0;i<len;i++)
    {
        cout<<"��ʦ��"<<t[i].name<<endl;
        for(int j=0;j<5;j++)
        {
            cout<<"\tѧ����"<<t[i].s[j].name<<" ����:"<<t[i].s[j].score<<endl;
        }
    }
}
int main()
{
    //3��ʦ ÿ����ʦ��5ѧ�� ѧ���������ͷ���
    //���������
    srand((unsigned int)time(NULL));
    //1.������ʦѧ���ṹ��
    teacher t[3];
    int len=sizeof(t)/sizeof(t[0]);
    //2.����ʦѧ����ֵ
    allocate(t,len);
    //3.��ӡ����
    print(t,len);
    system("pause");

    return 0;
}
