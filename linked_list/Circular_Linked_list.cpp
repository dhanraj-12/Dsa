#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    
    Node(int val) {
        this->data = val;
        this->next = nullptr;
    }
};

void insert(Node* &tail, int data, int ele) {
    if (tail == nullptr) {
        Node* newNode = new Node(data);
        newNode->next = newNode;
        tail = newNode;
        return;
    }
    
    Node* curr = tail;
    do {
        if (curr->data == ele) {
            Node* newNode = new Node(data);
            newNode->next = curr->next;
            curr->next = newNode;
            if (curr == tail) {
                tail = newNode;
            }
            return;
        }
        curr = curr->next;
    } while (curr != tail);
    
    cout << "Element " << ele << " not found in the list." << endl;
}

void deleteNode(Node* &tail, int ele) {
    if(tail == nullptr) {
        cout << "List is empty" << endl;
        return;
    } else {
        Node* prev = tail;
        Node* crn = prev->next;

        while(crn->data != ele) {
            prev = crn;
            crn = crn->next;
        }
        prev->next =  crn->next;
        if(crn == prev) {
            tail = nullptr;
            return;
        }
        crn->next = nullptr;
        delete crn;

    }
}

void print(Node* tail) {
    if (tail == nullptr) {
        cout << "List is empty" << endl;
        return;
    }
    
    Node* temp = tail->next;
    do {
        cout << temp->data << " -> ";
        temp = temp->next;
    } while (temp != tail->next);
    cout << " (back to start)" << endl;
}

int main() {
    Node* tail = nullptr;
    
    insert(tail, 1, 1);  // Insert 1 as the first element
    print(tail);
    
    insert(tail, 2, 1);  // Insert 2 after 1
    print(tail);
    
    insert(tail, 3, 2);  // Insert 3 after 2
    print(tail);

    deleteNode(tail, 2);  // Delete 2
    print(tail);
    cout << tail->data << endl;

    deleteNode(tail, 1);  // Delete 1
    print(tail);
    cout << tail->data << endl;

    deleteNode(tail, 3);  // Delete 3
    print(tail);
    // cout << tail->data << endl;

    
    return 0;
}