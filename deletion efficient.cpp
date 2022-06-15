#include<iostream>
using namespace std;

int main()
{
    int a[]={1,2,3,2,4,2,8};
    int size=7,x=2;
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
    
    for(int i=0;i<n;i++)
    {
        
        cout<<b[i]<<endl;
    }
}
