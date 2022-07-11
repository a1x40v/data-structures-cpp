#include <iostream>

using namespace std;

void insert(int data, int n);
void print();

struct Node
{
  int data;
  Node *next;
};

Node *head;

void insert(int data, int n)
{
  Node *temp1 = new Node();
  temp1->data = data;
  temp1->next = nullptr;
  if (n == 1)
  {
    temp1->next = head;
    head = temp1;
    return;
  }
  Node *temp2 = head;
  for (int i = 0; i < n - 2; i++)
  {
    temp2 = temp2->next;
  }
  temp1->next = temp2->next;
  temp2->next = temp1;
}

void print()
{
  Node *temp = head;
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

  insert(2, 1); // 2
  insert(3, 2); // 2,3
  insert(4, 1); // 4,2,3
  insert(5, 2); // 4,5,2,3
  print();

  return 0;
}