#include<iostream>
using namespace std;
void lowercasetouppercase(string str,int x)
{
   for(int i=0;i<x;i++)
   {
     if(str[i]>='a'&&str[i]<='z')
     {
        str[i]=str[i]-32;
     }
   }
   cout<<"uppercase string : "<<str<<endl;
}
string reversestring(string str,int x)
{
   for(int i=0;i<x/2;i++)
   {
     char temp=str[i];
     str[i]=str[x-i-1];
     str[x-i-1]=temp;
   }
   cout<<"reversed string : "<<str<<endl;
   return str;
}
int stringlength(string s)
{
    int i=0;
    while(s[i]!='\0')
    {
        i++;
    }
    cout<<"length of string = "<<i<<endl;
    return i;
}
void palindromestring(string x,string y)
{
    if(x==y)
    {
        cout<<"string is palindrome"<<endl;
    }
    else{
        cout<<"string is not plaindrome"<<endl;
    }
}
void findsubstring
int main()
{
    int i;
    cout<<"enter the string"<<endl;
    string g;
    cin>>g;
    i=stringlength(g);
    lowercasetouppercase(g,i);
   string rev = reversestring(g,i);
   palindromestring(g,rev);
}