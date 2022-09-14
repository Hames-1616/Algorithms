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
void search()
{
    cout<<"enter the element to be searched"<<endl;
    int n,flag =0 ;
    cin>>n;
    trav= root;
    while(trav!=NULL)
    {
        if(trav->data == n)
        {
            cout<<"element found"<<endl;
            flag = 1;
            break;
        }
        else if(n<trav->data)
        {
            trav=trav->left;
        }
        else if(n>trav->data)
        {
            trav= trav->right;
        }
    }
    if(flag == 0 )
    {
        cout<<"Element not found"<<endl; 
    }
}
void max()//check copy for seeing sir's method
{
    trav=root;
    while(1)
    {
        if(trav->right==NULL)
        {
            cout<<trav->data;
            break;
        }
        trav=trav->right;
    }
}
void min()
{
    trav=root;
    while(1){
    if(trav->left ==NULL)
    {
        cout<<trav->data;
        break;
    }
    trav=trav->left;
}
}

int height(struct node *root)
{
    if(root==NULL)
    {
        return -1;
    }
    cout<<root->left;
    int lh = height(root->left);
    int rh = height(root->right);


    if(lh>rh)
    {
        return lh+1;
    }
    else{
        return rh+1;
    }

}
int main()
{

    int n;
    while(1){
        cout<<"\n1 for creation\n 2 for search\n 3 for preorder\n 4 for inorder\n 5 for postorder\n 6 for finding max \n 7 for finding min\n 8 for height\n 0 exit"<<endl;
    cin>>n;
    if(n==1)
    {
    create();
    }

    else if(n==2)
    {
        search();
    }

    else if(n==3){
    cout<<endl<<"pre-order traversal"<<endl;
    pre_order(root);
    }

    else if(n==4){
    cout<<endl<<"In-order traversal"<<endl;
    in_order(root);
    }

    else if(n==5){
    cout<<endl<<"post-order traversal"<<endl;
    post_order(root);
    }

    else if(n==6)
    {
        max();
    }
    else if(n==7)
    {

        min();
    }
    else if(n==8)
    {
      int n = height(root);
      cout<<"\nheight of tree = "<<n<<endl;
    }
    else if(n==0)
    {

        break;
    }
}
}
