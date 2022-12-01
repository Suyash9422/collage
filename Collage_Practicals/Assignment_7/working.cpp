#include <iostream>
using namespace std;
class node {
    public:
    int data;
    node *next,*head,*p;
};
node::addpres( *head,int data){
    node *q;
    q= new node;
    cin>>q->data;
    q->next=head;
    head=q;
    cout <<head->data;
}
void addstu(){
    cout<<"addstu"<<endl;
}
void addsec(){
     cout<<"addsec"<<endl;
}
void delpres(){
     cout<<"delpres"<<endl;
}
void delstu(){
     cout<<"delstu"<<endl;
}
void delsec(){
     cout<<"delsec"<<endl;
}
void dispnum(){
     cout<<"dispnum"<<endl;
}
void disp(){
     cout<<"disp"<<endl;
}
int main() {
    //node *head,*p;
    head=new node;
   int n,i;
 //   cout<<"Enter the number of nodes to be created: ";
   // cin>>n;
    //cout<<"Enter data for head: ";
//cin>>head->data;
  //  p=head;
//    for (i=1;i<n;i++)
  //  {
    //    p->next=new node;
      //  p=p->next;
    //    p->next=NULL;
      //  cout<<"Enter data for node "<<i<<" ";
    //    cin>>p->data;
//    }
  //  p=head;   
    //while(p!=NULL)
//    {
  //      cout<<p->data<<endl;
    //    p=p->next;
    
    cout<<"\n MENU\n1.Add a Member.\n2.Delete a Member.\n3. display total number of members.\n4. Display Members.\n5.Exit\n\nEnter Your choice : ";
    int ch;
    cin>>ch;
    switch(ch){
        case 1:
            cout<<"\n1. Add a President.\n2. Add a student.\n3. Add a secretary.\n4. Back\n Enter Your Choice : ";
            int ch1;
            cin>>ch1;
            switch(ch1){
                case 1:
                    addpres();
                    break;
                case 2:
                    addstu();
                    break;
                case 3:
                    addsec();
                    break;
                case 4:
                    break;
            }
        case 2:
            cout<<"\n1. Delete a President.\n2. Delete a Student.\n3. Delete a Secretary\n4. Back.\nEnter Your Choice : ";
            int ch2;
            cin>>ch2;
            switch(ch2){
                case 1:
                    delpres();
                    break;
                case 2:
                    delstu();
                    break;
                case 3:
                    delsec();
                    break;
                case 4:
                    break;
            }
        case 3:
            dispnum();
            break;
        case 4:
            disp();
            break;
    }
    
    
    return 0;
}