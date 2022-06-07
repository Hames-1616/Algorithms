#include<iostream>
using namespace std;
int main()
{
    int x;
    int arr[8];
    cout<<"Enter the elements"<<endl;
    for(int i=0;i<8;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the element you want to delete"<<endl;
    cin>>x;
    for(int i=0;i<8;i++)
    {
        if(arr[i]==x)
        {
            arr[i]=-1;
            break;
        }
        else
        {
            cout<<"Element not found"<<endl;
        }
    }
    cout<<endl;
    for(int i=0;i<8;i++)
    {
        if(arr[i]!=-1)
        {
            cout<<arr[i]<<endl;
        }
    }
}
