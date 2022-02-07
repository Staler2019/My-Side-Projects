// linked list
#include <iostream>
#include <vector>

#ifndef LINKED_LIST_H
#define LINKED_LIST_H

struct Element {
    int *pre;
    int *next = NULL;
    int num;

    Element(int element);
};

class LinkedList {
    public:
        void insert (int element);
        void delete (int element);

    private:
        int quantity = 0;
        int *start;
        std::vector<Element> ve;
};

#endif // LINKED_LIST_H