#include<iostream>
using namespace std;
void insertion_sort(int a[] ,int x)
{
    for(int i=0;i<x;i++)
    {
        int temp = a[i];
        int j=i-1;
        while(j>=0 && a[j] > temp)
        {
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = temp;

    }
}
int main()
{
    cout<<"enter the number of elements that you want to enter"<<endl;
    int x;
    cin>>x;
    int a[x];
    for(int i=0;i<x;i++)
    {
        cin>>a[i];
    }
    insertion_sort(a,x);
    for(int i=0;i<x;i++)
    {
        cout<<a[i]<<" ";
    }
}