#include <iostream>
#include <stdio.h>

using namespace std;

struct Node{
    int data;
    struct Node* next;
    struct Node* before;
};

void printList(Node* first);
void pushAfter(Node* prev, int data);
void pushBefore(Node* next, int data);

int main(int argc, char const *argv[])
{   

    Node* head = new Node();
    Node* second = new Node();
    Node* end = new Node();

    head->data = 1;
    head->next = second;
    head->before = NULL;

    second-> data = 2;
    second->next = end;
    second->before = head;
    
    end -> data = 3;
    end -> next = NULL;
    end -> before = second;
    
    printList(head); 

    pushAfter(second, 77);

    pushBefore(end, 88);

    printList(head);
    return 0;
}


void printList(Node* first){
    Node* tempNode = first ;
    printf("Start! \n");
    do
    {   
        printf("%d ", tempNode->data);
        tempNode  = tempNode -> next;
        /* code */
    } while (tempNode != NULL);

    printf("\n");
  
}


void pushAfter(Node* prev, int data){
    Node* newNode = new Node();
    
    

    newNode->data = data;
    newNode->next = prev-> next;
    newNode->before = prev ;

    
    prev->next->before = newNode;
    prev->next = newNode;
    
}

void pushBefore(Node* next, int data){
    Node* newNode = new Node();
    
    

    newNode->data = data;
    newNode->next = next;
    newNode->before = next-> before ;

    next->before->next = newNode;
    next->before = newNode;
}