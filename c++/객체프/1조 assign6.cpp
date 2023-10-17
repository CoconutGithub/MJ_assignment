#include<iostream>
#include<string>
using namespace std;


class List
{
protected:
    int key;
    List* next;
public:
    void Initialize();
    int find(int key);
    bool is_empty();
    void Insert(int key);
    void Delete(int key);
    void Show();
    void Destruct();
    List()
    {
        Initialize();
    }
    List(int _key)
    {
        Initialize();
        key = _key;
    }
};

void List::Initialize()
{
    key = 0;
    next = NULL;
}

void List::Insert(int key)
{
    List* newNode = new List(key);
    if (next == NULL)
    {
        newNode->next = NULL;
    }
    else
    {
        newNode->next = next;
    }
    next = newNode;
}

int List::find(int key)
{
    List* temp = next;
    if (is_empty())
        return 0;
    else
    {
        int pos = 1;
        while (temp != NULL && temp->key != key)
        {
            pos++;
            temp = temp->next;
        }
        return(temp == NULL) ? 0 : pos;
    }
}

void List::Delete(int key)
{
    int position = find(key);
    if (position == 0)
    {
        cout << "No such data" << endl;
        return;
    }
    while (position != 0) {
        if (position == 1)
        {
            List* backup = next;
            next = next->next;
            delete backup;
        }
        else
        {
            List* temp = next;
            for (int i = 2; i < position; i++)
            {
                temp = temp->next;
            }
            List* backup = temp->next;
            temp->next = temp->next->next;
            delete backup;
        }
        position = find(key);
    }
}

void List::Show()
{
    List* nowNode = next;
    if (is_empty())
        cout << "List is empty" << endl;
    while (nowNode != NULL)
    {
        cout << nowNode->key << " ";
        nowNode = nowNode->next;
    }
    cout << endl;
}

bool List::is_empty()
{
    return(next == NULL);
}

void List::Destruct()
{
    if (next == NULL)
    {
        return;
    }
    List* p = next;
    List* n = next->next;
    while (true)
    {
        delete p;
        if (n != NULL)
        {
            p = n;
            n = n->next;
        }
        else
        {
            break;
        }
    }
    return;
}

int main()
{
    List list;
    string str;
    int num = 0;


    while (true)
    {
        cin >> str;
        if (str == "quit" || str == "q" || str == "Q")
            break;
        cin >> num;
        if (str == "i" || str == "I")
        {
            list.Insert(num);
            list.Show();
        }
        else if (str == "d" || str == "D")
        {
            list.Delete(num);
            list.Show();
        }
        else
        {
            cout << "잘못입력하였습니다.\n";
        }
    }
    list.Destruct();

    return 0;
}