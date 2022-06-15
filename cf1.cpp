#include <iostream>
using namespace std;
#include <fstream>
int main()
{
    // FILE* fp;

    ofstream wrt;
    ifstream read;
    wrt.open("abc.txt",ios::app);
    read.open("abc.txt",ios::in);

    string line;
    int price;

    cout << "Enter Line : ";
    getline(cin,line);
    cout <<"Enter Price :";
    cin >> price;
    
    wrt << line <<endl;
    wrt << price <<endl ;
    
    int n = wrt.tellp();
    cout<<n<<endl;
    read.seekg(n);
    // wrt << "hi\n";
    read>>price;
    int n1 = wrt.tellp();
    cout<<n1<<endl;
    getline(read,line);
    int n2 = wrt.tellp();
    cout<<n2<<endl;
    
    cout << line <<" : "<< price <<endl; 
    
    read.close();
    wrt.close();
    
    return 0;
}