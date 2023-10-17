#include<iostream>
using namespace std;

struct node_type {
    int key;
    node_type* next;
};

void initialize(node_type* head)
{
    head->key = 0;
    head->next = NULL;
}

void insert(node_type* head, int key)
{
    node_type* newNode = new node_type;
    newNode->key = key;
    newNode->next = head->next;
    head->next = newNode;

}

void extract(node_type* head, int key)
{

    node_type* cur = head;

    while (cur->next != NULL)
    {
        if (cur->next->key == key)
        {
            node_type* del = cur->next;
            if (del->next != NULL)
            {
                cur->next = del->next;
            }
            else
            {
                cur->next = NULL;
            }
            delete(del);
            return;
        }
        cur = cur->next;
    }
}

void show(node_type* head)
{
    node_type* nowNode = head;
    while (nowNode->next != NULL)
    {
        nowNode = nowNode->next;
        cout << nowNode->key;
        cout << " ";
    }
    cout << "\n";
}

bool is_empty(node_type* head)
{
    if (head->next == NULL)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void destruct(node_type* head)
{
    if (head->next != NULL)
    {
        destruct(head->next);
    }
    delete head;
}

int main()
{
    node_type* list = new node_type;
    char ch = 0;
    int num = 0;
    initialize(list);

    while (true)
    {
        cin >> ch >> num;
        if (ch == 'i')
        {
            insert(list, num);
            show(list);
        }
        else if (ch == 'd')
        {
            extract(list, num);
            show(list);
        }
        else if (ch == 'q')
            break;
    }
    destruct(list);

    return 0;
}


