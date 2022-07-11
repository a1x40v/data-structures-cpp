#include <iostream>

using namespace std;

struct Node
{
  int data;
  Node *next;
};

void insert(Node **ptr_head, int x);
void print(Node *head);

void insert(Node **ptr_head, int x)
{
  Node *temp = new Node;
  temp->data = x;
  temp->next = *ptr_head;
  *ptr_head = temp;
}

void print(Node *head)
{
  cout << "List is: ";
  while (head != nullptr)
  {
    cout << head->data << " ";
    head = head->next;
  }
  cout << endl;
}

int main()
{
  Node *head{nullptr}; // local variable

  cout << "How many numbers? ";
  int n;
  cin >> n;

  for (int i{0}; i < n; i++)
  {
    cout << endl
         << "Enter the number: ";
    int x;
    cin >> x;
    insert(&head, x);
    print(head);
  }
}