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
   
int main(){
    insertatbeg(5);
    print();
}