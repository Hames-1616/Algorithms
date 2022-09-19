#include<iostream>
using namespace std;

void bubblesort(int a[] ,int x)
{
    int temp=0;
    for(int i=0;i<x-1;i++)
    {
        for(int j=0;j<x-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
}

int main()
{

    int arr[] = {10,4,1,5,2};
    int x = sizeof(arr)/sizeof(arr[0]);
    bubblesort(arr,x);
    for(int i=0;i<x;i++)
    {
        cout<<arr[i]<<" ";
    }
}