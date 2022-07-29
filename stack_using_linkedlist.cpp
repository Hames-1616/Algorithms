#include<iostream>
using namespace std;
struct node{
    int data;
    struct node *next;
};
struct node *top=NULL;
void push(int x)
{
    struct node *temp;
    temp=(struct node *)malloc(sizeof(struct node));
    temp->data=x;
    temp->next=top;
    if(top==NULL)
    {
    top=temp;
    }
    else{
      temp->next=top;
      top=temp;   
    }
}
int pop()
{
    struct node *temp;
    if(top==NULL)
    {
        return -1;
    }
    else{
        int x;
        x=top->data;
        temp=top;
        top=top->next;
        free(temp);
        return x;

    }

}
void view()
{
    struct node *trav;
    trav=top;
    while(trav!=NULL)
    {
        cout<<trav->data<<endl;
        trav=trav->next;
    }
}
int main()
{
    int c,x;
    while(1)
    {
        cout<<"enter"<<endl<<"1 for push"<<endl<<"2 for pop"<<endl<<"3 for view"<<endl<<"4 for exit"<<endl;
        cin>>c;
        if(c==1)
        {
            cout<<"enter the element to be inserted"<<endl;
            cin>>x;
            push(x);
        }
        else if(c==2)
        {
            x=pop();
            if(x==-1)
            {
                cout<<"Underflow";
            }
            else{
                cout<<x;
            }
        }
        else if(c==3)
        {
            view();
        }
        else{
            break;
        }
    }
}