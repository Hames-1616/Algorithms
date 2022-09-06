#include<iostream>
using namespace std;
#define max 5
int queue[max];
int front=-1,rear=-1;

void enqueue(int x)
{
    if(rear==max-1)
    {
        cout<<"overflow"<<endl;
    }
    else{
        if(front==-1)
        {
            front=0;
        }
        rear++;
        queue[rear] = x;
    }
}
int dequeue()
{
  if(front==-1 || front > rear)
  {
    return -1;
  }
  else{
    return queue[front++];
  }

}
void view()
{
    if(front==-1) 
    {
        cout<<"empty"<<endl;
    }
    else{
        for(int i=front;i<=rear;i++)
        {
            cout<<queue[i]<<endl;
        }
    }

}

int main()
{
    int c;
    while(1)
    {
        cout<<"enter 1 for enqueue 2 for dequeue 3 for view"<<endl;
        cin>>c;
        if(c==1)
        {
            cout<<"enter the element to be inserted"<<endl;
            int x;
            cin>>x;
            enqueue(x);
        }
        else if(c==2)
        {
            int x = dequeue();
            if(x==-1)
            {
                cout<<"underflow"<<endl;
            }
            else{
                cout<<x;
            }
        }
        else if(c==3)
        {
            view();
        }
        else
        {
            break;
        }
    }
}