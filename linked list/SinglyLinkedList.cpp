#include <iostream>
using namespace std;

// Node class
class Node{
    public:
    int data;
    Node* next;
    
    // constructor for making new node
    Node(int data){
        this->data = data;
        this -> next = NULL;
    }
    
    // destructor for deletion of a node
    ~Node(){
        int value = this-> data;
        if (this -> next != NULL){
            delete next;
            this -> next = NULL;
        }
        cout << "memory is free for node with data " << value << endl;
        cout << endl;
    }
};

// function to print
void print(Node* &head){
    Node* temp= head;
    while(temp != NULL){
        cout << temp-> data << " ";
        temp=temp-> next;
    }
    cout << endl;
}

//function to insert at head
void insertAtHead(Node* &head,int data){
    Node* temp= new Node(data);
    temp -> next = head;
    head = temp;
}

//function to insert at tail
void insertAtTail(Node* &tail,int data){
    Node* temp =new Node(data);
    tail-> next = temp;
    tail=temp;
    
}

void insertAtMiddle(Node* &tail, Node* &head,int pos ,int data){
    
    // if insert at start case
    if(pos == 1){
        insertAtHead(head,data);
        return;
    }
    
    // temp for traversing
    Node* temp = head;
    int count=1;
    while(count < pos-1){
        temp = temp -> next;
        count++;
    }
    
    // insert at last case
    if(temp-> next = NULL){
        insertAtTail(tail,data);
        return;
    }
    
    // insert at position
    Node* nodeToInsert = new Node(data);
    nodeToInsert -> next = temp->next;
    temp -> next = nodeToInsert;
}

// deletion of node
void deleteNode(Node*&head ,int pos){
    if(pos==1){
        Node * temp = head;
        head = head-> next;
        temp -> next = NULL;
        delete temp;
    } 
    else{
        Node * curr= head; 
        Node * prev= curr;
        
        int count = 1;
        while(count < pos){
            curr = curr -> next;
            count++;
        }
        prev -> next = curr-> next;
        curr -> next = NULL;
        delete curr;
        
    }
}

int main(){
    Node* head= new Node(10);
    // cout << node1 -> data << endl;
    // cout << node1 -> next << endl;
    
    print (head);
    Node* tail=head;
    
    insertAtHead(head,12);
    print(head);
    
    insertAtHead(head,20); 
    print(head);
    
    
    insertAtTail(tail,17);
    print(head);
    
    insertAtTail(tail,15); 
    print(head);

    insertAtMiddle(tail,7);
    print(head);
    
    
    insertAtMiddle(tail,head,3,23);
    print(head);
    
    insertAtMiddle(tail,head,1,9);
    print(head);
    
    deleteNode(head,3);
    print(head);
    
    deleteNode(head,1);
    print(head);
    
    return 0;
}