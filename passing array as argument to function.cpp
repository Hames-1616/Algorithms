#include<iostream>
using namespace std;
void disp(int b[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<b[i]<<endl;
    }
}
int main()
{
    int x;
    cout<<"enter the number of elements that you want to enter"<<endl;
    cin>>x;
    int arr[x];
    cout<<"enter the elements"<<endl;
    for(int i=0;i<x;i++)
    {
        cin>>arr[i];
    }
    disp(arr,x);
}