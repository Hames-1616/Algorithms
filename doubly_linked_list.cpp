#include<iostream>
using namespace std;
struct node
{
    struct node *prev;
    int data;
    struct node *next;
};
struct node *head=NULL,*tail=NULL;
void create()
{
    struct node *temp;
    cout<<"enter the number of nodes that you want to make"<<endl;
    int x;
    cin>>x;
    for(int i=0;i<x;i++)
    {
        temp=(struct node *)malloc(sizeof(struct node));
        cout<<"enter the data"<<endl;
        cin>>temp->data;
        temp->prev=NULL;
        temp->next=NULL;
        if(head==NULL)
        {
            head=temp;
            tail=temp;
        }
        else{
            tail->next=temp;
            temp->prev=tail;
            tail=temp;
        }

    }
}
void view()
{
    struct node *trav;
    trav=head;
    while(trav!=NULL)
    {
        cout<<trav->data<<endl;
        trav=trav->next;
    }
}
void insert()
{
    struct node *trav,*temp;
    temp = (struct node *)malloc(sizeof(struct node));
    trav=head;
    cout<<"1 for inserting before a node , 2 for inserting after a given node"<<endl;
    int x;
    cin>>x;
    if(x==1)
    {
        cout<<"enter the data"<<endl;
        cin>>temp->data;
        int n;
        cout<<"enter the node data before you want to insert"<<endl;
        cin>>n;
        if(head->data==n)
        {
           temp->next=head;
           head->prev = temp;
           head = temp;
        }
        else{
            while(trav->data!=n)
            {
                trav=trav->next;
            }
            temp->prev=trav->prev->next;
            trav->prev->next=temp;
            temp->next=trav;
            trav->prev=temp;
        }
    }
    else if(x==2)
    {
        cout<<"enter the data to be inserted"<<endl;
        cin>>temp->data;
       cout<<"enter the node data after you want to insert"<<endl;
       int n;
       cin>>n;
       if(tail->data==n)
       {
          tail->next=temp;
          temp->prev= tail;
          tail=temp;
       }
       else{
             while(trav->data!=n)
             {
                trav=trav->next;
             }
             temp->prev=trav;
             temp->next=trav->next;
             trav->next->prev=temp;
             trav->next=temp;

       }
    }
    else{
        cout<<"wrong input"<<endl;
    }
}
void deleted()
{
    struct node *trav , *temp;
    cout<<"enter the node to deleted"<<endl;
    int n;
    cin>>n;
}
int main()
{
    int n;
    while(1)
    {
        cout<<"enter 0 for exit , enter 1 for creation , 2 for viewing , 3 for inserting , 4 for deleting "<<endl;
        cin>>n;
        if(n==1)
        {
            create();
        }
        if(n==2)
        {
            view();
        }
        if(n==3)
        {
            insert();
        }
        if(n==4)
        {
            deleted();
        }
        if(n==0)
        {
            break;
        }
    }
}