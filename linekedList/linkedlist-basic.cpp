
#include <iostream>


class Node {

    public:
     int value;
     Node* next;
     Node* previous;

        Node(int data){
            value=data;
   
        };

};


class linkedlist{
    Node* head;
    Node* back;
    public:

    void push(int number){

        Node* newnode = new Node(number);
        newnode->value= number;
        newnode->next = head;
        head=newnode;
        
        if (newnode->next != nullptr){
            (newnode->next)->previous =newnode;
        }
        else{
            back=newnode;
        }

    }

};

int main (){
   linkedlist  mylink = linkedlist();
   mylink.push(5);
   mylink.push(7);
    return 0;
}
