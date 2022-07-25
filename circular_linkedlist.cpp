#include<iostream>
using namespace std;
struct node 
{
    int data;
    struct node *next;
};
struct node *head=NULL,*tail=NULL;

void create()
{
    struct node *temp;
    int n;
    cout<<"enter the number of nodes that you want to enter"<<endl;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        temp=(struct node *)malloc(sizeof(struct node));
        cout<<"enter the data"<<endl;
        cin>>temp->data;
        temp->next=NULL;
        if(head==NULL)
        {
            head=temp;
            head->next=head;//for making it circular
            tail=temp;
        }
        else{
            tail->next=temp;
            tail=temp;
            tail->next=head;
        }
    }
}
void view()
{
    struct node *trav;
    trav=head;
    while(1)
    {
        cout<<trav->data<<endl;
        if(trav==tail)
        {
            break;
        }
        else{
            trav=trav->next;
        }
    }
}
void insertafter()
{
    struct node *trav,*temp;
    temp=(struct node *)malloc(sizeof(struct node *));
    int n;
    cout<<"enter the node after u want to insert"<<endl;
    cin>>n;
    trav=head;
    while(trav->data!=n)
    {
        trav=trav->next;
    }
    cout<<"enter the data that you want to enter"<<endl;
    cin>>temp->data;
    temp->next=trav->next;
    trav->next=temp;
    if(trav==tail)
    {
        tail=trav->next;
    }

}
void deleted()
{
    struct node *temp,*trav;
    int n;
    cout<<"enter the node to be deleted"<<endl;
    cin>>n;
    trav=head;
    while(trav->next->data!=n)
    {
        trav=trav->next;
    }
    if(trav->next==tail)
    {
        temp=trav->next;
        trav->next=trav->next->next;
        trav->next->next->next=NULL;
        free(temp);
        tail=trav;
    }
    else if(head->data==n)
    {
        temp=head;
        head=head->next;
        tail->next->next=NULL;
        tail->next=head;
    }
    else{
        temp=trav->next;
        trav->next=trav->next->next;
        trav->next->next=NULL;
        free(temp);
    }

}
int main()
{
    int n;
    while(1)
    {
        cout<<"enter the choice "<<endl<<"1 for creation"<<endl<<"2 for viewing"<<endl<<"3 for insertion after a node "<<endl<<"4 for deletion"<<endl<<"5 for exit"<<endl;
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
            insertafter();
        }
        if(n==4)
        {
            deleted();
        }
        if(n==5)
        {
            break;
        }
        
        
    }
}