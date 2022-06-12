#include<iostream>
using namespace std;
void scan_array(int a[],int x)
{
    cout<<"enter the elements"<<endl;
    for(int i=0;i<x;i++)
    {
        cin>>a[i];
    }
}
void disp_array(int a[],int x)
{
    cout<<"printing elements"<<endl;
    for(int i=0;i<x;i++)
    {
        cout<<a[i]<<endl;
    }
}
void sum_array(int a[],int x)
{
    int n=0;
  for(int i=0;i<x;i++)
  {
    n = n + a[i];
  }
  cout<<"Sum of elements = "<<n<<endl;
}
void product_array(int a[],int x)
{
    int n=1;
    for(int i=0;i<x;i++)
    {
        n=n*a[i];
    }
    cout<<"product of elements = "<<n<<endl;

}
int main()
{
    int x;
    cout<<"enter the number of elements that you want to enter"<<endl;
    cin>>x;
    int a[x];
    scan_array(a,x);
    disp_array(a,x);
    sum_array(a,x);
    product_array(a,x);
}