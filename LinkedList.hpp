#include "Node.hpp"
#include "Card.hpp"

class LinkedList
{
    private:
        Node* head;
        Node* tail;
    
    protected:
        Node* getNodeAtIndex(int index);
        Card* getDefense();
        int count;

    public:
        LinkedList();
        void display();
        void addEnd(int value);
        int removeEnd();
        void addFront(int value);
        int removeFront();
        int removeAtIndex(int index);
        void addAtIndex(int value, int index);
        void insertionSort();
};