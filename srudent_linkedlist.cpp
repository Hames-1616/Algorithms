#include<iostream>
using namespace std;
struct node 
{
    string name;
    string depart;
    int rollno,marks;
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
        cout<<"enter the name"<<endl;
        cin>>(temp->name);
        cout<<"enter the rollno"<<endl;
        cin>>(temp->rollno);
        cout<<"enter the department"<<endl;
        cin>>(temp->depart);
        cout<<"enter the marks obtained"<<endl;
        cin>>(temp->depart);
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
        cout<<"Student details"<<endl;
        cout<<"Name : "<<trav->name<<endl;
        cout<<"Roll no : "<<trav->rollno<<endl;
        cout<<"Department : "<<trav->depart<<endl;
        cout<<"Marks : "<<trav->marks<<endl;
        trav=trav->next;
    }
}
int main()
{
    int n;
    while(1)
    {
        cout<<"enter "<<endl<<"1 for creating "<<endl<<"2 for viewing"<<endl<<"3 for exit";
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
            break;
        }
    }
}