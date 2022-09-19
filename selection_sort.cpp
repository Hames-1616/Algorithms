#include<iostream>
using namespace std;

int main()
{
    int a[] = {10,5,22,1,7,8};
    int n = sizeof(a)/sizeof(a[0]);
    int min;
    for(int i=0;i<n-1;i++)
    {
        min = i;
        for(int j=i+1;j<n;j++)
        {
            if(a[j]<a[min])
            {
                min = j;
            }
            
        }
        if(min!=i)
        {
            int temp = a[min];
            a[min] = a[i];
            a[i] = temp;
        }
    }



    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}