#include <iostream>

/* My LL implementation after wathcing the lesson "5-linked-list-implementation" */

using namespace std;

struct Node
{
  int data;
  Node *link;
};

class Linked_List
{
private:
  Node *head = nullptr;
  Node *get_tail();

public:
  void add_node(int data);
  void display();
};

Node *Linked_List::get_tail()
{
  if (head == nullptr)
    return head;

  Node *temp = head;
  while (temp->link != nullptr)
    temp = temp->link;

  return temp;
}

void Linked_List::add_node(int data)
{
  Node *temp = new Node;
  temp->data = data;
  temp->link = nullptr;

  Node *tail = get_tail();
  if (tail == nullptr)
  {
    head = temp;
  }
  else
  {
    tail->link = temp;
  }
}

void Linked_List::display()
{
  if (head == nullptr)
  {
    cout << "Linked list is empty" << endl;
  }
  else
  {
    cout << "--- Head ---" << endl;
    Node *temp = head;
    while (temp != nullptr)
    {
      cout << "data: " << temp->data << ", address: " << temp << ", link: " << temp->link << endl;
      temp = temp->link;
    };
    cout << "--- Tail ---" << endl;
  }
}

int main()
{
  Linked_List list;

  list.display();

  list.add_node(2);
  list.add_node(4);
  list.add_node(6);
  list.add_node(8);

  list.display();

  return 0;
}