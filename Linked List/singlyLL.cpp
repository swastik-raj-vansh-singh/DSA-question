#include <iostream>
using namespace std;

class node
{

public:
    int data ;
    node* next;

    node(){
        this->data = 0;
        this->next = NULL;

    }

    node(int data){
        this->data =data;
        this->next = NULL;
    }


};

void print(node* &head){
    
    node* temp =head;
    while (temp != NULL)
    {
        cout<< temp->data<<endl;
        temp=temp->next;
    }
    
}

int findLength(node* head){
    int len=0;
    node* temp = head;
    while(temp != NULL){
        temp= temp->next;
        len++;
    }
    return len;
}

void insertAtHead(node* &head,node* &tail,int data){
    if(head == NULL){
        node* newnode = new node(data);
        tail = newnode;
        head = newnode;
    }
    else{
        node* newnode = new node(data);
        newnode->next = head;
        head = newnode;
    }
}

void insertAtTail(node* &head,node* &tail,int data){
    if(head == NULL){
        node* newnode = new node(data);
        tail = newnode;
        head = newnode;
        return;
    }
    
    node* newnode = new node(data);
    tail->next=newnode;
    tail = newnode;
}

void insertAtPosition(node* &head,node* &tail,int data,int position){
    if(head == NULL){
        node* newnode = new node(data);
        tail = newnode;
        head = newnode;
    }

    if (position == 0)
    {
        insertAtHead(head,tail,data);
        return;
    }

    int length = findLength(head);

    if (position >= length)
    {
        insertAtTail(head,tail,data);
        return;
    }

    int i=1;
    node* prev = head;
    while(i < position){
        prev = prev->next;
        i++;
    }
    node* curr = prev->next; 

    node* newnode = new node(data);

    newnode->next = curr;

    prev->next =newnode;

}

void deleteNode(int position, node* &head, node* &tail) {
    if(head == NULL) {
        cout << "Cannot delete, LL is empty";
        return;
    }

    if(position == 1){
        node* temp = head;
            head = head -> next;
            temp -> next = NULL;
            delete temp;
            return;
    }

     int len  = findLength(head);


        //deleting last node
        if(position == len) {
                //find prev
                int i = 1;
                node* prev = head;
                while(i < position - 1) {
                        prev = prev->next;
                        i++;
                }
                //step2:
                prev->next = NULL;
                //step3:
                node* temp = tail;
                //step4:
                tail = prev;
                //step5:
                delete temp;
                return;
        }
    
            int i =1;
        node* prev = head;
        while( i < position-1) {
                prev= prev -> next;
                i++;
        }
        node* curr = prev -> next;

        //step2:
        prev -> next = curr -> next;
        //step3:
        curr -> next = NULL;
        //step4:
        delete curr;
}
int main(){

    // node* first = new node(10);
    // node* second = new node(10);
    // node* third = new node(10);
    // node* fourth = new node(10);

    node* head = NULL;
    node* tail = NULL;

    // first->next = second;
    // second->next = third;
    // third->next = fourth;

    // print(head);
    insertAtHead(head,tail,10);
    insertAtHead(head,tail,20);
    insertAtHead(head,tail,30);
    insertAtHead(head,tail,40);
    insertAtHead(head,tail,50);
    insertAtTail(head,tail,100);

    deleteNode(2,head,tail);
    
    print(head);
    return 0;

}

