#include<iostream>
#include<vector>
using namespace std;
template <typename T>
T large(T n1,T n2)
{
    return (n1>n2)? n1 : n2;
}
int main()
{
    int a,b;
    cout<<"Enter a and b : ";
    cin>>a>>b;
    cout<<large(a,b)<<endl;
    return 0;
}