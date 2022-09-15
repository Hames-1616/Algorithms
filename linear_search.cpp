#include<iostream>
using namespace std;

int main()
{
 int x;
 cout<<"enter the number of elements that you want to enter"<<endl;
 cin>>x;
 int a[x];
 for(int i=0;i<x;i++)
 {
    cout<<"enter element "<<i<<endl;
    cin>>a[i];
 }   

 cout<<"enter the element to be searched"<<endl;
 int y;
 cin>>y;
 int f=0;
 for(int i=0;i<x;i++)
 {
    if(a[i]==y)
    {
        cout<<"element found at place "<<i<<endl;
        f=1;
        break;
    }
 }
 if(f==0)
 {
    cout<<"element not found"<<endl;
 }
}