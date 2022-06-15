#include<iostream>
using namespace std;
void efficient(int a[],int s)
{
    int c[s];
    for(int i=0;i<s;i++)
    {
        c[i]=a[i];
        cout<<c[i]<<endl;
    }
}

int main()
{
    int size;
    cout<<"enter the number of elements that you want to enter"<<endl;
    cin>>size;
    int a[size];
    for(int i=0;i<size;i++)
    {
        cin>>a[i];
    }
    cout<<endl<<"enter the element that you want to delete"<<endl;
    int x;
    cin>>x;
    int j=0,n=0,b[n];
    for(int i=0;i<size;i++)
    {
        if(a[i]!=x)
        {
            b[j]=a[i];
            
            j++;
            n++;
        }
        
    }
    efficient(b,n); 
}
