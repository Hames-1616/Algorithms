#include<iostream>
using namespace std;
int main()
{
    int n,x;
    int arr[n];
    cout<<"Enter the number of elements you want to enter"<<endl;
    cin>>n;
    cout<<"enter the elements"<<endl;
    for(int i =0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the element that you want to remove "<<endl;
    cin>>x;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==x)
        {
            cout<<"element found"<<endl;
            for(i;i<n;i++)
            {
                arr[i]=arr[i+1];
            }
            break;
        }
        else
        {
            cout<<"element not found"<<endl;
        }
    }
    n=n-1;
    cout<<"printing elements"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    }
}