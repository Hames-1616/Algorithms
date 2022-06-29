#include<iostream>
using namespace std;
void towerofhanoi(int n,char a,char b,char c)
{
    if(n==1)
    {
        cout<<"move disk 1 from "<<a<<" to "<<c<<endl;
    }
    else
    {
        towerofhanoi(n-1,a,c,b);
        cout<<"move disk "<<n<<" from "<<a<<" to "<<c<<endl;
        towerofhanoi(n-1,b,a,c);
    }
}

int main()
{
    int n;
    cout<<"enter the number of disks"<<endl;
    cin>>n;
    towerofhanoi(n,'A','B','C');
}


