// Link List Nari Vuri
#include <iostream>
using namespace std;

// For Create A Node
class Node
{
public:
    int data;
    Node *next;

    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

// LinkedList class
class List
{
    Node *head;

public:
    List() // constructor
    {
        head = NULL;
    }

    // Function to insert at first
    void pushFront(int val)
    {
        Node *newNode = new Node(val); // node create
        if (head == NULL)
        {
            head = newNode;
            return;
        }
        else
        {
            newNode->next = head;
            head = newNode;
        }
    }

    // Function to insert at last
    void pushBack(int val)
    {
        Node *newNode = new Node(val);

        if (head == NULL)
        {
            head = newNode;
        }
        else
        {
            Node *temp = head;

            while (temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = newNode;
        }
    }

    // Function to delete from first
    void popFront()
    {
        if (head == NULL)
        {
            cout << "List is Empty.";
            return;
        }

        Node *temp = head;
        head = head->next;
        temp->next = NULL;

        delete temp;
    }

    // Function to delete from last
    void popback()
    {
        if (head == NULL)
        {
            cout << "List is Empty.";
            return;
        }

        if (head->next == NULL) // only one element
        {
            delete head;
            head = NULL;
            return;
        }

        Node *temp = head;

        while (temp->next->next != NULL)
        {
            temp = temp->next;
        }
        delete temp->next;
        temp->next = NULL;
    }

    // function for display linked List
    void displayList()
    {
        Node *temp = head;

        while (temp != NULL)
        {
            cout << temp->data << "->";
            temp = temp->next;
        }
        cout << "NULL";
    }
};

// Main Function
int main()
{

    List l;

    l.pushFront(2);
    l.pushFront(3);
    l.pushFront(4);

    l.pushBack(5);
    l.pushBack(6);
    l.pushBack(7);

    l.popFront();

    l.popback();

    l.displayList();

    return 0;
}