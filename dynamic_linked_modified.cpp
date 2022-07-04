#include<iostream>
using namespace std;
struct node{
    char name[20];
    int roll;
    float marks;
    struct node *next;
};
struct node *head=NULL,*tail=NULL;
void create()
{
    int n;
    struct node *Temp;
    cout<<"enter the  number of nodes"<<endl;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        Temp = (struct node *)malloc(sizeof(struct node));
        cout<<"enter the name"<<endl;
        cin>>(Temp->name);
        cout<<"enter the roll no"<<endl;
        cin>>(Temp->roll);
        cout<<"enter the marks"<<endl;
        cin>>(Temp->marks);
        if(head==NULL)
        {
            head = Temp;
            tail = Temp;
        }
        else{
            tail->next=Temp;
            tail=Temp;
        }
    }
}
void view()
{
    struct node *trav;
    trav = head;
    while(trav!=NULL)
    {
        cout<<trav->name<<" "<<trav->roll<<" "<<trav->marks<<endl;
        trav = trav->next;
    }

}
int main()
{
    int ch;
    while(1)
    {
        cout<<"enter 1 for create  , 2 for view , 3 for exit "<<endl;
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