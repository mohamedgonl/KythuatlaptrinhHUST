#include <iostream>
using namespace std;
struct Node {
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        next = NULL;
    }
};

// push a new element to the beginning of the list
Node* prepend(Node* head, int data) {
    Node* newNode = new Node(data);
    newNode->next = head;
    head = newNode;
    return head;
}

// print the list content on a line
void print(Node* head) {
    Node *curNode = head;
    while(curNode != NULL){
        cout << curNode->data<<" ";
        curNode = curNode->next;
    }
    cout << endl;
}

// return the new head of the reversed list
Node* reverse(Node* head) {
    //     head -> node -> node ->
    //     prev  cur   next
    Node* curNode = head->next;
    Node* prevNode = head; prevNode->next = NULL;
    Node* nextNode = NULL;
    while(curNode != NULL){
        nextNode = curNode->next;
        curNode->next = prevNode;
        prevNode = curNode;
        curNode = nextNode;
    }
    head = prevNode;

    return head;
}

int main() {
    int n, u;
    cin >> n;
    Node* head = NULL;
    for (int i = 0; i < n; ++i){
        cin >> u;
        head = prepend(head, u);
    }

    cout << "Original list: ";
    print(head);

    head = reverse(head);

    cout << "Reversed list: ";
    print(head);

    return 0;
}