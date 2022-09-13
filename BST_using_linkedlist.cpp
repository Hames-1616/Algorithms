#include<iostream>
using namespace std;
struct node {
    int data;
    struct node *left,*right;
};

struct node *root=NULL,*temp,*trav;
void create()
{
    cout<<"enter the values that you want to insert"<<endl;
    int x;
    cin>>x;
    for(int i=0;i<x;i++)
    {
       temp=(struct node *)malloc(sizeof(struct node));
       cout<<"enter the element"<<endl;
       cin>>temp->data;
       temp->left=temp->right=NULL;
       if(root==NULL)
       {
        root=temp;

       }
      else
      {
        trav=root;
        while(1)
        {
            
            if((temp->data)<(trav->data))
            {
                if(trav->left==NULL)
                {
                    trav->left=temp;
                    break;
                }
                else{
                    trav=trav->left;
                }
            }
            else if(temp->data>trav->data)
            {
                if(trav->right==NULL)
                {
                    trav->right=temp;
                    break;
                }
                else{
                    trav=trav->right;
                }
            }
            else{
                cout<<"Duplicate keys are not allowed";
            }
        }
       }
    }
}
void pre_order(struct node *root)
{

    if(root!=NULL)
    {
        cout<<root->data<<" ";
        pre_order(root->left);
        pre_order(root->right);
    }
}

void in_order(struct node *root)
{

    if(root!=NULL)
    {
        
        in_order(root->left);
        cout<<root->data<<" ";
        in_order(root->right);
    }
}

void post_order(struct node *root)
{

    if(root!=NULL)
    {
        
        post_order(root->left);
        post_order(root->right);
        cout<<root->data<<" ";
    }
}

int main()
{
    create();

    cout<<endl<<"pre-order traversal"<<endl;
    pre_order(root);

    cout<<endl<<"In-order traversal"<<endl;
    in_order(root);

    cout<<endl<<"post-order traversal"<<endl;
    post_order(root);
}