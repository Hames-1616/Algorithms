#include<iostream>
using namespace std;
void Scan_array(int a[],int x)
{
    cout<<"enter the elements"<<endl;
    for(int i=0;i<x;i++)
    {
        cin>>a[i];
    }
}
int main()
{
    cout<<"enter the elements that you want to insert"<<endl;
    int x;
    cin>>x;
    int z=x+1;
    int a[z];
    Scan_array(a,x);
    int index,item;
    cout<<"enter the position were you want to insert element"<<endl;
    cin>>index;
    cout<<"enter the element that you want to insert "<<endl;
    cin>>item;
    for(int i=x;i>index;i--)
    {
        a[i]=a[i-1];
    }
    a[index]=item;
    for(int i=0;i<z;i++)
    {
        cout<<a[i];
    }

}