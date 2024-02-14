#include "LinkedList.h"
#include <iostream>

LinkedList::LinkedList() {
    head = nullptr;
}

void LinkedList::insert(int data) {
    Node* newNode = new Node;
    newNode->data = data;
    newNode->next = head;
    head = newNode;
}

void LinkedList::remove(int data) {
    Node* current = head;
    Node* previous = nullptr;
    while (current != nullptr && current->data != data) {
        previous = current;
        current = current->next;
    }
    if (current != nullptr) {
        if (previous != nullptr) {
            previous->next = current->next;
        } else {
            head = current->next;
        }
        delete current;
    }
}

void LinkedList::print() {
    Node* current = head;
    while (current != nullptr) {
        std::cout << current->data << " ";
        current = current->next;
    }
    std::cout << std::endl;
}

LinkedList::~LinkedList() {
    while (head != nullptr) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }
}