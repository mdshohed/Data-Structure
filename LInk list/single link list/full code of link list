#include<bits/stdc++.h>
using namespace std;

typedef struct node Node;
struct node{
    int data;
    Node *next;
};

Node *head = NULL;

void append(int item ) {
    Node *temp = new node();
    temp->data = item;
    temp->next = NULL;
    if ( head == NULL) {
        head = temp;
    }
    else {
        Node *t = head;
        while( t->next != NULL) {
            t = t->next;
        }
        t->next = temp;
    }
}

void prepend( int item) {
    Node *temp = new node();
    temp->data = item;
    temp->next = head;
    head = temp;
}

void insert_node( int x) {
    Node *temp = new node();
    temp->data = x;
    if ( head == NULL || (temp->data<head->data)) {
        temp->next = head;
        head = temp;
    }
    else {

        Node *current_node = head->next;
        Node *previous_node = head;

        while( current_node != NULL && temp->data > current_node->data ) {
            previous_node = current_node;
            current_node = current_node->next;
        }

        previous_node->next = temp;
        temp->next = current_node;
    }
}

void delete_node( int x ) {

    Node *current_node = head;
    Node *previous_node = NULL;

    while( current_node->data != x ) {

        previous_node = current_node;
        current_node = current_node->next;
    }
    if ( current_node == head) {
        Node *temp = head;
        head = head->next;
        delete(temp);
    }
    else {
        previous_node->next = current_node->next;
        delete(current_node);
    }
}

void search_node(int x) {
    Node *temp  = head;
    bool y = false;
    while (temp !=NULL) {
        if ( temp->data == x) {
            cout<<"Yes"<<endl;
            y = true;
            break;
        }
        temp = temp->next;
    }
    if ( y == false) {
        cout<<"No"<<endl;
    }
}

void print() {
    Node *temp  = head;
    while (temp != NULL) {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout <<endl;

}

int main() {
    append(30);
    append(40);
    append(10);
    prepend(20);
    prepend(40);
    prepend(100);
    print();
    delete_node(30);
    print();
    search_node(100);
    insert_node(43);
    print();
    return 0;
}


