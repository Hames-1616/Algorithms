#include<iostream>
using namespace std;
struct node
{
    int data;
    struct node *next;
};
struct node *head = NULL , *tail=NULL;
void create()
{
    int n;
    struct node *temp;
    cout<<"enter the number of nodes that you want to enter"<<endl;
    cin>>n;
    for(int i=0;i<=n;i++)
    {
        temp = (struct node *)malloc(sizeof(struct node));
        cout<<"enter data"<<endl;
        cin>>(temp->data);
        temp->next=NULL;
        if(head==NULL)
        {
            head=temp;
            tail=temp;
        }
        else{
            tail->next = temp;
            tail= temp;
        }

    }   
}
void view()
{
    struct node *trav;
    trav = head;
    while(trav!=NULL)
    {
        cout<<(trav->data);
        trav = trav->next;
    }
}
int main()
{
    int ch;
    while(1)
    {
        cout<<"enter 1 for create and 2 for view and 3 for exit "<<endl;
        cin>>ch;
        if(ch==1)
        {
            create();
        }
        if(ch==2)
        {
            view();
        }
        if(ch==3)
        {
            break;
        }
    }
}