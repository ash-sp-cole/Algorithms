#include <iostream>



using namespace std;
struct Node {

int data{};

Node* next{};

};



int main () {


Node* head = NULL;
Node* second = NULL;
Node* third = NULL;

head = new Node();
second = new Node();
third = new Node();



head->data = 1;
head->next = second;

second->data = 2;
second->next =third;

third->data =7;
third->next = NULL;


while (head != NULL){
    cout << "  node value " << head->data;
    head = head->next;
}


    return 0;
}