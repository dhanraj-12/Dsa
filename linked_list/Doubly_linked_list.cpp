#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node *left, *right;
    Node(int d) { data = d; left = right = NULL; }

};

int getlenght(Node* &head) {
    int len = 0;
    Node* temp = head;
    while(temp!= NULL) {
        len++;
        temp = temp->right;
    }
    return len;
}

void insertathead(Node* &head,int data) {
    if(head == NULL) {
        Node* temp = new Node(data);
        head = temp;
        return ;
    } else {
        Node* newNode = new Node(data);
        newNode->right = head;
        head->left = newNode;
        head = newNode;
    }
    

}
void insertatend(Node* &head, int data) {
    Node* newNode = new Node(data);
    if(head == NULL) {
        head = newNode;
        return;
    }
    Node* temp = head;
    while(temp->right != NULL) {
        temp = temp->right;
    }
    temp->right = newNode;
    newNode->left = temp;
}

void insertarposition(Node* &head, int data, int position) {
    if(position == 0 || head == NULL) {
        insertathead(head, data);
        return;
    }
    
    Node* temp = head;
    int currentPos = 0;
    
    while(temp != NULL && currentPos < position - 1) {
        temp = temp->right;
        currentPos++;
    }
    
    if(temp == NULL) {
        insertatend(head, data);
    } else {
        Node* newNode = new Node(data);
        newNode->right = temp->right;
        newNode->left = temp;
        if(temp->right != NULL) {
            temp->right->left = newNode;
        }
        temp->right = newNode;
    }
}

void deletenode(Node* &head, int position) {
    Node* temp = head;
    if(temp == NULL) {
        return;
    }
    if(position == 0) {
        temp->right->left = NULL;
        head = temp->right;
        temp->right = NULL;
        delete temp;
        return;
    } 

    int crn = 0;
    Node* prev;
    while(crn<position && temp!=NULL) {
        prev = temp;
        temp = temp->right;
        crn++;

    }
    if(temp->right == NULL) {
        temp->left = NULL;
        prev->right = NULL;
        delete temp;
        return;
    }
    prev->right = temp->right;
    temp->right->left = temp->left;
    temp->right = NULL;
    temp->left = NULL;
    delete temp;

}

void print (Node* &head) {
    Node* temp = head;
    while(temp != NULL) {
        cout << temp->data << " <=> ";
        temp = temp->right;
    }
    cout << "NULL" << endl;
}

int main() {
    Node* head = NULL;
    print(head);
    cout << "Length of the linked list: " << getlenght(head) << endl;
    insertathead(head, 0);
    print(head);
    insertatend(head, 1);
    print(head);  
    insertarposition(head, 2, 2);
    print(head);
    cout<<head->data << endl;
    insertarposition(head,3,3);
    print(head);
    deletenode(head, 3);
    print(head);
    deletenode(head, 2);
    print(head);
    deletenode(head, 1);
    print(head);

    return 0;
}
