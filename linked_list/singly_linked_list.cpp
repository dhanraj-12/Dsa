#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        this->next = nullptr;
    }
};

void insertNodeAtHead(Node* &head, int data) {
    Node* temp = new Node(data);
    temp->next = head;
    head = temp;
}

void insertNodeAtTail(Node* &end, int data) {
    Node* temp = new Node(data);
    end->next = temp;
    end = temp;
}

void insertNodeatmiddle(Node* &head,Node* &end,int data,int position) {
    if(position == 0) {
        insertNodeAtHead(head, data);
        return;
    }
    Node* Newnode = new Node(data);
    Node* temp = head;
    int crn = 0;
    while(crn < position-1 && temp->next != nullptr) {
        temp = temp->next;
        crn++;
    }
    if(temp->next == nullptr) {
        insertNodeAtTail(end, data);
        return;
    }


    Newnode->next = temp->next;
    temp->next = Newnode;

}

void deletNode(Node* &head, Node* &end,int position) {
        Node* temp = head;
        if(position == 0) {
            head = head->next;
            temp->next = nullptr;
            delete temp;
            return ;
        }
        int crn = 0;
        Node* prev;
        while(crn < position) {
            prev = temp;
            temp = temp->next;
            crn++;
        }
        prev->next = temp->next;
        if(temp->next == nullptr) {
            end = prev;
        }
        temp->next = nullptr;
        delete temp;


}

void print(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int main() {
    Node* node1 = new Node(0);
    cout << node1->data << endl;
    Node* head = node1;
    insertNodeAtHead(head, 1);
    print(head);
    Node* end = node1;
    insertNodeAtTail(end, 2);
    print(head);
    insertNodeatmiddle(head,end, 3, 2);
    print(head);
    cout << head->data << endl;
    cout << end->data << endl;
    deletNode(head,end,3);
    print(head);
    cout << head->data << endl;
    cout << end->data << endl;

    return 0;
}
