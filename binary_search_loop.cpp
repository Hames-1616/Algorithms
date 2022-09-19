#include<iostream>

using namespace std;
int bs(int a[],int low,int high,int item,int x)
{
    for(int i=0;i<x;i++)
    {
        int middle = (low+high)/2;
        if(a[i]==item)
        {
            return 1;
        }
        else if(a[middle] > item)
        {
            high = middle - 1;
        }
        else if(a[middle] < item)
        {
            low = middle + 1;
        }
    }
}
int main()
{
    cout<<"enter the number of elements to be entered"<<endl;
    int x;
    cin>>x;
    int a[x];
    
    for(int i=0;i<x;i++)
    {
        cin>>a[i];
    }
    int y;
    cout<<"enter the number to be searched"<<endl;
    cin>>y;
    int p = bs(a,0,x-1,y,x);
    if(p==1)
    {
        cout<<"Number found"<<endl;
    }
    else{
        cout<<"Number not found"<<endl;
    }
}