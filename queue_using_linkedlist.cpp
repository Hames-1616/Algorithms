#include<iostream>
using namespace std;
struct node {
    int data;
    struct node *next;
};
struct node *front=NULL,*rear=NULL;
void enqueue(int x)
{
    struct node *temp;
    temp=(struct node *)malloc(sizeof(struct node));
    temp->data=x;
    temp->next=NULL;
    if(front==NULL&&rear==NULL)
    {
        rear= temp;
        front=temp;
    }
    else{
        rear->next=temp;
        rear=temp;
    }
}
int dequeue()
{
    struct node *temp;
    temp=front;
    if(front==NULL)
    {
        return -1;
    }
    else{
        int x = temp->data;
        temp=front;
        front=front->next;
        free(temp);
        return x;
    }
}
void view()
{
    struct node *trav;
    trav=front;
    if(front ==NULL)
    {

        cout<<"empty"<<endl;
    }
    else{
    while(trav!=NULL)
    {
      cout<<trav->data<<endl;
      trav=trav->next;
    }
    }
}
int main()
{
  int ch,x;
  while(1)
  {
    cout<<"enter 1 for enqueue 2 for dequeue 3 for view and 0 for exit"<<endl;
    cin>>ch;
    if(ch==1)
    {
        cout<<"enter the element"<<endl;
        cin>>x;
        enqueue(x);
    }
    if(ch==2)
    {
        x=dequeue();
        if(x==-1)
        {
            cout<<"underflow";
        }
        else{
            cout<<x;
        }
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