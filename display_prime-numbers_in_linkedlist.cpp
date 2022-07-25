#include<iostream>
using namespace std;
struct node {
    int data;
    struct node *next;
};
struct node *head=NULL,*tail=NULL;

int prime(int x,int n)
{
    if(n==x)
    {
        return 0;
    }
    else if(n%x==0)
    {
       return 1;  
    }
    else{
        return prime(x+1,n);
    }
}
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
        if(prime(2,trav->data)==0)
    {
        cout<<trav->data<<" ";
    }
        trav=trav->next;
    }
}

int main()
{
    int n;
    while(1)
    {
        cout<<"enter"<<endl<<"1 for creating"<<endl<<"2 for viewing only prime numbers"<<endl;
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