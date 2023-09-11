#include <bits/stdc++.h>

using namespace std;
class node
{
public:
    int data;
    node *next;
    node *prev;
};

class doublyLinkedList
{
public:
    node *head;
    int size;
    doublyLinkedList()
    {
        head = NULL;
        size = 0;
    }

    node *createNode(int value)
    {
        node *newNode = new node;
        newNode->data = value;
        newNode->next = NULL;
        newNode->prev = NULL;
        return newNode;
    }

    // insert node with the given value at the head
    void insert_at_head(int value)
    {
        size++;
        node *a = createNode(value);
        if (head == NULL)
        {
            head = a;
            return;
        }
        head->prev = a;
        a->next = head;
        head = a;
    }

    void insert_at_any_index(int index, int value)
    {
        if (index < 0 || index > size)
        {
            return;
        }

        if (index == 0)
        {
            insert_at_head(value);
            return;
        }

        node *a = head;
        int current_index = 0;

        while (current_index != index - 1)
        {
            a = a->next;
            current_index++;
        }
        size++;
        node *newNode = createNode(value);
        newNode->next = a->next;
        node *b = a->next;
        b->prev = newNode;
        newNode->prev = a;
        a->next = newNode;
    }

    void delete_last_node()
    {
        node *a = head;
        int current_index = 0;
        while (current_index != size - 1)
        {
            a = a->next;
            current_index++;
        }
        node *b = a->prev;
        delete a;
        b->next = NULL;
    }

    int find_value(int index)
    {
        node *a = head;
        int current_index = 0;

        while (a != NULL)
        {
            if (current_index == index)
            {
                return a->data;
            }
            a = a->next;
            current_index++;
        }
    }

    void deleteNode(int index)
    {
        if (index < 0 || index >= size)
        {
            return;
        }
        if (head == NULL)
        {
            return;
        }
        node *a = head;
        int current_index = 0;

        while (current_index != index)
        {
            a = a->next;
            current_index++;
        }
        node *b = a->next;
        node *c = a->prev;

        if (b != NULL)
        {
            b->prev = c;
        }

        if (c != NULL)
        {
            c->next = b;
        }
        delete a;
        if (index == 0)
        {
            head = b;
        }
        size--;
    }

    // for printing in reverse order
    //  step-1:traverse to the last node
    //  step-2:swap next and prev of each node [the next node will be the previous]
    //  step-3:assign head to the last node
    void reverseList()
    {
        if (head == NULL)
        {
            return;
        }
        node *a = head;
        int current_index = 0;
        while (current_index != size - 1)
        {
            a = a->next;
            current_index++;
        }
        node *b = head;
        while (b != NULL)
        {
            swap(b->next, b->prev);
            b = b->prev;
        }
        head = a;
    }

    void checkPalindrome()
    {
        node *a = head;
        node *b = head;
        int current_index = 0;
        while (current_index != size - 1)
        {
            b = b->next;
            current_index++;
        }
        int flag = 0;
        while (a && b != NULL)
        {
            if (a->data == b->data)
            {
                flag++;
            }
            a = a->next;
            b = b->prev;
        }

        if (flag==size)
        {
            cout << "True" << endl;
        }
        else
        {
            cout << "False" << endl;
        }
    }

    int getSize()
    {
        return size;
    }

    void traverse()
    {
        node *a = head;
        while (a != NULL)
        {
            cout << a->data << " ";
            a = a->next;
        }
        cout << "\n";
    }
};

int main()
{
    doublyLinkedList dl;
    dl.insert_at_head(1);
    dl.insert_at_head(2);
    dl.insert_at_head(3);
    dl.insert_at_head(2);
    dl.insert_at_head(1);

    // dl.insert_at_head(30);
    // dl.insert_at_head(40);
    // dl.insert_at_any_index(1,25);
    // dl.delete_last_node();
    // cout<<dl.find_value(2);
    dl.traverse();
    dl.checkPalindrome();
    // dl.traverse();
    // dl.reverseList();
    // dl.traverse();
    // cout<<dl.getSize();
}