#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"value of a ="<<endl;
    cin>>a;
    cout<<"value of b ="<<endl;
    cin>>b;
    a=a^b;
    b=a^b;
    a=a^b;
    cout<<"swap values: a="<<a<<"b="<<b<<endl;
}