#include <iostream>
using namespace std;

// Node class
class Node{
    public:
    int data;
    Node* next;
    
    // constructor for making new node
    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }
    
};

// function to print
void print(Node* head){
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

// function to reverse a linked list
void reverse(Node * &head){
    
    // iteratively
    
    if(head == NULL || head-> next == NULL){
        return ;
    }
    Node* prev = NULL;
    Node* curr = head;
    Node* forward = NULL;

    while(curr != NULL){
        forward = curr -> next;
        curr -> next = prev;
        prev = curr;
        curr = forward;
    }
    head = prev;
    return;
    

    //recursively
    /*
    //base case
    if(head == NULL || head-> next == NULL){
        return head ;
    }

    Node* chhotaHead= reverseLinkedList(head -> next);
    head -> next -> next;
    head -> next = NULL;
    return chhotaHead;
    */
}

int getLength(Node* head){
    int len =0;
    while( head != NULL){
        len++;
        head = head -> next;
    }
    return len;
}

void findMiddle(Node * head){
    int len = getLength(head);
    int ans = (len/2);
    Node * temp =head;
    int cnt = 0;
    while(cnt < ans){
        temp = temp -> next;
        cnt++;
    }
    cout << "The middle element of the linked list is " << temp -> data << endl;
}

int main(){
    Node* head= new Node(1);
    // cout << node1 -> data << endl;
    // cout << node1 -> next << endl;
    
    insertAtHead(head,2);
    insertAtHead(head,3);
    insertAtHead(head,4);
    insertAtHead(head,5);
    print (head);
    reverse(head);
    print(head);
    findMiddle(head);
    

    return 0;
}
    