#include <iostream>
using namespace std;

// define a struct to represent a node in the linked list
struct Node {
    int data;
    Node* next;
};

// function to traverse the linked list and print its elements
void traverseList(Node* head) {
    Node* current = head;
    while (current != nullptr) {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;
}

int main() {
    // create some nodes
    Node* head = new Node{1, nullptr};
    Node* second = new Node{2, nullptr};
    Node* third = new Node{3, nullptr};

    // link the nodes together to form a linked list
    head->next = second;
    second->next = third;

    // traverse the linked list and print its elements
    traverseList(head);

    return 0;
}
