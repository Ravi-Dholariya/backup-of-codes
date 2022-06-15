#include<iostream>
#include<bits/stdc++.h>
using namespace std;
struct Student
{
    char sid[9];
    double percentage;
    char choice1[3];
    char choice2[3];
    char choice3[3];
};
bool compare(Student a, Student b)
{
    if(a.percentage>b.percentage)
        return 1;
    else
        return 0;
}
int main()
{
    int noc,nos;
    cin>>noc>>nos;
    int clg[noc];
    Student stu[nos];
    for(int i=0;i<noc;i++)
    {
        cin>>clg[i];
    }
    for(int i=0;i<nos;i++)
    {
        cin>>stu[i].sid;
        cin>>stu[i].percentage;
        cin>>stu[i].choice1;
        cin>>stu[i].choice2;
        cin>>stu[i].choice3;
    }
    std::sort(stu,stu+nos,compare);
    for(int i=0;i<nos;i++)
    {
        int a= stu[i].choice1[2] -'0'- 1;
        int b=stu[i].choice2[2]-'0' - 1 ;
        int c=stu[i].choice3[2]-'0' - 1;
            if(clg[a]>0)
            {
                cout<<stu[i].sid<<" C-"<<a+1<<endl;
                clg[a]--;
            }
            else if(clg[b]>0)
            {
                cout<<stu[i].sid<<" C-"<<b+1<<endl;
                clg[b]--;
            }
            else if(clg[c]>0)
            {
                cout<<stu[i].sid<<" C-"<<c+1<<endl;
                clg[c]--;

            }
    }
}