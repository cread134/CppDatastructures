class LinkedList {
public:
    LinkedList();
    ~LinkedList();
    void insert(int data);
    void remove(int data);
    void print();
private:
    struct Node {
        int data;
        Node* next;
    };
    Node* head;
};