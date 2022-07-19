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
        cout<<"enter the data";
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
    struct node *temp,*trav
}
int main(){
    char c;
    while(1)
    {
        cout<<"enter a for enterng b for inserting at after a node c for viewing d for exit"<<endl;
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
            break;
        }
    }
}
