#include<iostream>
#include<vector>
using namespace std;
template <typename T>
T large(T n1,T n2)
{
    return (n1>=n2)? n1 : n2;
}
void main()
{
    // int arr[5] = {2,-7,8,-1,20};
    int n;
    cin>>n;
    int arr[5];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int i = 0,j= n-1;
    int sum_i=0,sum_c=0;
    for (int k = 0; k < n; k++)
    {
            if(i<=j)
            {
                int n1 = large(arr[i],arr[j]);
                if(n1==arr[i])
                {
                    do{
                        if(k%2==0)
                        sum_i+=arr[i];
                        else
                        sum_c+=arr[i];
                        i++;}
                    while(arr[i]>0 && arr[i-1]>0);
                }
                else
                {
                    do{
                        
                        if(k%2==0)
                        sum_i+=arr[j];
                        else
                        sum_c+=arr[j];
                        j--;}
                    while(arr[j]>0 && arr[j+1]>0);
                }
            }
        
    }
    cout<<sum_i-sum_c;
}