#include<iostream>
using namespace std;
#define max 5
int queue[max];
int front = 0 , rear =-1 ,count = 0;
void enqueue(int x)
{
    if(rear==max-1)
    {
        cout<<"overflow"<<endl;
    }
    else{
        if(count == max)
        {
            cout<<"overflow"<<endl;
        }
        else{
            rear = (rear++)%(max-1);
            queue[rear] = x;
            count ++;
        }
    }
}
int dequeue()
{
    if(count == 0)
    {
        cout<<"underflow"<<endl;
    }
    else{
        int x = queue[front];
        front = (front++)%(max-1);
        return x;
    }
}
void view()
{
   int j=front;
    if(count == 0)
    {
        cout<<"empty"<<endl;
    }
    else
     {
       for(int i=0;i<count;i++)
       {
        cout<<queue[j];
        j=(j++)%(max-1);
       }  
     }
}
int main()
{
    int ch;
    while(1)
    {
        cout<<"enter 1 for enqueue , 2 for dequeue , 3 for view "<<endl;
        cin>>ch;
        if(ch==1)
        {
            int x;
            cout<<"enter the number to be inserted"<<endl;
            cin>>x;
            enqueue(x);
        }
        if(ch==2)
        {
            dequeue();
        }
        if(ch==3)
        {
            view();
        }
        if(ch==0)
        {
            break;
        }
    }
}