#include<iostream>
using namespace std;
#include<vector>
#include<math.h>

template <class t>
class all
{
    t a;
    public :
    void fnc()
    {
        cin>>a;
        cout<<a << "of all data type !\n";
    }
};
template <typename a>
void trial()
{
     all <string> a1;
    a1.fnc();
}
int main()
{
   trial();
    return 0;
}