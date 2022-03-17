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
            int random=rand()%41+60;//成绩取随机数
            t[i].s[j].score=random;
        }
    }
}

void print(struct teacher t[],int len)
{
    for(int i=0;i<len;i++)
    {
        cout<<"老师："<<t[i].name<<endl;
        for(int j=0;j<5;j++)
        {
            cout<<"\t学生："<<t[i].s[j].name<<" 分数:"<<t[i].s[j].score<<endl;
        }
    }
}
int main()
{
    //3老师 每个老师带5学生 学生有姓名和分数
    //随机数种子
    srand((unsigned int)time(NULL));
    //1.创建老师学生结构体
    teacher t[3];
    int len=sizeof(t)/sizeof(t[0]);
    //2.给老师学生赋值
    allocate(t,len);
    //3.打印数据
    print(t,len);
    system("pause");

    return 0;
}
