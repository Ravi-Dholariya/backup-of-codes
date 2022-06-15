#include <bits/stdc++.h>
#include<iostream>
using namespace std;

struct Student
{
    string sid;
    string percentage;
    string choice1;
    string choice2;
    string choice3;
};

bool compare(Student a, Student b)
{
    if(a.percentage>b.percentage)
        return 1;
    else
        return 0;
}
int main(int argc, char const* argv[])
{
    int noc,nos;
    cin>>noc>>nos;
    int clg[noc];
    string clg_cutoff[noc];
    struct Student stu[nos];
    for(int i=0;i<noc;i++)
    {
        cin>>clg[i];
    }
    string data[nos];
    for (int i = 0; i < nos; i++)
    {
        cin>>data[i];
    }
    
    for(int i=0 ; i < nos; i++)
    {
        string a = data[i];
        stu[i].sid= a.substr(0,9);
        stu[i].percentage= {a.substr(10,5)};
        stu[i].choice1= {a.substr(16,3)};
        stu[i].choice2= {a.substr(20,3)};
        stu[i].choice3= {a.substr(24,3)};

    }
   
    std::sort(stu,stu+nos,compare);
    for(int i=0;i<nos;i++)
    {
        int a= stu[i].choice1[2] -'0'- 1;
        int b=stu[i].choice2[2]-'0' - 1 ;
        int c=stu[i].choice3[2]-'0' - 1;
            if(clg[a]>0)
            {
                clg_cutoff[a] = stu[i].percentage;
                clg[a]--;
            }
            else if(clg[b]>0)
            {
               clg_cutoff[b] = stu[i].percentage;
                clg[b]--;
            }
            else if(clg[c]>0)
            {
                clg_cutoff[c] = stu[i].percentage;
                clg[c]--;

            }
    }
      for (int i = 0; i < noc; i++)
    {
        // cout<<stu[i].sid<<"\t";
        // cout<<stu[i].percentage<<"\t";
        // cout<<stu[i].choice1<<"\t";
        // cout<<stu[i].choice2<<"\t";
        // cout<<stu[i].choice3<<endl;
        cout<<"C-"<<i<<" "<<clg_cutoff[i]<<endl;
    } 
	return 0;
}
