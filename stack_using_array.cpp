#include<iostream>
#define max 100
using namespace std;
class stack
{
    private:
    int top;
    int s[max];

    public:
    stack()
    {
      top=-1;
    }
    void push(int x)
    {
        if(top>=max)
        {
            cout<<"Overflow";
            exit(1);
        }
        else
        {
            s[++top]=x;
        }
    }
    int pop()
    {
        if(top<=-1)
        {
            cout<<"Underflow";
            exit(1);
        }
        else{
            return s[top--];
            
        }
    }
    void view()
    {
        int i=0;
        while(i<=top)
        {
            cout<<s[i]<<endl;
            i++;
        }
    }

};

int main()
{
    stack s;
    while(1)
    {
        int c;
        cout<<"enter"<<endl<<"1 for push"<<endl<<"2 for pop"<<endl<<"3 for view"<<endl<<"4 for exit"<<endl;
        cin>>c;
        if(c==1)
        {
            int n;
            cout<<"enter the element to be inserted"<<endl;
            cin>>n;
            s.push(n);
        }
        if(c==2)
        {
            int x =s.pop();
            cout<<x<<endl;
        }
        if(c==3)
        {
            s.view();
        }
        if(c==4)
        {
            break;
        }
    }
}