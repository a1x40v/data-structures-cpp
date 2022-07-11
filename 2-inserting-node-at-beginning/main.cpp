#include <iostream>

using namespace std;

void insert(int x);
void print();

struct Node
{
  int data;
  Node *next;
};

Node *head{nullptr}; // global variable, can be accessed anywhere

void insert(int x)
{
  Node *temp = new Node;
  temp->data = x;
  temp->next = head;
  head = temp;
}

void print()
{
  Node *temp = head;
  cout << "List is: ";
  while (temp != nullptr)
  {
    cout << temp->data << " ";
    temp = temp->next;
  }
  cout << endl;
}

int main()
{
  head = nullptr; // empty list

  cout << "How many numbers? ";
  int n;
  cin >> n;

  for (int i{0}; i < n; i++)
  {
    cout << endl
         << "Enter the number: ";
    int x;
    cin >> x;
    insert(x);
    print();
  }
}