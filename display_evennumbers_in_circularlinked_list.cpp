#include<iostream>
using namespace std;
struct node {
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
            head->next=head;
            tail=temp;
        }
        else
        {
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
         if(trav->data%2==0)
        {
            cout<<trav->data<<" ";
        }
         if(trav==tail)
        {
            break;
        }
       
        trav=trav->next;
        
    }
}

int main()
{
    int n;
    while(1)
    {
        cout<<"enter"<<endl<<"1 for creating"<<endl<<"2 for viewing "<<endl;
        cin>>n;
        if(n==1)
        {
            create();
        }
        if(n==2)
        {
            view();
        }
    }
}