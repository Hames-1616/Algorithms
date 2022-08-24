#include<iostream>
using namespace std;
#define max 50
int stack[max];
int top=-1;
int isoperator(char a)
{
    if(a=='+' || a=='-' || a=='*' || a=='/')
    {
        return 1;
    }
    else{
        return 0;
    }
}
int evaluate(int x,int y,char c)
{
    if(c=='+')
    {
        return y+x;
    }
    else if(c=='*')
    {
        return y*x;
    }
    else if(c=='-')
    {
        return y-x;
    }
    else if(c=='/')
    {
        return y/x;
    }
}
void push(int x)
{
    stack[++top]=x;
}
int pop()
{
    return stack[top--];
}
int main()
{
    int i=0;
    char a[10];
    cout<<"enter the postfix notation"<<endl;
    cin>>a;
    while(a[i]!='\0')
    {
        if(!isoperator(a[i]))
        {
            push(a[i]-48);
        }
        else{
            int x,b,r;
            x=pop();
            b=pop();
            r=evaluate(x,b,a[i]);
            push(r);
        }
        i++;    
    }
    cout<<"Result = "<<pop();
    
}