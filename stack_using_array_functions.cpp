#include<iostream>
using namespace std;
#define max 10
int stack[max];
int top=-1;
void push(int x)
{
    if(top>=max)
    {
        cout<<"overflow"<<endl;
        exit(1);
    }
    else{
        stack[++top]=x;
    }
}
int pop()
{
    if(top==-1)
    {
        return -1;
    }   
    else{
        return stack[top--];
    }
}
void view()
{
    if(top==-1)
    {
        cout<<"stack is empty"<<endl;
    }
    else{
    for(int i=0;i<=top;i++)
    {
        cout<<stack[i]<<endl;
    }
    }

}



int main()
{
    int c,x;
    while(1){
    cout<<"enter 1 for push 2 for pop 3 for view and 4 for exit"<<endl;
    cin>>c;
    if(c==1)
    {
        
        cout<<"enter the value of x"<<endl;
        cin>>x;
        push(x);
    }
    else if(c==2)
    {
        x=pop();
        if(x==-1)
        {
            cout<<"underflow"<<endl;
        }
        else{
            cout<<"element popped = "<<x<<endl;
        }
    
        
    }
    else if(c==3)
    {
        view();
    }
    } 
}