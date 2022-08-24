#include<iostream>
#include<bits/stdc++.h>
#include<cmath>
using namespace std;
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
float evaluate(float x,float y,char c)
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
    else if(c=='%')
    {
        return fmod(y,x);
    }
    else if(c=='^')
    {
        return pow(y,x);
    }
   
}
int main()
{
    int i=0;
    char a[10];
    stack<float> stack;
    cout<<"enter the postfix notation"<<endl;
    cin>>a;
    while(a[i]!='\0')
    {
        if(!isoperator(a[i]))
        {
            stack.push(a[i]-48);
        }
        else{
            float x,b,r;
            x=stack.top();
            stack.pop();
            b=stack.top();
            stack.pop();
            r=evaluate(x,b,a[i]);
            stack.push(r);
        }
        i++;    
    }
    cout<<"Result = "<<stack.top();
    stack.pop();
    
}