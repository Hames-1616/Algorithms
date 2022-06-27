#include<iostream>
using namespace std;
void binary(int x)
{
     if(x==0)
    {
        cout<<0;
    }
    else if(x==1)
    {
      cout<<1;
    }
    else
    {
        binary(x/2);
        cout<<x%2;
    }
}
void octal(int x)
{
    if(x==0)
    {
        cout<<0;
    }
    else if(x==1)
    {
      cout<<1;
    }
    else
    {
        octal(x/8);
        cout<<x%8;
    }
}


int main()
{
    int x;
    cout<<"enter the decimal number"<<endl;
    cin>>x;
    binary(x);
    octal(x);
}