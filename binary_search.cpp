#include<iostream>
using namespace std;
int bs(int a[],int lb,int ub,int x)
{
    int mid = (lb+ub)/2;
    if(lb<=ub)
    {
        if(x<a[mid])
        {
            bs(a,lb,mid-1,x);
        }
        else if(x>a[mid])
        {
            bs(a,mid-1,ub,x);
        }
        else{
            return mid;
        }
    }
    else{
        return -1;
    }
}
int main()
{
    int n;
    cout<<"enter the number of elements that you want to enter"<<endl;
    cin>>n;
    int a[n];
    cout<<"enter the elements"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<"enter element "<<i<<endl;
        cin>>a[i];
    }
    int x;
    cout<<"enter the element to be searched"<<endl;
    cin>>x;
    int s = bs(a,0,n-1,x);
    if(s==-1)
    {
        cout<<"not found"<<endl;
    }
    else{
        cout<<"element found"<<endl;
    }
}