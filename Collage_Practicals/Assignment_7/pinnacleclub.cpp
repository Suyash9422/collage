#include <iostream>
using namespace std;
class node {
    public:
    int data;
    node *next;
};
int main() {
    node *head,*p;
    head=new node;
    int n,i;
    cout<<"Enter the number of nodes to be created: ";
    cin>>n;
    cout<<"Enter data for head: ";
    cin>>head->data;
    p=head;
    for (i=1;i<n;i++)
    {
        p->next=new node;
        p=p->next;
        p->next=NULL;
        cout<<"Enter data for node "<<i<<" ";
        cin>>p->data;
    }
    p=head;   
    while(p!=NULL)
    {
        cout<<p->data<<endl;
        p=p->next;
    }
    return 0;
}