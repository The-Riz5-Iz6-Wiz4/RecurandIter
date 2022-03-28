#include <iostream>
using namespace std;

struct Node{
    int currNode;
    Node* next;
}

void revPrint(Node* pointer){
    if (pointer != nullptr ){
        revPrint(pointer->next)
        cout << pointer ->curNode << endl;
    }
}

int main(){
    Node* head;
    Node* node1 = new Node;
    Node* node2 = new Node;
    Node* node3 = new Node;
    Node* node4 = new Node;

    Node1->currNode = 1;
    Node2->currNode = 2;
    Node3->currNode = 3;
    Node4->currNode = 4;

    head = Node1;
    Node1 -> next = Node2;
    Node2 -> next = Node3;
    Node3 -> next = Node4;
    Node4 -> next = nullptr;

    revPrint(head);
}