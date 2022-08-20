#include<iostream>
#include<cstdlib>
using namespace std;
struct node {
    int info;
    struct  node *next;//self referencing which mean it is to point the same kind of data type 
    };
    struct node *head;//head pointer for point the first node of the current linked list ;s
    struct node * create(void){
        struct node *temp=(struct node*)malloc(sizeof(struct node));
         return temp;//space will be created and the base address is passed so you only need a container of the 
        //  same type to store ;
    }
    
    void insertatbeg(int data){
   // create(); this will show a error because it is not return type you can only use void in mian function
   struct  node *temp=create();
   temp->next=NULL;
    temp->info=data;
    head=temp;
    }
    void print(){
    struct node *ptr=head;
    while(ptr!=NULL){
        cout<<"\t"<<ptr->info<<"\t";
        ptr=ptr->next;
    }
    cout<<endl;
    }
    void insertatend(int data){
        struct node *ptr=head;
        struct node *newnode=create();
        if(head==NULL){
            cout<<"Linked list is empty ."<<endl;
        }
        else{
            while(ptr->next!=NULL){
                ptr=ptr->next;
            }
            ptr->next= newnode;
            newnode->next=NULL;
            newnode->info=data;
        }
    }
    void insertatany(int position , int data){
        struct node *temp=create(), *ptr=head;
        if(ptr==NULL){
            cout<<"singly linked list is empty !!"<<endl;
        }
        else if(ptr->next==NULL){
            insertatend(data);
        }
        else{
        while(position!=2){//it point to the n-1 node element 
        ptr=ptr->next;
        position--;
        }
        temp->info=data;
    temp->next=ptr->next;
    ptr->next=temp;    
        }
    }
int main(){
    insertatbeg(5);
    print();
    insertatend(100);
    print();
    insertatany(2,75);
    insertatany(2,50);
    insertatany(2,25);
    print();
}