#include <iostream>
using namespace std;

class Node
{

public:
    Node *previous;
    Node *next;
    int value;

    Node(int data)
    {
        value = data;
    };
};

class linkedlist
{
    Node *head;
    Node *tail;

public:
    void PushTail(int number)
    {

        Node *newnode = new Node(number);
        newnode->value = number;
        newnode->next = tail;
        tail = newnode;

        if (newnode->next != nullptr)
        {
            (newnode->next)->previous = newnode;
        }
        else
        {
            head = newnode;
        }
    }

    void PushHead(int number)
    {

        Node *newnode = new Node(number);
        newnode->value = number;
        if (head->previous != nullptr)
        {
            (head->next) = newnode;
        }
        else
        {
            tail = newnode;
        }
        head = newnode;
    }

    void pushIndex(int possition, int number)
    {
        Node *newnode = new Node(number);
        newnode->value = number;
        Node *indexPtr = head;

        try
        {

            for (int i = 0; i < possition; i++)
            {
                if (indexPtr->previous == nullptr)
                { // Check for segmentation fault scenario
                    throw std::out_of_range("Segmentation error: Index out of bounds");
                }

                indexPtr = indexPtr->previous;
            }
            (indexPtr->next)->previous = newnode;
            newnode->next = indexPtr->next;
            newnode->previous = indexPtr;
            indexPtr->next = newnode;
        }
        catch (...)
        {
            cout << "index error";
        }
    }
};

int main()
{
    linkedlist mylink = linkedlist();
    mylink.PushTail(5);
    mylink.PushTail(75);
    mylink.pushIndex(1, 88);

    return 0;
}