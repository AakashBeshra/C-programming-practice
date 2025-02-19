// Write a C++ code to delete the last node in a singly linked list
#include <iostream>
using namespace std;
class Node {
    public:
    int data;
    Node *next;
    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};
int main() {
    Node *head = new Node(10);
    Node *temp1 = new Node(20);
    Node *temp2 = new Node(30); 
    head->next = temp1;
    temp1->next = temp2;
    Node *temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = NULL;
    delete temp2;
    temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    return 0;
}