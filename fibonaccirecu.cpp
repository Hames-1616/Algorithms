#include<iostream>
using namespace std;
int fib(int x)
{
    
    if(x==1||x==0)
    {
        return x;
    }
    else{
        return fib(x-1)+fib(x-2);
    }

}
int main()
{
    int x;
    cout<<"enter the value of n"<<endl;
    cin>>x;
    cout<<"printing elements"<<endl;
    for(int i=0;i<x;i++)
    {
    int v=fib(i);
    cout<<v<<endl;
    }
    }