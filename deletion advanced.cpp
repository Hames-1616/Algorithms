#include<iostream>
using namespace std;

int main
{
    int a[]={1,2,3,2,4,2};
    int size=6,x=2,n;
    int b[n];
    for(int i=0;i<size;i++)
    {
        if(a[i]==x)
        {
            int j;
            b[j]=a[i];
            j++;
        }
    }
    for(int i=0;i<size;i++)
    {
        
        cout<<a[i]<<endl;
    }
}