#include <iostream>

class Node {
    public:
        Node(int);
        int getValue(void);
        Node *getPrev(void);
        void setPrev(Node *);
    private:
        int value;
        Node *prev;
};

Node::Node(int n) {
    value = n;
    prev = 0;
}

int Node::getValue(void) {
    return value;
}

Node *Node::getPrev(void) {
    return prev;
}

void Node::setPrev(Node *p) {
    prev = p;
}

class Queue {
    public:
        Queue(void);
        void insert(int);
        void remove(void);
        int first(void);
        int last(void);
        int isEmpty(void);
    private:
        Node *f;
        Node *l;
};

Queue::Queue(void) {
    f = 0;
    l = 0;
}

void Queue::insert(int n) {
    Node *new_node = new Node(n);

    if (f == 0) {
        f = new_node;
        l = f;
    } else {
        l->setPrev(new_node);
        l = new_node;
    }
}

void Queue::remove(void) {
    Node *cur = f;

    if (isEmpty()) {
        std::cout << "error: stack is empty" << std::endl;
        return;
    }

    if (cur->getPrev() == 0) {
        delete cur;
        f = 0;
        l = 0;
        return;
    }

    while (cur->getPrev()->getPrev() != 0) {
        cur = cur->getPrev();
    }

    l = cur;
    delete cur->getPrev();
    l->setPrev(0);
}

int Queue::first(void) {
    if (isEmpty()) {
        std::cout << "error: stack is empty" << std::endl;
        return -1;
    }
    return f->getValue();
}

int Queue::last(void) {
    if (isEmpty()) {
        std::cout << "error: stack is empty" << std::endl;
        return -1;
    }
    return l->getValue();
}

int Queue::isEmpty(void) {
    return f == 0;
}

int main(void) {
    int i;
    Queue q;

    std::cout << q.first() << std::endl;

    for (i = 2; i != 12; i += 2) {
        q.insert(i);
        std::cout << q.last() << std::endl;
    }

    std::cout << "--" << std::endl;

    while (!q.isEmpty()) {
        std::cout << q.last() << std::endl;
        q.remove();
    }

    return 0;
}
