#include <iostream>

template <class T>
class Node {
    public:
        Node<T>(T);
        T getValue(void);
        Node *getPrev(void);
        void setPrev(Node *);
    private:
        int value;
        Node *prev;
};

template <class T>
Node<T>::Node(T n) {
    value = n;
    prev = 0;
}

template <class T>
T Node<T>::getValue(void) {
    return value;
}

template <class T>
Node<T> *Node<T>::getPrev(void) {
    return prev;
}

template <class T>
void Node<T>::setPrev(Node *p) {
    prev = p;
}

template <class T>
class Queue {
    public:
        Queue(void);
        void insert(T);
        void remove(void);
        int first(void);
        int last(void);
        int isEmpty(void);
    private:
        Node<T> *f;
        Node<T> *l;
};

template <class T>
Queue<T>::Queue(void) {
    f = 0;
    l = 0;
}

template <class T>
void Queue<T>::insert(T n) {
    Node<T> *new_node = new Node<T>(n);

    if (f == 0) {
        f = new_node;
        l = f;
    } else {
        l->setPrev(new_node);
        l = new_node;
    }
}

template <class T>
void Queue<T>::remove(void) {
    Node<T> *cur = f;

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

template <class T>
int Queue<T>::first(void) {
    if (isEmpty()) {
        std::cout << "error: stack is empty" << std::endl;
        return -1;
    }
    return f->getValue();
}

template <class T>
int Queue<T>::last(void) {
    if (isEmpty()) {
        std::cout << "error: stack is empty" << std::endl;
        return -1;
    }
    return l->getValue();
}

template <class T>
int Queue<T>::isEmpty(void) {
    return f == 0;
}

int main(void) {
    int i;
    Queue<int> q;

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
