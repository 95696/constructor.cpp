#include<iostream>
#include<conio.h>
class student
{
    int e,m,p,tot,per,grade;
public:
    void setput(int e1, int m1, int p)
    {
        e=e1;
        m=m1;
        this->p=p;
    }
    void process()
    {
        tot=e+m+p;
        //cout<<"total="<<tot;
    per=tot*100/300;
    //cout<<"percentage"<<per;
    //grade=(per>90?per>80?per>70?per>60>?d:e:per<70?c:per<80?b:a);
    //cout<<"grade="<<grade;
    }
    int getput1()
    {
        return(tot);
    }
    int getput2()
    {
        return(per);
    }
    //int getput3()
    //{
        //return(grade);
    //}
};
int main()
{
    student b;
    b.setput(80,80,80);
    b.process();
    b.getput1();
    //cout<<"total";
    b.getput2();
    //dcout<<"percentage";
   // b.getput3();
    //cout<<"grade";
    return 0;
}
