#include<iostream>
using namespace std;
struct node{
  int data;
  struct node *next;
};
struct node *head=NULL,*tail=NULL;
void create()
{
    struct node *temp;
    int n;
    cout<<"enter the number of nodes that you want to insert"<<endl;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        temp=(struct node *)malloc(sizeof(struct node));
        cout<<"enter the data "<<endl;
        cin>>temp->data;
        temp->next=NULL;
        if(head==NULL){
            head=temp;
            tail=temp;
        }
        else
        {
            tail->next=temp;
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
      cout<<(trav->data)<<endl;
      trav=trav->next;
  }
}
void insertafter()
{
    int value;
    struct node *trav,*temp;
    temp=(struct node *)malloc(sizeof(struct node));
    cout<<"enter the data"<<endl;
    cin>>temp->data;
    temp->next=NULL;
    trav=head;
    cout<<"enter the node after which u want to insert"<<endl;
    cin>>value;
    while(trav->data!=value)
    {
        trav=trav->next;
    }
    temp->next=trav->next;
    trav->next=temp;
    
}
void insertbefore()
{
    int value;
    struct node *temp,*trav,*ptr;
    cout<<"enter the data";
    temp = (struct node *)malloc(sizeof(struct node));
    cin>>temp->data;
    temp->next=NULL;
    trav=head;
    cout<<"enter the node before u want to insert"<<endl;
    cin>>value;
    while(trav->data!=value)
    {
        ptr = trav;
        trav=trav->next;
    }
    if(trav==head)
    {

    temp->next=trav;
    head = temp;
    }
    else
    {
       ptr->next=temp;
       temp->next=trav;
    }
}
void deleted()
{
    int n;
    cout<<"enter the element to be deleted"<<endl;
    cin>>n;
    struct node *trav,*temp;
    trav=head;
    if(head->data==n)
    {
        head = trav->next;
        trav->next=NULL;
        temp=trav;
        free(temp);

    }
    else if(tail->data==n)
    {
       while(trav->next->data!=n)
       {
        trav=trav->next;
       }
       temp=trav->next;
       trav->next=NULL;
       tail=trav;
       free(temp);
    }
    else{
    while(trav->next->data!=n)
    {
        trav=trav->next;
    }
    temp=trav->next;
    trav->next=trav->next->next;
    trav->next->next=NULL;
    free(temp);
    }
}
int main(){
    char c;
    while(1)
    {
        cout<<"enter"<<endl<<"a for entering data"<<endl<<"b for inserting after a node"<<endl<<"c for inserting before a node "<<endl<<"d for viewing "<<endl<<"e for deleting "<<endl<<"f for exiting"<<endl;
        cin>>c;
        if(c=='a')
        {
            create();
        }
        if(c=='b')
        {
            insertafter();
        }
        if(c=='c')
        {
            insertbefore();
        }
        if(c=='d')
        {
            view();
        }
        if(c=='e')
        {
            deleted();
        }
        if(c=='f')
        {
            break;
        }
    }
}
